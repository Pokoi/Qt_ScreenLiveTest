//
// File: livescreen.h
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

#ifndef WIDGET_H
#define WIDGET_H

#include <QPushButton>
#include <QDesktopWidget>
#include <QGroupBox>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QWindow>
#include <QStandardPaths>
#include <QDir>
#include <QFileDialog>
#include <QImageWriter>
#include <QMessageBox>

#include "blackboard.h"
#include "taskstack.h"
#include "recolor.h"
#include "screenpreview.h"


namespace Ui {
class Widget;
}

class MainWindow : public QWidget
{
    Q_OBJECT

private:

    /**
     * @brief A pointer to the button that launch the event to
     * take screenshots
     */
    QPushButton *screenshot_button;
    /**
     * @brief A pointer to the button that converts the white pixels into
     * red ones
     */
    QCheckBox   *white_to_red_button;

    Ui::Widget  *ui;


public:

    /**
     * @brief Updates the display of the region captured in the right scale
     */
    static void resize_livescreen_label();
    /**
     * @brief Gets the global instance to this class
     * @return
     */
    static MainWindow & get_instance()
    {
        static MainWindow object;
        return object;
    }

protected:

    /**
     * @brief Override method for the resize event, called when
     * this window is resized. This event updates the scale of the
     * pixmap with the preview of the region captured and calls the
     * resize_livescreen_label method if needed.
     * @param The resize event
     */
    void resizeEvent(QResizeEvent* event) override;

private slots:

    /**
     * @brief Saves the preview of the region captured as an image
     */
    void save_screenshot();
    /**
     * @brief Creates the task that changes the white color to red in the
     * task stack.
     */
    void toggle_recolor() { TaskStack::Subscribe(new Task(*Recolor::white_to_red)); }

private:

    MainWindow(const MainWindow &) = delete;
    /**
     * @brief Creates a new object of this class
     * @param A pointer to his widget parent. Default value
     * is nullptr.
     */
    explicit MainWindow(QWidget* parent = nullptr);

    /**
     * @brief Creates the interface elements of this window
     */
    void initialize_interface();
    /**
     * @brief Create the main tasks in the task stack.
     */
    void create_main_tasks();

   ~MainWindow() override{ delete ui;}

};

#endif // WIDGET_H
