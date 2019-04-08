#ifndef TABLERO_H
#define TABLERO_H
#include "lista.h"
#include <QObject>
#include <iostream>
#include <QGraphicsPixmapItem>
#include "adjacent.h"
#include "jugador.h"
#include "lector.h"
#include "ventanacomodin.h"
#include <QGraphicsProxyWidget>
#include <QLabel>
class tablero: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    nodo* centro;
    bool primeraPalabra;
public:

    static tablero& getInstance(){
               static tablero instance;
               return instance;
    }
    //!
    //! \brief posiciones de los nodos del tablero
    //!
    lista *posiciones = new lista();
    //!
    //! \brief listaJugadores, lista con los jugadores actuales
    //!
    jugador *listaJugadores[1];
    tablero(QGraphicsItem * parent = nullptr);
    //!
    //! \brief generar, genera el tablero con sus nodos
    //!
    void generar();
    //!
    //! \brief acomodar, centra la ficha en el nodo
    //! \param x, X de la ficha
    //! \param y, Y de la ficha
    //! \param ficha, fichas que se desea acomodar
    //! \return la ficha con las coordenadas del nodo acomodada
    //!
    nodo* acomodar(int x, int y,ficha* ficha);
    lista* getPosiciones();
    //!
    //! \brief Puntuacion, asigna puntaje de acuerdo al bonus del nodo
    //!
    void Puntuacion();
    void adjacentes(lista* x);
    void imprimir();
    void imprimirPosiciones();
    void imprimirLetra();
    //!
    //! \brief getcentro, devuelve el centro del tablero
    //! \return el nodo central
    //!
    nodo* getcentro();
    bool quitar(int x, int y);
    bool getPrimera();
    bool setPrimera(bool bandera);
};
#endif // TABLERO_H
