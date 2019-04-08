#include "colanodo.h"

colanodo::colaNodo()
{

}
jugador* colanodo::getJugador(){
    return this->jugadorA;
}
void colanodo::setJugador(jugador* jugador){
    this->jugadorA= jugador;
}
colanodo* colanodo::getSiguiente(){
    return this->siguiente;
}
void colanodo::setSiguiente(colanodo* siguiente){
    this->siguiente= siguiente;
}

