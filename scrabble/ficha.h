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
    int inicialX, inicialY;
    int finalX, finalY;
public:
    ficha(QGraphicsItem * parent = nullptr);
    ficha (char letra);
    void setLetra(char letra);
    void setValor(int valor);
    char getLetra();
    int getValor();
    void dibujar(ficha* letra);
    int getInicialX();
    void setInicialX(int inicial);
    int getInicialY();
    void setInicialY(int inicial);
    int getFinalX();
    void setFinalX(int inicial);
    int getFinalY();
    void setFinalY(int inicial);
protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // FICHA_H
