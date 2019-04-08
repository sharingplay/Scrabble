#include "cola.h"

cola* cola::cola = nullptr;

cola* cola::getInstance() {
    if (!Cola){
        Cola = new cola;
    }
    return Cola;
}


void cola::agregar(string Name,string Url,int puerto, string codigo){
    if (this->head == nullptr){
        this->head = new colaNodo();
        jugador* newJugador= new jugador();
        //newJugador->setNombre(Name);
        //newJugador->setUrl(Url);
        //newJugador->setPuerto(puerto);
        //newJugador->setCodigo(codigo);
        this->head = new colaNodo();
        head->setJugador(newJugador);
        this->largo++;
    }else{
        colanodo* actual = this->head;
        while (actual->getSiguiente() != nullptr){
            actual = actual->getSiguiente();
        }
        jugador* newJugador= new jugador();
        //newJugador->setNombre(Name);
        //newJugador->setUrl(Url);
        //newJugador->setPuerto(puerto);
        //newJugador->setCodigo(codigo);
        colanodo* newNodo= new colaNodo();
        actual->setSiguiente(newNodo);
        actual->getSiguiente()->setJugador(newJugador);
        this->largo++;
    }
}
void cola::eliminar(){

}
int cola::gettamano(){
    return this->largo;
}
void cola::settamano(int numero){
    this->largo += largo;
}
void cola::imprimirCola(){
    colanodo* actual = this->head;
    while (actual != nullptr){
        cout << actual->getJugador() << ",";
        actual = actual->getSiguiente();
    }
}
jugador* cola::buscarJugador(string codigo){
    if (this->head == nullptr){
        return nullptr;
    }else{
        int i = 0;
        colaNodo* tmp = this->head;
        while (tmp != nullptr && i != gettamano()){
            if (tmp->getJugador()->getCodigo() == codigo){
                return tmp->getJugador();
            }else{
                tmp = tmp->getSiguiente();
                i++;
            }
        }
        return nullptr;
    }
}
jugador* cola::nuevaSala(){
    //crear codigo
    //crear Sala
    //set codigo
    //agregar jugador
    //buscar jugador

}
