#ifndef BOLSA_H
#define BOLSA_H
#include "lista.h"
#include "ficha.h"
#include "jugador.h"


class bolsa
{
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



};

#endif // BOLSA_H
