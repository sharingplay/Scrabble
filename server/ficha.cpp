//
// Created by mariana on 05/04/19.
//

#include "ficha.h"

ficha::ficha(char _letra) {}

void ficha::setValor(int _valor){
    this->valor = _valor;
}
void ficha::setLetra(char _letra){
    this->letra = _letra;
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
void ficha::setInicialX(int _inicial){
    this->inicialX = _inicial;
}
int ficha::getInicialY(){
    return this->inicialY;
}
void ficha::setInicialY(int _inicial){
    this->inicialY = _inicial;
}