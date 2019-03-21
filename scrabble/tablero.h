#ifndef TABLERO_H
#define TABLERO_H
#include "lista.h"


class tablero
{
private:

    lista posicionesLibres;
    lista posicionesOcupadas;
public:
    tablero();
    int cantPosLibre,cantPosOcu;
};
#endif // TABLERO_H
