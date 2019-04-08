#ifndef PALABRA_H
#define PALABRA_H
#include <lista.h>
#include "tablero.h"
#include "lector.h"
#include "iostream"
#include "bolsa.h"
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
    bool unionPalabrasAbajo(nodo* final);
    bool unionPalabrasDerecha(nodo* final);
    void contadorFichas(nodo* final);
};


#endif // PALABRA_H
