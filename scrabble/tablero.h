#ifndef TABLERO_H
#define TABLERO_H
#include "lista.h"
#include <QObject>
#include <iostream>
#include <QGraphicsPixmapItem>


class tablero: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

private:
lista posiciones;

public:
    tablero(QGraphicsItem * parent = nullptr);
    void generar();
    nodo* acomodar(int x, int y,ficha* ficha);
    lista getPosiciones();
    void Puntuacion();
};
#endif // TABLERO_H
