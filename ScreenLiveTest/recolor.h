//
// File: recolor.h
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

#ifndef RECOLOR_H
#define RECOLOR_H
#include <QColor>
#include <QPixmap>

///
/// \brief This class allows to modify the colors of a given pixels map
///
class Recolor
{

public:

    enum modes{colorblind_a, colorblind_b, colorblind_c, high_contrast, none};
    modes current_mode;

private:

    struct colorblind_a_changes
    {
        //TODO
    };
    struct colorblind_b_changes
    {
        //TODO
    };
    struct colorblind_c_changes
    {
        //TODO
    };



public:

    Recolor();

    void recolor_image(QPixmap* to_recolor);


};

#endif // RECOLOR_H
