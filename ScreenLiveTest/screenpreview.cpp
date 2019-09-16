#include "screenpreview.h"

ScreenPreview::ScreenPreview(QPixmap* original_pixmap) : preview_pixmap (original_pixmap)
{
    color_modifier = Recolor();
}


void ScreenPreview::capture_screen(QScreen* screen)
{
    *preview_pixmap = screen -> grabWindow(0);
}
