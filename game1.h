#ifndef GAME1_H
#define GAME1_H

#include <QWidget>

class Game1 : public QWidget
{
    Q_OBJECT
public:
    explicit Game1(QWidget *parent = nullptr);
    void initsqene();

signals:

protected:
    void paintEvent(QPaintEvent *);

public slots:
};

#endif // GAME1_H
