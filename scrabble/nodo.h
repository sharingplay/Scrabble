#ifndef NODO_H
#define NODO_H
#include "ficha.h"
#include <iostream>

class nodo
{
private:
    //!
    //! \brief valor, valor que almacena el nodo
    //!
    ficha* valor = nullptr;
    nodo* siguiente = nullptr;
    int x= 0;
    int y=0;
    //!
    //! \brief estado, true si esta ocupado, false si esta disponible
    //!
    bool estado=false;
    //!
    //! \brief puntosAsignados, puntos que vale el nodo con el valor de la ficha
    //!
    bool puntosAsignados=false;
    //!
    //! \brief puntuacion, indica si tiene algun bonus la casilla
    //!
    int puntuacion;
    //!
    //! \brief left,right,up,down, nodos que lo rodean
    //!
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
#endif // NODO_H
