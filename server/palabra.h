//
// Created by mariana on 05/04/19.
//

#ifndef SERVER_PALABRA_H
#define SERVER_PALABRA_H
#include "lista.h"
#include "tablero.h"

class palabra {
private:
    int puntuacion;
public:
    palabra();
    bool verificar(nodo* final,lista* tablero);
    int asignarPuntuacion(nodo* final, int direccion);
    bool leerAbajo(nodo* final);
    bool leerDerecha(nodo* final);
    bool centro(lista* tablero);
    void volverFicha(nodo* final);
    void quitarAbajo(nodo* final);
    void quitarDerecha(nodo* final);

};


#endif //SERVER_PALABRA_H
