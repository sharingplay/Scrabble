#ifndef TABLERO_H
#define TABLERO_H
#include "lista.h"
#include <QObject>
#include <iostream>
#include <QGraphicsPixmapItem>
#include "adjacent.h"


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
    void adjacentes(lista x);
};
#endif // TABLERO_H
