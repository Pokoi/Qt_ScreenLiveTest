#include "livescreen.h"
#include "ui_widget.h"
#include <QHBoxLayout>
#include <QScreen>
#include <QWindow>
#include <QStandardPaths>
#include <QDir>
#include <QFileDialog>
#include <QImageWriter>
#include <QMessageBox>
#include <QBitmap>
#include <QPainter>
#include <QColor>

LiveScreen::LiveScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    livescreen_label(new QLabel(this))
{
    ui->setupUi(this);

    livescreen_label -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    livescreen_label -> setAlignment (Qt::AlignCenter);
    livescreen_label -> setIndent(0);

    QRect screenGeometry = QApplication::desktop()->screenGeometry(this);
        livescreen_label->setMinimumSize(screenGeometry.width() / 4, screenGeometry.height() / 4);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(livescreen_label);

     QGroupBox *group = new QGroupBox(tr("Options"), this);
     screenshot_button = new QPushButton(tr("Screenshot"), group);
         connect(screenshot_button, &QPushButton::clicked, this, &LiveScreen::save_screenshot);
     recolor_button = new QCheckBox(tr("Recolor"), group);
        connect(recolor_button, &QCheckBox::clicked, this, &LiveScreen::toggle_recolor);

     QGridLayout *options_GroupBox_layout = new QGridLayout(group);
         options_GroupBox_layout->addWidget(screenshot_button, 0, 1);
         options_GroupBox_layout->addWidget(recolor_button, 0, 2);


    mainLayout->addWidget(group);

    screen = QGuiApplication::primaryScreen();

    if(const QWindow *window = windowHandle())screen = window->screen();
    if(!screen) return;

    capture_screen();

    setWindowTitle(tr("Live Screen"));

    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer -> start(60/1000);

}

void LiveScreen::save_screenshot()
{
    QPixmap pixmap_to_save = original_pixmap;

    const QString format = "png";
        QString initialPath = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
        if (initialPath.isEmpty())
            initialPath = QDir::currentPath();
        initialPath += tr("/untitled.") + format;

        QFileDialog fileDialog(this, tr("Save As"), initialPath);
        fileDialog.setAcceptMode(QFileDialog::AcceptSave);
        fileDialog.setFileMode(QFileDialog::AnyFile);
        fileDialog.setDirectory(initialPath);
        QStringList mimeTypes;
        const QList<QByteArray> baMimeTypes = QImageWriter::supportedMimeTypes();
        for (const QByteArray &bf : baMimeTypes)
            mimeTypes.append(QLatin1String(bf));
        fileDialog.setMimeTypeFilters(mimeTypes);
        fileDialog.selectMimeTypeFilter("image/" + format);
        fileDialog.setDefaultSuffix(format);
        if (fileDialog.exec() != QDialog::Accepted)
            return;
        const QString fileName = fileDialog.selectedFiles().first();
        if (!pixmap_to_save.save(fileName)) {
            QMessageBox::warning(this, tr("Save Error"), tr("The image could not be saved to \"%1\".")
                                 .arg(QDir::toNativeSeparators(fileName)));
        }
}

void LiveScreen::capture_screen()
{
    original_pixmap = screen -> grabWindow(0);
}

void LiveScreen::recolor_image()
{
    // code from
    // https://www.qtcentre.org/threads/48211-How-to-change-QPixmap-color-from-black-to-red?p=300215#post300215
    QImage tmp = original_pixmap.toImage();

    QColor new_color = QColor(255, 0, 0, 255);
    QColor old_color = QColor(255, 255, 255, 255);

    for(int y = 0; y < tmp.height(); y++)
      for(int x= 0; x < tmp.width(); x++)
          if(tmp.pixelColor(x,y) == old_color) tmp.setPixelColor(x,y,new_color);

    original_pixmap = QPixmap::fromImage(tmp);
}

void LiveScreen::update()
{
    capture_screen();

    if(need_to_recolor) recolor_image();

    resize_livescreen_label();
}

LiveScreen::~LiveScreen()
{
    delete ui;
}

void LiveScreen::resizeEvent(QResizeEvent* event)
{
    QSize scaledSize = original_pixmap.size();
    scaledSize.scale(livescreen_label->size(), Qt::KeepAspectRatioByExpanding);

    if(!livescreen_label -> pixmap() || scaledSize != livescreen_label -> pixmap() -> size()) resize_livescreen_label();
}

void LiveScreen::resize_livescreen_label()
{
    livescreen_label->setPixmap(original_pixmap.scaled(livescreen_label->size(), Qt::KeepAspectRatioByExpanding));
}




