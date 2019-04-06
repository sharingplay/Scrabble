//
// Created by mariana on 05/04/19.
//

#include <iostream>
#include "tablero.h"
tablero::tablero(){
    generar();
}

void tablero::generar(){
    int x=0;
    int y=10;
    for (int i=0;i!=15;i++) {
        for (int j=0;j!=15;j++) {
            nodo *celda = new nodo();
            celda->setX(x);
            celda->setY(y);
            celda->setEstado(false);
            posiciones->insertarFinal(celda);
            x+=51;
        }
        x=0;
        y+=50;
    }
    imprimirLetra();
    imprimirPosiciones();
    adjacentes(this->posiciones);
    Puntuacion();
}

void tablero::adjacentes(lista* posiciones){
    adjacent* lim = new adjacent();
    lim->Seters(posiciones);
}

nodo* tablero::acomodar(int x, int y, ficha* ficha){
    nodo* actual= posiciones->Head;
    nodo* anterior= posiciones->Head;
    int i=0;
    int x1=actual->getX();
    int y1=actual->gety();
    while(x>=actual->getX() and i<15 ){
        x1=actual->getX();
        std::cout<<x<<";"<<actual->getX();
        anterior=actual;
        actual= actual->getSiguiente();
        i++;
    }
    if(x>765){
        //ficha->setX(ficha->getInicialX());
        //ficha->setY(ficha->getInicialY());
    }

    else if(y>800){
        //ficha->setX(ficha->getInicialX());
        //ficha->setY(ficha->getInicialY());
    }
    else{
        actual=anterior;
        while(y>actual->gety()){
            y1=actual->gety();
            anterior=actual;
            actual=actual->getDown();
        }
        if(anterior->getPuntosAsignados()==false and anterior->getEstado()==false){
            anterior->setValor(ficha);
            //anterior->getValor()->setX(anterior->getX());
            //anterior->getValor()->setY(anterior->gety());
            anterior->setEstado(true);
            return anterior;
        }else{
            //ficha->setX(ficha->getInicialX());
            //ficha->setY(ficha->getInicialY());
        }
    }
}

lista* tablero::getPosiciones(){
    return this->posiciones;
}
void tablero::Puntuacion(){
    int i=0;
    nodo* actual= posiciones->Head;
    actual->setPuntuacion(1);
    while(i<224){
        if (i==7||i==14||i==105||i==119||i==210||i==217||i==224){
            actual->setPuntuacion(1);
            actual=actual->getSiguiente();
            i++;
        }if(i==3||i==11||i==36||i==38||i==45||i==52||i==59||i==92||i==96||i==98||i==102||i==108||i==116||i==122||i==126||i==128||i==132||i==165||i==172||i==179||i==186||i==188||i==213||i==221){
            actual->setPuntuacion(2);
            actual=actual->getSiguiente();
            i++;
        }if(i==20||i==24||i==76||i==80||i==84||i==88||i==136||i==140||i==144||i==148||i==215||i==219){
            actual->setPuntuacion(3);
            actual=actual->getSiguiente();
            i++;
        }if(i==16||i==29||i==32||i==42||i==48||i==56||i==64||i==70||i==154||i==160||i==168||i==176||i==182||i==192||i==196||i==208){
            actual->setPuntuacion(4);
            actual=actual->getSiguiente();
            i++;
        }else{
            actual=actual->getSiguiente();
            i++;
        }
    }
}
void tablero::imprimirPosiciones(){
    nodo* actual= this->getPosiciones()->Head;
    std::cout<<"[";
    for (int i=0;i!=15;i++) {
        for (int j=0;j!=15;j++) {
            std::cout<<"x:"<<actual->getX()<<"y:"<<actual->gety()<<";";
            actual=actual->getSiguiente();
        }
        std::cout<<"]"<<endl;
    }
}
void tablero::imprimirLetra(){
    nodo* actual= this->getPosiciones()->Head;
    std::cout<<"[";
    for (int i=0;i!=15;i++) {
        for (int j=0;j!=15;j++) {
            if(actual->getValor()==nullptr){
                std::cout<<' '<<";";
                actual=actual->getSiguiente();
            }else {
                std::cout<<actual->getValor()->getLetra()<<";";
                actual=actual->getSiguiente();
            }
        }
        std::cout<<"]"<<endl;
    }
}