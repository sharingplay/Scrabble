#ifndef COLANODO_H
#define COLANODO_H

#include "jugador.h"

class colanodo
{
private:
    jugador* jugadorA;
    colanodo* siguiente;

public:
    colanodo();
    jugador* getJugador();
    void setJugador(jugador* jugador);
    colanodo* getSiguiente();
    void setSiguiente(colanodo* siguiente);
};

#endif // COLANODO_H
