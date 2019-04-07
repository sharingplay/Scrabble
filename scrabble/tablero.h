#ifndef TABLERO_H
#define TABLERO_H
#include "lista.h"
#include <QObject>
#include <iostream>
#include <QGraphicsPixmapItem>
#include "adjacent.h"
#include "jugador.h"
#include "lector.h"
class tablero: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    nodo* centro;
public:

    static tablero& getInstance(){
               static tablero instance;
               return instance;
    }

    lista *posiciones = new lista();
    jugador *listaJugadores[1];
    tablero(QGraphicsItem * parent = nullptr);
    void generar();
    nodo* acomodar(int x, int y,ficha* ficha);
    lista* getPosiciones();
    void Puntuacion();
    void adjacentes(lista* x);
    void imprimir();
    void imprimirPosiciones();
    void imprimirLetra();
    nodo* getcentro();
    nodo* quitar(int x, int y);
};
#endif // TABLERO_H
