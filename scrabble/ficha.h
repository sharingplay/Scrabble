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
public:
    ficha(QGraphicsItem * parent = nullptr);
    ficha (char letra);
    void setLetra(char letra);
    void setValor(int valor);
    char getLetra();
    int getValor();
protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // FICHA_H
