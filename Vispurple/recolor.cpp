//
// File: recolor.cpp
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

#include "recolor.h"

void Recolor::white_to_red()
{
    // code from
    // https://www.qtcentre.org/threads/48211-How-to-change-QPixmap-color-from-black-to-red?p=300215#post300215
    QImage image = BlackBoard::get_pixmap()->toImage();

    QColor new_color = QColor(255, 0, 0, 255);
    QColor old_color = QColor(255, 255, 255, 255);

    for(int y = 0; y < image.height(); y++)
      for(int x= 0; x < image.width(); x++)
          if(image.pixelColor(x,y) == old_color) image.setPixelColor(x,y,new_color);

   BlackBoard::get_pixmap()->convertFromImage(image);

}
