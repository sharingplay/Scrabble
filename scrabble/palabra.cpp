#include "palabra.h"

palabra::palabra()
{
}

bool palabra::verificar(nodo* final){
    nodo* actual= final;
    if(actual->getUp()->getEstado()==true){
        while (actual->getUp()->getEstado()==true) {
            actual= actual->getUp();
        }
        leerAbajo(actual);
    }
    if(actual->getLeft()->getEstado()==true){
        leerDerecha(actual);
    }
    if(actual->getDown()->getEstado()==true){
        leerAbajo(actual);
    }
    if(actual->getRight()->getEstado()==true){
        leerDerecha(actual);
    }

}

bool palabra::leerAbajo(nodo* final){
    nodo* actual= final;
    char palabra;
    while (actual->getDown()->getEstado()==true) {
        palabra+=actual->getValor()->getLetra();
        actual= actual->getDown();
    }
    //diccionario
}
bool palabra::leerDerecha(nodo* final){
    nodo* actual= final;
    char palabra;
    while (actual->getLeft()->getEstado()==true) {
        palabra+=actual->getValor()->getLetra();
        actual= actual->getLeft();
    }
    //diccionario
}
int palabra::puntuacio(){

}
