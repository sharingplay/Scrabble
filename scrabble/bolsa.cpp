#include "bolsa.h"

bolsa::bolsa()
{

}
//!
//! \brief bolsa::repartir reparte fichas a los jugadores
//! \param cantidad, cantidad de fichas que se quieren repartir
//! \param jugador, jugador al que se le reparten las fichas
//! \return
//!
void bolsa::repartir(int cantidad, jugador* jugador){
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

    nodo* temp = jugador->getlista()->Head;
    int x = 100;
    int y = 820;
    while(temp!= nullptr){
        temp->getValor()->setX(x);
        temp->getValor()->setY(y);
        temp->getValor()->setInicialX(x);
        temp->getValor()->setInicialY(y);
        temp->getValor()->dibujar(temp->getValor());
        temp= temp->getSiguiente();

        x += 50;
    }
    nodo* aux = jugador->getlista()->Head;
    while(aux !=nullptr){
        ficha* letra = aux->getValor();
        aux->getValor()->dibujar(letra);
        aux = aux->getSiguiente();
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
        bool exists= find(std::begin(posicion),std::end(posicion),v1)!=std::end(posicion);
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
