//
// Created by mariana on 05/04/19.
//

#ifndef SERVER_BOLSA_H
#define SERVER_BOLSA_H
#include "lista.h"
#include "ficha.h"
#include "jugador.h"
#include <stdlib.h>
#include <algorithm>

class bolsa {
private:

    lista* listaFichas = new lista();
    int cantidadFichas = 100;
    char letras[100]={'A','A','A','A','A','A','A','A','A','B','B','C','C','D','D','D','D','E','E','E','E','E','E','E','E','E','E','E','E','F','F','G','G','G','H','H','I','I','I','I','I','I','I','I','I','J','K','L','L','L','L','M','M','N','N','N','N','N','N','O','O','O','O','O','O','O','O','P','P','Q','R','R','R','R','R','R','S','S','S','S','T','T','T','T','T','T','U','U','U','U','V','V','W','W','X','Y','Y','Z','c','c'};


public:
    static bolsa& getInstance(){
        static bolsa instance;
        return instance;
    }

    bolsa();
    int getCantidad();
    void repartir(int cantidad, jugador* jugador);
    void restarCantidad(int fichas);
    lista displayFichas();
    void crear();
    bool verificar(int num, int numeros[]);
    bool buscar(int posicion[],int v1 );

};


#endif //SERVER_BOLSA_H
