#ifndef TESTGRABORIGINALSCREEN_H
#define TESTGRABORIGINALSCREEN_H

#endif // TESTGRABORIGINALSCREEN_H


#include <QtCore/qt_windows.h>

#include <QtCore/qsettings.h>
#include <QtGui/qpixmap.h>
#include <QtGui/qguiapplication.h>
#include <QtGui/qscreen.h>

#include <QtCore/qdebug.h>

#include <QtWinExtras/QtWin>
#include <QTimer>
#include <memory>
#include <QObject>

class TestGrabOriginalScreen : public QObject
{

    std::shared_ptr<QTimer> timer;

public:

    TestGrabOriginalScreen();

    QPixmap get_original_screen (
                                    WId     window,
                                    int &   x,
                                    int &   y,
                                    int &   width,
                                    int &   height
                                );


    void set_pixmap_in_screen  (
                                    WId     window,
                                    QPixmap pixmap,
                                    int     x,
                                    int     y,
                                    int     width,
                                    int     height
                                );


    HWND get_window_handler (
                                WId     window,
                                int &   x,
                                int &   y,
                                int &   width,
                                int &   height
                            );


    void white_to_red(QPixmap & pixmap);

    void update();

};


