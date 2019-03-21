#include "nodo.h"

    nodo::nodo()
{
    siguiente = nullptr;
    valor= nullptr;
}
    nodo::nodo(ficha* ficha,nodo* siguiente){
        this->valor = ficha;
        this->siguiente = siguiente;
    }
void nodo::setSiguiente (nodo* nodo){
        this->siguiente = nodo;
}
nodo* nodo::getSiguiente(){
    return this->siguiente;
}

