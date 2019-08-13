#include "livescreen.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LiveScreen w;
    w.show();

    return a.exec();
}
