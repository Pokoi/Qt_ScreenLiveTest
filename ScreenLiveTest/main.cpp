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

ScreenPreview sp;
Recolor r;
LiveScreen w;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    sp = ScreenPreview(&w.get_preview_pixmap());
    r = Recolor();


    w.show();


    /*
     *
     *  timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(update()));
        timer -> start(60/1000);
     *
     *
     */


    return a.exec();
}

void update()
{
    sp.capture_screen();

    if(r.get_need_to_recolor()) r.recolor_image(&w.get_preview_pixmap());

    resize_livescreen_label();
}
