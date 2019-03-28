#include "bolsa.h"

bolsa::bolsa()
{

}

nodo* bolsa::repartir(int cantidad, jugador* jugador){
    while(cantidad>0){
        if(this->listaFichas->Head != nullptr){
              nodo* toReturn = listaFichas->Head;
              listaFichas->Head = listaFichas->Head->getSiguiente();
              toReturn->setSiguiente(jugador->getlista()->Head);
              jugador->getlista()->Head= toReturn;
              jugador->setcantFichas(jugador->getcantFichas()+1);
            }
        cantidadFichas-=1;
        cantidad-=1;

    }
}


void bolsa::restarCantidad(int fichas){
    cantidadFichas-= fichas;
}
lista bolsa::displayFichas(){

}
int bolsa::getCantidad(){
    return cantidadFichas;
}
//!
//! \brief bolsa::crear
//! Crea la lista de nodos de la bolsa y asigna fichas a cada nodo
//!
void bolsa::crear(){
    int posicion[100];
    int v1 = rand() % 100; //0 a 99
    int i=0;
    while (i<100){
        bool exists=std::find(std::begin(posicion),std::end(posicion),v1)!=std::end(posicion);
        if (exists){
            v1 = rand() % 100;
        }else{
            ficha* letraficha= new ficha(letras[v1]);
            nodo* letra= new nodo();
            letra->setValor(letraficha);
            this->listaFichas->insertarFinal(letra);
            posicion[i]=v1;
            v1 = rand() % 100;
            i++;
        }
    }

}
/*
bool bolsa::verificar(int num, int numeros[]){
    int i=0;

    if(numeros.includes(num)){

    }
    while(numeros[i]!=0 or i<100){
        int j=numeros[i];
        if(num!=numeros[i]){
            i++;
        }else{
            return true;
        }
    }
    return false;
}
*/
