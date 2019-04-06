#include "lista.h"
#include <QDebug>
lista::lista()
{

}
void lista::insertarFinal(nodo* nuevoNodo){
    nodo* actual = Head;
    if(Head != nullptr){
        while(actual->getSiguiente()!=nullptr){
            actual=actual->getSiguiente();
        }
        actual->setSiguiente(nuevoNodo);
    }

    else{
        Head = nuevoNodo;
        Head->setSiguiente(nullptr);
    }
    size++;
}

void lista::insertarInicio(nodo* nuevoNodo){
    nuevoNodo->setSiguiente(Head);
    Head = nuevoNodo;
    size++;
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

int lista::getSize() {
        return size;
}

nodo* lista::getNode(int x, int y){
        nodo *current=Head;
        while (current !=nullptr){
            if (current->getX()==x && current->gety()==y){
                return current;
            }
            else{
                current= current->getSiguiente();
                }
        }
        return nullptr;
}

