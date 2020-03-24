#include "vispurple.h"

Vispurple::Vispurple(QWidget *parent)
    : QMainWindow(parent), livescreen({ this })
{
    ui.setupUi(this);

    livescreen.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    livescreen.setAlignment(Qt::AlignCenter);
    livescreen.setIndent(0);   

    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(60 / 1000);

}

void Vispurple::update()
{
    int x = 0;
    int y = 0;
    int width = 0;
    int height = 0;

    QPixmap pixmap = get_original_screen(0, x, y, width, height);
    black_and_white(pixmap);
    set_pixmap_in_screen(0, pixmap, x, y, width, height);
    livescreen.setPixmap(pixmap.scaled(livescreen.size(), Qt::KeepAspectRatioByExpanding));
}

void Vispurple::black_and_white(QPixmap& pixmap)
{
    QImage image = pixmap.toImage();
    
    int     average = 0;
    int x = 0;
    int y = 0;
    for (int i = 0; i < image.height() * image.width(); ++i)
    {
        average      = image.pixelColor(x, y).red();
        average     += image.pixelColor(x, y).green();
        average     += image.pixelColor(x, y).blue();

        average *= 0.33f;

        image.setPixelColor(x, y, QColor{ average, average, average, 255 });

        ++x;
        if (x > image.width())
        {
            x = 0;
            ++y;
        }
    }  

    pixmap = QPixmap::fromImage(image);
}

QPixmap Vispurple::get_original_screen(
    WId     window,
    int& x,
    int& y,
    int& width,
    int& height
    )
{
    // Get the window handler
    HWND hwnd = get_window_handler(window, x, y, width, height);

    // Device context where copy screen data
    HDC display_dc = GetDC(nullptr);
    HDC bitmap_dc = CreateCompatibleDC(display_dc);
    HBITMAP bitmap = CreateCompatibleBitmap(display_dc, width, height);
    HGDIOBJ null_bitmap = SelectObject(bitmap_dc, bitmap);

    // Copy the data from window to bitmap_dc
    HDC window_dc = GetDC(hwnd);
    BitBlt(bitmap_dc, 0, 0, width, height, window_dc, x, y, SRCCOPY | CAPTUREBLT);

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

void Vispurple::set_pixmap_in_screen(
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

    hdc = BeginPaint(hwnd, &ps);
    hdcMem = CreateCompatibleDC(hdc);
    oldBitmap = SelectObject(hdcMem, hbitmap);

    GetObject(hbitmap, sizeof(bitmap), &bitmap);
    BitBlt(hdc, 0, 0, width, height, hdcMem, x, y, SRCCOPY);

    SelectObject(hdcMem, oldBitmap);
    DeleteDC(hdcMem);

    EndPaint(hwnd, &ps);

    DeleteObject(hbitmap);

}

HWND Vispurple::get_window_handler(
    WId     window,
    int& x,
    int& y,
    int& width,
    int& height
    )
{
    // Window handler
    HWND hwnd = reinterpret_cast<HWND>(window);

    RECT r;

    // If the given WId exists
    if (hwnd)
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
    x += r.left;
    y += r.top;
    width = r.right - r.left;
    height = r.bottom - r.top;

    return hwnd;
}
