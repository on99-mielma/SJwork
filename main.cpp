#include "widget.h"
#include "game1.h"
#include <QApplication>
#include <QResource>
#include <QMessageBox>
#include <QFontDatabase>
#include <QStackedWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    Game1 gg1;

    /*QResource::registerResource()*/

    //setBaseSize(1100,900);
    w.show();
    QStackedWidget stackedWidget;
    QObject::connect(&w, &Widget::exit, &w, &QWidget::close);
    QObject::connect(&w, &Widget::begin, &gg1, &QWidget::show);
    QObject::connect(&w, &Widget::begin, &w, &QWidget::hide);
    QObject::connect(&gg1, &Game1::goback, &w, &QWidget::show);
    QObject::connect(&gg1, &Game1::goback, &gg1, &QWidget::hide);//记得补充重置部分
    QObject::connect(&gg1, &Game1::quit, &gg1, &QWidget::close);
    QObject::connect(&gg1, &Game1::quit, &w, &QWidget::close);
    return a.exec();
}
