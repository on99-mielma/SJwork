#include "widget.h"
#include <QApplication>
#include <QResource>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    /*QResource::registerResource()*/

    //setBaseSize(1100,900);
    w.show();

    return a.exec();
}
