//
// Created by mariana on 05/04/19.
//

#include "ficha.h"
void ficha::setValor(int valor){
    this->valor = valor;
}
void ficha::setLetra(char letra){
    this->letra = letra;
}
char ficha::getLetra(){
    return this->letra;
}
int ficha::getValor(){
    return this->valor;
}

int ficha::getInicialX(){
    return this->inicialX;
}
void ficha::setInicialX(int inicial){
    this->inicialX = inicial;
}
int ficha::getInicialY(){
    return this->inicialY;
}
void ficha::setInicialY(int inicial){
    this->inicialY = inicial;
}