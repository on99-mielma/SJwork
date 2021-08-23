#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    //setBaseSize(1100,900);
    w.show();

    return a.exec();
}
