#ifndef FICHA_H
#define FICHA_H
#include<QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include <QEvent>


class ficha: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    char letra;
    int valor;
    int x,y;
public:
    ficha(QGraphicsItem * parent = nullptr);
    ficha (char letra);
    void setLetra(char letra);
    void setValor(int valor);
    char getLetra();
    int getValor();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);

protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // FICHA_H
