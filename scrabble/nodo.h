#define NODO_H
#include "ficha.h"
class nodo {
private:

    ficha* valor = nullptr;
    nodo* siguiente = nullptr;

public:
    void setValor(ficha);
    ficha getValor();
    void setSiguiente(nodo* nodo);
    nodo* getSiguiente();

    nodo(ficha* ficha,nodo*siguiente);
    nodo();

};
