//
// Created by mariana on 05/04/19.
//

#ifndef SERVER_TABLERO_H
#define SERVER_TABLERO_H
#include "adjacent.h"
#include "jugador.h"
#include "lista.h"

class tablero {
public:

    static tablero& getInstance(){
        static tablero instance;
        return instance;
    }

    tablero();
    lista *posiciones = new lista();
    void generar();
    nodo* acomodar(int x, int y,ficha* ficha);
    lista* getPosiciones();
    void Puntuacion();
    void adjacentes(lista* x);
    void imprimir();
    void imprimirPosiciones();
    void imprimirLetra();
};


#endif //SERVER_TABLERO_H
