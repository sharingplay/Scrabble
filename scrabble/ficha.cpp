#include "ficha.h"

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
