#include "vispurple.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Vispurple w;
    w.show();
    return a.exec();
}
