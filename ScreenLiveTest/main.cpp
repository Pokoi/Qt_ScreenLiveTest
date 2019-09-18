//
// File: main.cpp
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

#include "livescreen.h"
#include "screenpreview.h"
#include <QApplication>
#include <QTimer>
#include <QObject>


Recolor * re;
ScreenPreview * sp;
LiveScreen * w;


void update()
{
    if(sp->get_capture_mode()==ScreenPreview::screen) sp->capture_screen(w->get_screen());
    if(re->get_need_to_recolor()) re->recolor_image(&w->get_preview_pixmap());
    w->resize_livescreen_label();
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    w  = new LiveScreen();
    sp = new ScreenPreview(&w->get_preview_pixmap());
    re = new Recolor();


    w->show();

    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, update);
    timer.start(0);

    return a.exec();
}
