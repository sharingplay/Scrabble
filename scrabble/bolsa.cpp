#include "bolsa.h"

bolsa::bolsa()
{

}

nodo* bolsa::repartir(int cantidad, jugador jugador){
    int x= 102;
    int y= 820;
    while(cantidad>0){
        if(listaFichas->Head != nullptr){
              nodo* toReturn = listaFichas->Head;
              toReturn->getValor()->setX(x);
              toReturn->getValor()->setY(y);
              listaFichas->Head = listaFichas->Head->getSiguiente();
              toReturn->setSiguiente(jugador.getlista()->Head);
              jugador.getlista()->Head= toReturn;
              x+=51;
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
void bolsa::crear(){
    int posicion[100];
    int v1 = rand() % 100; //0 a 99
    int i=0;
    while (i<100){
        if (verificar(v1,posicion)){
            v1 = rand() % 100;
        }else{
            ficha* letraficha= new ficha(letras[v1]);
            nodo* letra= new nodo();
            letra->setValor(letraficha);
            listaFichas->insertarInicio(letra);
            posicion[i]=v1;
            v1 = rand() % 100;
            i++;
        }
    }

}
bool bolsa::verificar(int num, int numeros[]){
    int i=0;
    while(numeros[i]!=0 or i<100){
        if(num!=numeros[i]){
            i++;
        }else{
            return true;
        }
    }
    return false;
}
