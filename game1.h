#ifndef GAME1_H
#define GAME1_H

#include <QWidget>

/*namespace Ui {
class Game1;
}*/
class Game1 : public QWidget
{
    Q_OBJECT
public:
    explicit Game1(QWidget *parent = nullptr);
    void initsqene();

signals:
    void goback();
    void quit();

/*private:
    Ui::Game1 *ui;*/

protected:
    void paintEvent(QPaintEvent *);

public slots:
};

#endif // GAME1_H
