#include "ControlApp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ControlApp w;
    w.showFullScreen();

    return a.exec();
}
