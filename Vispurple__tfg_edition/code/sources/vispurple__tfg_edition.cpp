/*
 * File: vispurple__tfg_edition.cpp
 * File Created: Thursday, 4th June 2020
 * ––––––––––––––––––––––––
 * Author: Jesus Fermin, 'Pokoi', Villar  (hello@pokoidev.com)
 * ––––––––––––––––––––––––
 * MIT License
 *
 * Copyright (c) 2020 Pokoidev
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "vispurple__tfg_edition.h"
#include <ctime>

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
    update_accessibility_index();
    
    report.add_protanopia_comments(ui.protanopiaObservations->toPlainText().toStdString());
    report.add_deuteranopia_comments(ui.deuteranopiaObservations->toPlainText().toStdString());
    report.add_tritanopia_comments(ui.tritanopiaObservations->toPlainText().toStdString());
    report.add_achromatopsia_comments(ui.achromatopsiaObservations->toPlainText().toStdString());
    report.add_protanopia_comments(ui.protanopiaObservations->toPlainText().toStdString());
    report.add_deuteranopia_comments(ui.deuteranopiaObservations->toPlainText().toStdString());
    report.add_tritanopia_comments(ui.tritanopiaObservations->toPlainText().toStdString());
    report.add_achromatopsia_comments(ui.achromatopsiaObservations->toPlainText().toStdString());


    std::string dir = QFileDialog::getExistingDirectory(this, tr("Select folder"),
        "./",
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
    ui.achromatopsiaIndexLabel->setText(report.get_achromatopsia_accessibility_index().c_str());
    ui.protanomalyIndexLabel->setText(report.get_protanomaly_accessibility_index().c_str());
    ui.deuteranomalyIndexLabel->setText(report.get_deuteranomaly_accessibility_index().c_str());
    ui.tritanomalyIndexLabel->setText(report.get_tritanomaly_accessibility_index().c_str());
    ui.achromatomalyIndexLabel->setText(report.get_achromatomaly_accessibility_index().c_str());

    ui.protanopiaLabel->setPixmap(QPixmap::fromImage(report.get_protanopia_sobel()->convert_to_qimage().scaled(ui.protanopiaLabel->width(), ui.protanopiaLabel->height(), Qt::KeepAspectRatio)));
    ui.deuteranopiaLabel->setPixmap(QPixmap::fromImage(report.get_deuteranopia_sobel()->convert_to_qimage().scaled(ui.deuteranopiaLabel->width(), ui.deuteranopiaLabel->height(), Qt::KeepAspectRatio)));
    ui.tritanopiaLabel->setPixmap(QPixmap::fromImage(report.get_tritanopia_sobel()->convert_to_qimage().scaled(ui.tritanopiaLabel->width(), ui.tritanopiaLabel->height(), Qt::KeepAspectRatio)));
    ui.achromatopsiaLabel->setPixmap(QPixmap::fromImage(report.get_achromatopsia_sobel()->convert_to_qimage().scaled(ui.achromatopsiaLabel->width(), ui.achromatopsiaLabel->height(), Qt::KeepAspectRatio)));
    ui.protanomalyLabel->setPixmap(QPixmap::fromImage(report.get_protanomaly_sobel()->convert_to_qimage().scaled(ui.protanomalyLabel->width(), ui.protanomalyLabel->height(), Qt::KeepAspectRatio)));
    ui.deuteranomalyLabel->setPixmap(QPixmap::fromImage(report.get_deuteranomaly_sobel()->convert_to_qimage().scaled(ui.deuteranomalyLabel->width(), ui.deuteranomalyLabel->height(), Qt::KeepAspectRatio)));
    ui.tritanomalyLabel->setPixmap(QPixmap::fromImage(report.get_tritanomaly_sobel()->convert_to_qimage().scaled(ui.tritanomalyLabel->width(), ui.tritanomalyLabel->height(), Qt::KeepAspectRatio)));
    ui.achromatomalyLabel->setPixmap(QPixmap::fromImage(report.get_achromatomaly_sobel()->convert_to_qimage().scaled(ui.achromatomalyLabel->width(), ui.achromatomalyLabel->height(), Qt::KeepAspectRatio)));
    
 }

void Vispurple__tfg_edition::simulate()
{   
    ui.previsualizationLabel->setPixmap(QPixmap::fromImage(obtain_current_image().convert_to_qimage()).scaled(ui.previsualizationLabel->width(), ui.previsualizationLabel->height(), Qt::KeepAspectRatio));
}

void Vispurple__tfg_edition::save_image()
{
    Image aux = obtain_current_image();

    std::string dir = QFileDialog::getExistingDirectory(this, tr("Select folder"),
        "./",
        QFileDialog::ShowDirsOnly
        | QFileDialog::DontResolveSymlinks).toStdString();

    time_t rawtime;
    struct tm* timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%d%m%Y_%H%M%S", timeinfo);
    std::string str(buffer);
    
    aux.export_image(dir + "/" + str + "_image.png");
}


Image Vispurple__tfg_edition::obtain_current_image()
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
    else if (ui.achromatopsiaSimulation->isChecked())
    {
        aux.simulate_achromatopsia();
    }
    else if (ui.protanomalySimulation->isChecked())
    {
        aux.simulate_protanomaly();
    }
    else if (ui.deuteranomalySimulation->isChecked())
    {
        aux.simulate_deuteranomaly();
    }
    else if (ui.tritanomalySimulation->isChecked())
    {
        aux.simulate_tritanomaly();
    }
    else if (ui.achromatomalySimulation->isChecked())
    {
        aux.simulate_achromatomaly();
    }
    else if (ui.protanopiaCorrection->isChecked())
    {
        aux.correct_protanopia();
    }
    else if (ui.deuteranopiaCorrection->isChecked())
    {
        aux.correct_deuteranopia();
    }

    if (ui.edgeDetectionCheck->isChecked())
    {
        aux.sobel_colour();
    }

    return aux;
}