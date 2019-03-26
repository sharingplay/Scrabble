#include "nodo.h"

nodo::nodo(){
  siguiente = nullptr;
  valor= nullptr;
}
nodo::nodo(ficha* ficha,nodo* siguiente){
    this->valor = ficha;
    this->siguiente = siguiente;
}
void nodo::setSiguiente (nodo* nodo){
        this->siguiente = nodo;
}
nodo* nodo::getSiguiente(){
    return this->siguiente;
}
void nodo::setAnterior (nodo* nodo){
        this->anterior = nodo;
}
nodo* nodo::getAnterior(){
    return this->anterior;
}
void nodo::setArriba (nodo* nodo){
        this->arriba = nodo;
}
nodo* nodo::getArriba(){
    return this->arriba;
}
void nodo::setAbajo (nodo* nodo){
        this->abajo = nodo;
}
nodo* nodo::getAbajo(){
    return this->abajo;
}

//set coordenadas
void nodo::setX(int x){
    this->x=x;
}
void nodo::setY(int y){
    this->y=y;
}
int nodo::getX(){
    return this->x;
}
int nodo::gety(){
    return this->y;
}

void nodo::setEstado(bool estado){
    this->estado=estado;
}
bool nodo::getEstado(){
    return this->estado;
}
void nodo::setPuntosAsignados(bool estado){
    this->puntosAsignados=estado;
}
bool nodo::getPuntosAsignados(){
    return this->puntosAsignados;
}
void nodo::setPuntuacion(int puntuacion){
    this->puntuacion= puntuacion;
}
int nodo::getPuntuacion(){
    return this->puntuacion;
}
void nodo::setValor(ficha* ficha){
        this->valor = ficha;
}
ficha* nodo::getValor(){
    return this->valor;
}
void nodo::setLeft(nodo* x){
    this->left=x;
}

void nodo::setRight(nodo *x){
    this->right=x;
}

void nodo::setUp(nodo* x){
    this->up=x;
}

void nodo::setDown(nodo* x){
    this->down=x;
}
