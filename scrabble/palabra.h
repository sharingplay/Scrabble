#ifndef PALABRA_H
#define PALABRA_H
#include <lista.h>
#include <tablero.h>

class palabra
{
private:
    int puntuacion;
public:
    palabra();
    bool verificar(nodo* final);
    int asignarPuntuacion(nodo* final, int direccion);
    bool leerAbajo(nodo* final);
    bool leerDerecha(nodo* final);

};


#endif // PALABRA_H
