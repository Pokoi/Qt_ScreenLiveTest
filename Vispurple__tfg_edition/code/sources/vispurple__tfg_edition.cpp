#include "vispurple__tfg_edition.h"


Vispurple__tfg_edition::Vispurple__tfg_edition(QWidget *parent)
    : 
    QMainWindow(parent), 
    report{ "../../assets/reportTemplate.txt" }
{
    ui.setupUi(this);
    
    timer = std::make_shared<QTimer>(this);
    
    update_available_windows();

    ui.availableFPSComboBox->addItem(QString("10"));
    ui.availableFPSComboBox->addItem(QString("30"));
    ui.availableFPSComboBox->addItem(QString("60"));
    ui.availableFPSComboBox->addItem(QString("90"));
    ui.availableFPSComboBox->setCurrentIndex(0);

    
    set_delta_time();
    
    connect(timer.get(), &QTimer::timeout, this, &Vispurple__tfg_edition::update);
    timer->start(delta_time_milliseconds); 

}

void Vispurple__tfg_edition::update()
{
    // Filter by type of visualization
    switch (content_to_previsualizate)
    {
    case VISUALIZATION::window:

        media_screen.capture();
        original = std::make_shared<Image>(media_screen.get_render_pixmap());

        // Filter by behaviour
        switch (ui.tabWidget->currentIndex())
        {
        case TOOL_MODES::analyze:
            
            ui.previsualizationLabel->setPixmap(QPixmap::fromImage(original->convert_to_qimage()).scaled(ui.previsualizationLabel->width(), ui.previsualizationLabel->height(), Qt::KeepAspectRatio));

            break;

        case TOOL_MODES::simulation:

            simulate();

            break;
        }

        break;

    case VISUALIZATION::image:

        // Filter by behaviour
        switch (ui.tabWidget->currentIndex())
        {
        case TOOL_MODES::analyze:                       
            
            break;

        case TOOL_MODES::simulation:
            
            simulate();
            
            break;
        }

        break;
    }

}

void Vispurple__tfg_edition::update_available_windows()
{    
    media_screen.set_current_window_to_capture(ui.availableWindowsComboBox->itemText(ui.availableWindowsComboBox->currentIndex()).toStdString());
    content_to_previsualizate = VISUALIZATION::window;

    std::vector<std::string>& available_windows = media_screen.get_windows_names();

    ui.availableWindowsComboBox->clear();

    for (auto& name : available_windows)
    {
        ui.availableWindowsComboBox->addItem(QString(name.c_str()));
    }   
   
}

void Vispurple__tfg_edition::select_current_window()
{
    media_screen.set_current_window_to_capture(ui.availableWindowsComboBox->itemText(ui.availableWindowsComboBox->currentIndex()).toStdString());
    content_to_previsualizate = VISUALIZATION::window;

    update_available_windows();
}

void Vispurple__tfg_edition::set_delta_time()
{
    timer->stop();    
    //float fps = 20;
    float fps = ui.availableFPSComboBox->itemText(ui.availableFPSComboBox->currentIndex()).toFloat();
    delta_time_milliseconds = fps / 1000;
    timer->start(delta_time_milliseconds);
}

void Vispurple__tfg_edition::load_image()
{
    QFileDialog dialog(this);
    dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
    dialog.setViewMode(QFileDialog::Detail);
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "../../assets", tr("Images (*.png *.xpm *.jpg)"));

    original = std::make_shared<Image>(fileName.toStdString());
    content_to_previsualizate = VISUALIZATION::image;

    ui.previsualizationLabel->setPixmap(QPixmap::fromImage(original->convert_to_qimage()).scaled(ui.previsualizationLabel->width(), ui.previsualizationLabel->height(), Qt::KeepAspectRatio));
}

void Vispurple__tfg_edition::export_report()
{
    report.add_protanopia_comments(ui.protanopiaObservations->toPlainText().toStdString());
    report.add_deuteranopia_comments(ui.deuteranopiaObservations->toPlainText().toStdString());
    report.add_tritanopia_comments(ui.tritanopiaObservations->toPlainText().toStdString());

    update_accessibility_index();

    std::string dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
        "C:/",
        QFileDialog::ShowDirsOnly
        | QFileDialog::DontResolveSymlinks).toStdString();

    report.export_to((dir + "report.pdf").c_str());
}

void Vispurple__tfg_edition::update_accessibility_index()
{   
    report = Report("../../assets/reportTemplate.txt");
    report.set_original_image(original);

    ui.protanopiaIndexLabel->setText(report.get_protanopia_accessibility_index().c_str());
    ui.deuteranopiaIndexLabel->setText(report.get_deuteranopia_accessibility_index().c_str());
    ui.tritanopiaIndexLabel->setText(report.get_tritanopia_accessibility_index().c_str());

    ui.protanopiaLabel->setPixmap(QPixmap::fromImage(report.get_protanopia_sobel()->convert_to_qimage().scaled(ui.protanopiaLabel->width(), ui.protanopiaLabel->height(), Qt::KeepAspectRatio)));
    ui.deuteranopiaLabel->setPixmap(QPixmap::fromImage(report.get_deuteranopia_sobel()->convert_to_qimage().scaled(ui.deuteranopiaLabel->width(), ui.deuteranopiaLabel->height(), Qt::KeepAspectRatio)));
    ui.tritanopiaLabel->setPixmap(QPixmap::fromImage(report.get_tritanopia_sobel()->convert_to_qimage().scaled(ui.tritanopiaLabel->width(), ui.tritanopiaLabel->height(), Qt::KeepAspectRatio)));
    
 }

void Vispurple__tfg_edition::simulate()
{
    Image aux(*original);

    if (ui.protanopiaSimulation->isChecked())
    {
        aux.simulate_protanopia();
    }
    else if (ui.deuteranopiaSimulation->isChecked())
    {
        aux.simulate_deuteranopia();
    }
    else if (ui.tritanopiaSimulation->isChecked())
    {
        aux.simulate_tritanopia();
    }
    
    ui.previsualizationLabel->setPixmap(QPixmap::fromImage(aux.convert_to_qimage()).scaled(ui.previsualizationLabel->width(), ui.previsualizationLabel->height(), Qt::KeepAspectRatio));

}

void Vispurple__tfg_edition::save_image()
{

}