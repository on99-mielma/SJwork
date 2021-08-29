#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPen>
#include <QDebug>
#include <QBitmap>
#include <QFileDialog>
#include <QJsonDocument>
#include <QPaintEvent>
#include "config.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*this->setFixedSize(1050,850);*/
    initsqene();
    //设置标签字号
    QFont font;
    QFont font4;
    font4.setPixelSize(0);
    font.setPixelSize(80);
    /*ui->label->setFont(font);
    //设置标签颜色
    QPalette palette;
    palette.setColor(QPalette::WindowText,Qt::white);
    ui->label->setPalette(palette);*/

    //设置按钮字号
    font.setPixelSize(48);
    //设置按钮背景
    QPixmap pix = QPixmap(":/menu/picture/buttonGreen.png").scaledToHeight(50);
    //设置不规则按钮
    QPushButton *buttons[] = {ui->pushButton, ui->pushButton_2, ui->pushButton_3};
    for (QPushButton *btn : buttons)
    {
        btn->setFont(font);
        btn->setMask(pix.mask());
        btn->setFixedSize(pix.size());
        btn->setStyleSheet("border-image: url(:/menu/picture/buttonGreen.png)");
    }
    QPushButton *buttons4[] = {ui->pushButton_4};
    for (QPushButton *btn : buttons4)
    {
        /*btn->setFont(font);
        btn->setMask(pix.mask());*/
        btn->setFixedSize(85,85);
        btn->setStyleSheet("border-image: url(:/menu/picture/shutdown.png)");
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::initsqene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    setWindowTitle(GAME_TITLE);
}

/*void Widget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPen pen1;
    pen1.setWidth(3);
    p.setPen(pen1);
    QRect rect1(10,10,1000,800);
    //QRect rect2(110,110,800,600);
    //QRect rect3(210,210,600,400);
    //QRect rect4(310,310,400,200);
    //QRect rect5(410,410,200,200);
    //p.drawRect(60,60,10,10);
    p.drawRect(rect1);
    //p.drawRect(rect2);
    //p.drawRect(rect3);
    //p.drawRect(rect4);
    //p.drawRect(rect5);
    p.drawLine(110,10,110,810);
    p.drawLine(210,10,210,810);
    p.drawLine(310,10,310,810);
    p.drawLine(410,10,410,810);
    p.drawLine(510,10,510,810);
    p.drawLine(610,10,610,810);
    p.drawLine(710,10,710,810);
    p.drawLine(810,10,810,810);
    p.drawLine(910,10,910,810);
    p.drawLine(1010,10,1010,810);
    p.drawLine(10,110,1010,110);
    p.drawLine(10,210,1010,210);
    p.drawLine(10,310,1010,310);
    p.drawLine(10,410,1010,410);
    p.drawLine(10,510,1010,510);
    p.drawLine(10,610,1010,610);
    p.drawLine(10,710,1010,710);
    p.drawLine(10,810,1010,810);


    //p.drawLine(100,100,1100,100);
    //p.drawLines();
}*/
void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    //清空背景
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.drawRect(rect());

    //绘制背景
    QPixmap pix;
    pix.load(":/menu/picture/maingrass.jpg");
    painter.drawPixmap(0,0,GAME_WIDTH,GAME_HEIGHT,pix);
}
/*void Widget::on_pushButton_clicked()
{

}*/
void Widget::on_pushButton_3_clicked()
{
    emit exit();
}

void Widget::on_pushButton_clicked()
{
    emit begin();
}

void Widget::on_pushButton_4_clicked()
{
    /*qDebug*/
    emit exit();
}
