#ifndef TABLERO_H
#define TABLERO_H
#include "lista.h"
#include <QObject>
#include <iostream>
#include <QGraphicsPixmapItem>
#include "adjacent.h"
#include "jugador.h"

class tablero: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:

    static tablero& getInstance(){
               static tablero instance;
               return instance;
    }

    lista *posiciones = new lista();
    tablero(QGraphicsItem * parent = nullptr);
    void generar();
    nodo* acomodar(int x, int y,ficha* ficha);
    lista* getPosiciones();
    void Puntuacion();
    void adjacentes(lista* x);
    void imprimir();
    void imprimirPosiciones();
    void imprimirLetra();
};
#endif // TABLERO_H
