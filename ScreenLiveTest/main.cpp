#include "livescreen.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LiveScreen w;
    w.show();

    /*
     *
     *  timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(update()));
        timer -> start(60/1000);
     *
     *
     */


    return a.exec();
}
