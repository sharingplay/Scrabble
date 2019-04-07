#ifndef PALABRA_H
#define PALABRA_H
#include <lista.h>
#include "tablero.h"
#include "lector.h"
#include "iostream"
using namespace std;
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
    void volverFicha(nodo* final);
    void quitarAbajo(nodo* final);
    void quitarDerecha(nodo* final);

};


#endif // PALABRA_H
