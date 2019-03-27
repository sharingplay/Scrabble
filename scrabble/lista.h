#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
class nodo;
class lista
{
public:
    nodo* Head = 0;
    int size = 0;
    void insertarFinal(nodo* nuevoNodo);
    void insertarInicio(nodo* nuevoNodo);
    void display();
    int getSize();
    nodo* getNode(int x, int y);

    lista();
};

#endif // LISTA_H
