#include "lista.h"

lista::lista()
{

}
void lista::insertarFinal(nodo *nuevoNodo){
    nodo *actual=Head;
    if(Head !=nullptr){
        while(actual->getSiguiente()!=nullptr){
            actual=actual->getSiguiente();
        }
        actual->setSiguiente(nuevoNodo);
    }

    else{
        Head = nuevoNodo;
        Head->setSiguiente(nullptr);
    }
}

void lista::insertarInicio(nodo *nuevoNodo){
    nuevoNodo->setSiguiente(Head);
    Head = nuevoNodo;
}

void lista::display(){
    nodo *actual = Head;
    if(actual==nullptr){
    }

    else{
        while(actual->getSiguiente()!=nullptr){
            actual=actual->getSiguiente();
        }
    }
}
