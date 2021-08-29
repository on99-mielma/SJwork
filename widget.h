#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void initsqene();
private slots:
    /*void on_pushButton_clicked();*/

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::Widget *ui;


signals:
    /*//返回主界面
    void goBack();*/
    //退出游戏
    void exit();
    void begin();
};

#endif // WIDGET_H
