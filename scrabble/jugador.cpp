#include "jugador.h"

void jugador::setTurno(bool turno){
    this->turno = turno;
}
bool jugador::getTurno(){
    return this->turno;
}
void  jugador::setNombre(QString nombre){
    this->nombre = nombre;
}
QString jugador::getNombre(){
    return this->nombre;
}
void jugador::setPuntaje(int puntaje){
    this->puntaje = puntaje;
}
int jugador::getPuntaje(){
    return this->puntaje;
}
void jugador::setcantFichas(int cantFichas){
    this->cantFichas = cantFichas;
}
int jugador::getcantFichas(){
    return this->cantFichas;
}
void jugador::agregarFicha(ficha* ficha){
    nodo* nodoficha;
    nodoficha->setValor(ficha);
    listaFichas->insertarFinal(nodoficha);
}
lista* jugador::getlista(){
    return listaFichas;
}
    jugador::jugador(){
    this->setTurno(false);
    this->setNombre("");
    this->setPuntaje(0);
    this->setcantFichas(0);
}

//    void jugador::keyPressEvent(QKeyEvent *tecla){
//        if (tecla->key() == Qt::Key_Space){
//            this->setPuntaje(this->getPuntaje()+5);
//            cout<<this->getPuntaje()<<endl;
//        }
//    }
