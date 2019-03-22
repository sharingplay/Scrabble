#ifndef FICHA_H
#define FICHA_H
#include<QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class ficha: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    char letra;
    int valor,x,y;
public:
    ficha(QGraphicsItem * parent = nullptr);
    ficha (char letra);
    void setX(int x);
    void setY(int y);
    void setLetra(char letra);
    void setValor(int valor);
    int getX();
    int getY();
    char getLetra();
    int getValor();
};

#endif // FICHA_H
