#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H

#include "recolor.h"

#include <QPixmap>
#include <QScreen>



class ScreenPreview
{

public:

    ScreenPreview(QPixmap* original_pixmap);

private:

    void capture_screen(QScreen* screen);

    Recolor color_modifier;

    QPixmap* preview_pixmap;
};

#endif // SCREENMANAGER_H
