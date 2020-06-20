/*
 * File: vispurple__tfg_edition.h
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

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vispurple__tfg_edition.h"

#include <Image.hpp>
#include <ScreenMedia.hpp>
#include <Report.hpp>

#include <memory>

#include <qtimer.h>
#include <qfiledialog.h>

class Vispurple__tfg_edition : public QMainWindow
{
    Q_OBJECT

    enum TOOL_MODES { analyze = 0, simulation = 1 };
    enum VISUALIZATION {window, image};

    float delta_time_milliseconds;

    ScreenMedia media_screen;
    Report      report;
    VISUALIZATION content_to_previsualizate;

    std::shared_ptr<Image> original;
    std::shared_ptr<QTimer> timer;

public:

    /**
    @brief Creates an instance
    @param parent The widget parent
    */
    Vispurple__tfg_edition(QWidget* parent = Q_NULLPTR);
    

private:
    Ui::Vispurple__tfg_editionClass ui;


private slots:
    
    /**
    @brief Update the window events
    */
    void update();

    /**
    @brief Sets the frame rate
    */
    void set_delta_time();    

    /**
    @brief Load an image from the system
    */
    void load_image();

    /**
    @brief Exports the accessibility report to the system
    */
    void export_report();

    /**
    @brief Update the available windows of the system
    */
    void update_available_windows();

    /**
    @brief Select a window to preview
    */
    void select_current_window();

    /**
    @brief Updates the visual accessibility
    */
    void update_accessibility_index();

    /**
    @brief Simulate the selected 
    */
    void simulate();

    /**
    @brief Saves the current previsualization as image
    */
    void save_image();
    

private:

    /**
    @brief Obtain the previsualization image
    */
    Image obtain_current_image();
   
};
