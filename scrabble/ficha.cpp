#include "ficha.h"
#include "QGraphicsScene"

ficha::ficha (QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
}
    //Dibujar
    ficha::ficha(char letra){
        switch (letra) {
        case 'A': setPixmap(QPixmap(":/imagenes/A.png"));
            break;
        case 'B': setPixmap(QPixmap(":/images/B.png"));
        }

    }

void ficha::setX(int x){
    this->x = x;
}
void ficha::setY(int y){
    this->y = y;
}
void ficha::setLetra(char letra){
    this->letra = letra;
}
void ficha::setValor(int valor){
    this->valor = valor;
}
int ficha::getX(){
    return this->x;
}
int ficha::getY(){
    return this->y;
}
char ficha::getLetra(){
    return this->letra;
}
int ficha::getValor(){
    return this->valor;
}
