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

#include <QWidget>
#include <QPushButton>
#include <QDesktopWidget>
#include <QLabel>
#include <QTimer>
#include <QGroupBox>
#include <QScreen>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QWindow>
#include <QStandardPaths>
#include <QDir>
#include <QFileDialog>
#include <QImageWriter>
#include <QMessageBox>
#include <QBitmap>
#include <QPainter>
#include <QColor>


namespace Ui {
class Widget;
}

class LiveScreen : public QWidget
{
    Q_OBJECT

private:

    static LiveScreen * instance;

    Ui::Widget*  ui;
    QPixmap      original_pixmap;
    QLabel*      livescreen_label;
    QPushButton* screenshot_button;
    QCheckBox*   recolor_button;
    QScreen*     screen;
    QRect        screenGeometry;
    bool         need_to_recolor;


public:
    explicit LiveScreen(QWidget* parent = nullptr);
    ~LiveScreen() override;

    QPixmap & get_preview_pixmap() { return original_pixmap;}
    QScreen * get_screen() const   { return screen;}
    const bool & get_need_to_recolor() const { return  need_to_recolor;}
    void resize_livescreen_label();
    static LiveScreen* get_instance(){if(instance == 0) instance = new LiveScreen(); return instance;}

protected:
    void resizeEvent(QResizeEvent* event) override;

private slots:
    void save_screenshot();
    void toggle_recolor(){need_to_recolor = !need_to_recolor;}

private:
    void initialize_interface();
};

#endif // WIDGET_H
