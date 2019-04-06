//
// Created by mariana on 05/04/19.
//

#ifndef SERVER_NODO_H
#define SERVER_NODO_H
#include "ficha.h"


class nodo {
private:
    ficha* valor = nullptr;
    nodo* siguiente = nullptr;
    int x= 0;
    int y=0;
    bool estado=false;
    bool puntosAsignados=false;
    int puntuacion;
    nodo* left;
    nodo* right;
    nodo* up;
    nodo* down;

public:
    void setValor(ficha* valor);
    ficha* getValor();
    void setSiguiente(nodo* nodo);
    nodo* getSiguiente();
    void setX(int x);
    void setY(int y);
    int getX();
    int gety();
    void setEstado(bool estado);
    bool getEstado();
    void setPuntosAsignados(bool estado);
    bool getPuntosAsignados();
    void setPuntuacion(int puntuacion);
    int getPuntuacion();
    void setLeft(nodo* x);
    void setRight(nodo* x);
    void setUp(nodo* x);
    void setDown(nodo* x);
    nodo* getLeft();
    nodo* getRight();
    nodo* getUp();
    nodo* getDown();



    nodo(ficha* ficha,nodo*siguiente);
    nodo();
};


#endif //SERVER_NODO_H
