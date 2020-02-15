#include "TestGrabOriginalScreen.h"



TestGrabOriginalScreen::TestGrabOriginalScreen()
{
    timer = std::make_shared<QTimer>(this);
    QObject::connect(timer.get(), SIGNAL(timeout()), this, SLOT(update()));
    timer -> start(60/1000);
}

void TestGrabOriginalScreen::update()
{
    int x       = 0;
    int y       = 0;
    int width   = 0;
    int height  = 0;

   QPixmap pixmap = get_original_screen(0, x, y, width, height);
   white_to_red(pixmap);
   set_pixmap_in_screen(0, pixmap, x, y, width, height);
}

QPixmap TestGrabOriginalScreen::get_original_screen (
                                                        WId     window,
                                                        int &   x,
                                                        int &   y,
                                                        int &   width,
                                                        int &   height
                                                    )
{
    // Get the window handler
    HWND hwnd = get_window_handler(window, x, y, width, height);

    // Device context where copy screen data
    HDC display_dc      = GetDC(nullptr);
    HDC bitmap_dc       = CreateCompatibleDC(display_dc);
    HBITMAP bitmap      = CreateCompatibleBitmap(display_dc, width, height);
    HGDIOBJ null_bitmap = SelectObject(bitmap_dc, bitmap);

    // Copy the data from window to bitmap_dc
    HDC window_dc = GetDC(hwnd);
    BitBlt(bitmap_dc, 0, 0, width, height, window_dc, x, y, SRCCOPY|CAPTUREBLT);

    // Clean
    ReleaseDC(hwnd, window_dc);
    SelectObject(bitmap_dc, null_bitmap);
    DeleteDC(bitmap_dc);

    // Create the pixmap to return
    QPixmap pixmap = QtWin::fromHBITMAP(bitmap);

    // Clean
    DeleteObject(bitmap);
    ReleaseDC(nullptr, display_dc);

    return pixmap;

}

void TestGrabOriginalScreen::set_pixmap_in_screen  (
                                                        WId     window,
                                                        QPixmap pixmap,
                                                        int     x,
                                                        int     y,
                                                        int     width,
                                                        int     height
                                                    )
{

    // Get the window handler
    HWND hwnd = get_window_handler(window, x, y, width, height);

    // Create the HBitmap from the pixmap
    HBITMAP hbitmap = QtWin::toHBITMAP(pixmap);

    // Paint
    PAINTSTRUCT     ps;
    HDC             hdc;
    BITMAP          bitmap;
    HDC             hdcMem;
    HGDIOBJ         oldBitmap;

    hdc         = BeginPaint(hwnd, &ps);
    hdcMem      = CreateCompatibleDC(hdc);
    oldBitmap   = SelectObject(hdcMem, hbitmap);

    GetObject(hbitmap, sizeof(bitmap), &bitmap);
    BitBlt(hdc, 0, 0, width, height, hdcMem, x, y, SRCCOPY);

    SelectObject(hdcMem, oldBitmap);
    DeleteDC(hdcMem);

    EndPaint(hwnd, &ps);

    DeleteObject(hbitmap);

}

HWND TestGrabOriginalScreen::get_window_handler (
                                                    WId     window,
                                                    int &   x,
                                                    int &   y,
                                                    int &   width,
                                                    int &   height
                                                )
{
    // Window handler
    HWND hwnd = reinterpret_cast<HWND>(window);

    RECT r;

    // If the given WId exists
    if(hwnd)
    {
        GetClientRect(hwnd, &r);
    }
    // else gets the primary screen
    else
    {
        hwnd = GetDesktopWindow();
       GetWindowRect(hwnd, &r);
    }

    // Set reference values.
    x      += r.left;
    y      += r.top;
    width   = r.right - r.left;
    height  = r.bottom - r.top;

    return hwnd;
}

void TestGrabOriginalScreen::white_to_red(QPixmap & pixmap)
{
    // code from
    // https://www.qtcentre.org/threads/48211-How-to-change-QPixmap-color-from-black-to-red?p=300215#post300215
    QImage image = pixmap.toImage();

    QColor new_color = QColor(255, 0, 0, 255);
    QColor old_color = QColor(255, 255, 255, 255);

    for(int y = 0; y < image.height(); y++)
      for(int x= 0; x < image.width(); x++)
          if(image.pixelColor(x,y) == old_color) image.setPixelColor(x,y,new_color);

    pixmap = QPixmap::fromImage(image);
}

