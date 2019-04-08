#include "boton.h"
#include <QObject>
#include <iostream>
#include <QGraphicsPixmapItem>
using namespace std;

boton::boton (QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
setPixmap(QPixmap(":/imagenes/scrabble.png"));
}

void boton::mousePressEvent(QGraphicsSceneMouseEvent *event){

    for(int i = 0;i<1;i++){//cambiar a 4********************************************
        jugador *jugadorActual = tablero::getInstance().listaJugadores[i];
        if (jugadorActual->getTurno()==true){
            palabra *a = new palabra();
            a->verificar(jugadorActual->getUltimoNodo());
        }
    }
    tablero::getInstance().listaJugadores[0]->getUltimoNodo()->getValor();

    cout<<"Click en jugar"<<endl;
}
