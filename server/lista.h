//
// Created by mariana on 05/04/19.
//

#ifndef SERVER_LISTA_H
#define SERVER_LISTA_H
#include"nodo.h"

class lista {

public:
    nodo* Head = nullptr;
    int size = 0;
    void insertarFinal(nodo* nuevoNodo);
    void insertarInicio(nodo* nuevoNodo);
    void display();
    int getSize();
    nodo* getNode(int x, int y);

    lista();
};


#endif //SERVER_LISTA_H
