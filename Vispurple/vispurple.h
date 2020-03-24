#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vispurple.h"
#include <memory>

#include <qtimer.h>         // For update timer
#include <qpixmap.h>        // For grab screen

#include <qlabel.h>
#include <qapplication.h>

#include <QtCore/qt_windows.h>
#include <QtCore/qsettings.h>
#include <QtWinExtras/QtWin>


class Vispurple : public QMainWindow
{
    Q_OBJECT

private:

    QTimer * timer;

    QLabel livescreen;

public:
    Vispurple(QWidget *parent = Q_NULLPTR);

    void black_and_white(QPixmap & pixmap);
   
    ~Vispurple()
    {
        delete timer;
    }


private:
    Ui::VispurpleClass ui;

    QPixmap get_original_screen (
                                    WId  window,
                                    int& x,
                                    int& y,
                                    int& width,
                                    int& height
                                );


    void set_pixmap_in_screen   (
                                    WId     window,
                                    QPixmap pixmap,
                                    int     x,
                                    int     y,
                                    int     width,
                                    int     height
                                );


    HWND get_window_handler     (
                                    WId  window,
                                    int& x,
                                    int& y,
                                    int& width,
                                    int& height
                                );


private slots:

    void update();

};
