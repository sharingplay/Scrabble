#include "sala.h"

sala::sala() {}

void sala::setJugadores(string _nombre) {
    for (int i=0; i<4; i++){
        if (jugadores[i]==" "){
            jugadores[i]=_nombre;
            break;
        }
    }

    if (jugadores[1] != ""){
        IniciarJuego();
    }


}

string sala::getJugadores() {

}

void sala::setCode(string _code) {

}

string sala::getCode() {

}

void sala::IniciarJuego() {

}
