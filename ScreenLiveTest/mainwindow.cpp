//
// File: livescreen.cpp
// Project: Vispurple
// Description : Vispurple is an open source cross-platform desktop simulator to evaluate
// the visual accessibility of any graphic element for any visual perception condition
// Author: Jesús Fermín Villar Ramírez (pokoidev)

// © Copyright (C) 2019  pokoidev

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#include "mainwindow.h"
#include "ui_widget.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    BlackBoard::set_label(new QLabel(this));

    ui->setupUi(this);

    initialize_interface();

    setWindowTitle(tr("Live Screen"));

}

void MainWindow::initialize_interface()
{
    QLabel *livescreen_label = BlackBoard::get_label();

    livescreen_label -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    livescreen_label -> setAlignment (Qt::AlignCenter);
    livescreen_label -> setIndent(0);

    QRect screen_geometry = QApplication::desktop()->screenGeometry(this);
        livescreen_label->setMinimumSize(screen_geometry.width() / 4, screen_geometry.height() / 4);
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(livescreen_label);

     QGroupBox *group = new QGroupBox(tr("Options"), this);
     screenshot_button = new QPushButton(tr("Screenshot"), group);
         connect(screenshot_button, &QPushButton::clicked, this, &MainWindow::save_screenshot);
     white_to_red_button = new QCheckBox(tr("Recolor"), group);
        connect(white_to_red_button, &QCheckBox::clicked, this, &MainWindow::toggle_recolor);

     QGridLayout *options_GroupBox_layout = new QGridLayout(group);
         options_GroupBox_layout->addWidget(screenshot_button, 0, 1);
         options_GroupBox_layout->addWidget(white_to_red_button, 0, 2);


    mainLayout->addWidget(group);

    BlackBoard::set_screen(QGuiApplication::primaryScreen());

    if(const QWindow *window = windowHandle())BlackBoard::set_screen(window->screen());
    if(BlackBoard::get_screen() == nullptr) return;


    BlackBoard::set_label(livescreen_label);
}

void MainWindow::save_screenshot()
{
    QPixmap pixmap_to_save = *BlackBoard::get_pixmap();

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

void MainWindow::resizeEvent(QResizeEvent* event)
{
    QLabel *livescreen_label = BlackBoard::get_label();

    QSize scaledSize = BlackBoard::get_pixmap()->size();
    scaledSize.scale(livescreen_label->size(), Qt::KeepAspectRatioByExpanding);

    if(!livescreen_label -> pixmap() || scaledSize != livescreen_label -> pixmap() -> size()) resize_livescreen_label();

}

void MainWindow::resize_livescreen_label()
{
    QLabel *livescreen_label = BlackBoard::get_label();
    livescreen_label->setPixmap(BlackBoard::get_pixmap()->scaled(livescreen_label->size(), Qt::KeepAspectRatioByExpanding));
}

void MainWindow::create_main_tasks()
{
    TaskStack::Subscribe(new Task(*ScreenPreview::capture_screen));
    TaskStack::Subscribe(new Task(*MainWindow::resize_livescreen_label), &TaskStack::late_tasks);
}




