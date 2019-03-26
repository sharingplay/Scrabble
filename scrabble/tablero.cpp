#include "tablero.h"
#include "QGraphicsScene"

tablero::tablero(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/imagenes/tablero.jpg"));
}
void tablero::generar(){
    int x=0;
    int y=0;
    for (int i=0;i!=15;i++) {
        for (int j=0;j!=15;j++) {
            nodo* celda;
            celda->setX(x);
            celda->setY(y);
            celda->setEstado(false);
            this->posiciones.insertarFinal(celda);
            j++;
            x+=51;
        }
        y+=51;
    }
    Puntuacion();
}

void tablero::adjacentes(lista posiciones){
    adjacent* lim = new adjacent();
    lim->Seters(posiciones);
}

nodo* tablero::acomodar(int x, int y, ficha* ficha){
    nodo* actual= posiciones.Head;
    nodo* anterior= posiciones.Head;
    int i=0;
    while(x<=actual->getX() or i<14 ){
        anterior=actual;
        actual= actual->getSiguiente();
        i++;
    }
    if(i>14){
        //fuera del rango
    }
    else{
        actual=anterior;
        i=0;
        while(y<actual->gety()){
            anterior=actual;
            while(i<14){
                actual=actual->getSiguiente();
                i++;
            }
            i=0;
        }
        if(anterior->getEstado()==false){
            //graficar anterior->getX() y Y
            anterior->setValor(ficha);
            anterior->setEstado(true);
            return anterior;
        }else{
            //ocupada
        }
    }
}
lista tablero::getPosiciones(){
    return this->posiciones;
}
void tablero::Puntuacion(){
    int i=0;
    nodo* actual= posiciones.Head;
    actual->setPuntuacion(1);
    while(i<226){
        if (i==7||i==14||i==105||i==119||i==210||i==217||i==224){
            actual->setPuntuacion(1);
        }if(i==3||i==11||i==36||i==38||i==45||i==52||i==59||i==92||i==96||i==98||i==102||i==108||i==116||i==122||i==126||i==128||i==132||i==165||i==172||i==179||i==186||i==188||i==213||i==221){
            actual->setPuntuacion(2);
        }if(i==20||i==24||i==76||i==80||i==84||i==88||i==136||i==140||i==144||i==148||i==215||i==219){
            actual->setPuntuacion(3);
        }if(i==16||i==29||i==32||i==42||i==48||i==56||i==64||i==70||i==154||i==160||i==168||i==176||i==182||i==192||i==196||i==208){
            actual->setPuntuacion(4);
        }
        actual=actual->getSiguiente();
        i++;
    }
}

