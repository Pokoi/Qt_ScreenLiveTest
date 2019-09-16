#include "recolor.h"

Recolor::Recolor()
{

}

void Recolor::recolor_image(QPixmap* to_recolor)
{
    // code from
    // https://www.qtcentre.org/threads/48211-How-to-change-QPixmap-color-from-black-to-red?p=300215#post300215
    QImage image = to_recolor->toImage();

    QColor new_color = QColor(255, 0, 0, 255);
    QColor old_color = QColor(255, 255, 255, 255);

    for(int y = 0; y < image.height(); y++)
      for(int x= 0; x < image.width(); x++)
          if(image.pixelColor(x,y) == old_color) image.setPixelColor(x,y,new_color);
    to_recolor->convertFromImage(image);

}
