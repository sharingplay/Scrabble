#include "boton.h"
#include <QObject>
#include <iostream>
#include <QGraphicsPixmapItem>
using namespace std;

boton::boton (QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
setPixmap(QPixmap(":/imagenes/scrabble.png"));
}

void boton::mousePressEvent(QGraphicsSceneMouseEvent *event){
    cout<<"Click en jugar"<<endl;
}
