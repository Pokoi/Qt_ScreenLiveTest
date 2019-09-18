//
// File: screenpreview.h
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

#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H


#include <QPixmap>
#include <QScreen>


///
/// \brief
/// This class provides the conversion of the currently
/// selected screen region into a pixels map in order to previewing it
///
class ScreenPreview
{

public:

    enum capture_modes{screen, window};

private:

    QPixmap* preview_pixmap;
    capture_modes current_capture_mode;

public:

    ScreenPreview(QPixmap* original_pixmap);
    void capture_screen(QScreen* screen);

    capture_modes get_capture_mode() const   { return current_capture_mode;}
    void set_capture_mode (capture_modes cm) {  current_capture_mode == cm;}

private:

    void capture_window();



};

#endif // SCREENMANAGER_H
