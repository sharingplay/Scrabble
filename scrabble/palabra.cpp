#include "palabra.h"

palabra::palabra()
{
}

bool palabra::verificar(nodo* final,lista* tablero){
    nodo* actual= final;
    if(!centro(tablero)){
        //no hay ficha en el centro
    }
    if(actual->getUp()->getEstado()==true){
        while (actual->getUp()->getEstado()==true) {
            actual= actual->getUp();
        }
        leerAbajo(actual);
    }
    if(actual->getLeft()->getEstado()==true){
        while (actual->getLeft()->getEstado()==true) {
            actual= actual->getLeft();
        }
        leerDerecha(actual);
    }
    if(actual->getDown()->getEstado()==true){
        leerAbajo(actual);
    }
    if(actual->getRight()->getEstado()==true){
        leerDerecha(actual);
    }

}
bool palabra::centro(lista* tablero){
    nodo* actual= tablero->Head;
    int i=0;
    while(i<7){
        actual= actual->getRight();
    }
    i=0;
    while (i<7) {
        actual=actual->getDown();
    }
    if(actual->getEstado()){
        return true;
    }
    else {
        return false;
    }
}

bool palabra::leerAbajo(nodo* final){
    nodo* actual= final;
    char palabra;
    while (actual->getDown()->getEstado()==true) {
        palabra+=actual->getValor()->getLetra();
        actual= actual->getDown();
    }
    //diccionario
}
bool palabra::leerDerecha(nodo* final){
    nodo* actual= final;
    char palabra;
    while (actual->getLeft()->getEstado()==true) {
        palabra+=actual->getValor()->getLetra();
        actual= actual->getLeft();
    }
    //diccionario
}
int palabra::asignarPuntuacion(nodo* final, int direccion){
    int puntuacion;
    int bonus=1;
    if(direccion==1){
        while (final->getDown()->getEstado()==true) {
            if(final->getPuntosAsignados()==true){
                puntuacion+=final->getValor()->getValor();
                final= final->getDown();
            }
            if(final->getPuntuacion()==1){
                puntuacion+=final->getValor()->getValor();
                bonus=3;
                final->setPuntosAsignados(true);
                final= final->getDown();
            }if(final->getPuntuacion()==2){
                puntuacion+=final->getValor()->getValor()*2;
                final->setPuntosAsignados(true);
                final= final->getDown();

            }if(final->getPuntuacion()==3){
                puntuacion+=final->getValor()->getValor()*3;
                final->setPuntosAsignados(true);
                final= final->getDown();

            }if(final->getPuntuacion()==4){
                puntuacion+=final->getValor()->getValor();
                bonus=2;
                final->setPuntosAsignados(true);
                final= final->getDown();
            }
        }
        puntuacion*=bonus;
        //agregar puntuacion al jugador
    }
    if(direccion==2){
        while (final->getLeft()->getEstado()==true) {
            if(final->getPuntosAsignados()==true){
                puntuacion+=final->getValor()->getValor();
                final= final->getLeft();
            }
            if(final->getPuntuacion()==1){
                puntuacion+=final->getValor()->getValor();
                bonus=3;
                final->setPuntosAsignados(true);
                final= final->getLeft();
            }if(final->getPuntuacion()==2){
                puntuacion+=final->getValor()->getValor()*2;
                final->setPuntosAsignados(true);
                final= final->getLeft();

            }if(final->getPuntuacion()==3){
                puntuacion+=final->getValor()->getValor()*3;
                final->setPuntosAsignados(true);
                final= final->getLeft();

            }if(final->getPuntuacion()==4){
                puntuacion+=final->getValor()->getValor();
                bonus=2;
                final->setPuntosAsignados(true);
                final= final->getLeft();
            }
        }
        //agregar puntuacion al jugador
    }
}
void palabra::volverFicha(nodo *final){
    nodo* actual= final;
    if(actual->getUp()->getEstado()==true){
        while (actual->getUp()->getEstado()==true) {
            actual= actual->getUp();
        }
        quitarAbajo(actual);
    }
    if(actual->getLeft()->getEstado()==true){
        while (actual->getLeft()->getEstado()==true) {
            actual= actual->getLeft();
        }
        quitarDerecha(actual);
    }
    if(actual->getDown()->getEstado()==true){
        quitarAbajo(actual);
    }
    if(actual->getRight()->getEstado()==true){
        quitarDerecha(actual);
    }

}
void palabra::quitarAbajo(nodo* final){
    nodo* actual= final;
    while (actual->getDown()->getEstado()==true) {
        if(actual->getPuntosAsignados()==false){
            actual->getValor()->setX(actual->getValor()->getInicialX());
            actual->getValor()->setY(actual->getValor()->getInicialY());
            actual= actual->getDown();
            actual->setEstado(false);
        }
        actual=actual->getDown();
    }
}
void palabra::quitarDerecha(nodo* final){
    nodo* actual= final;
    while (actual->getLeft()->getEstado()==true) {
        if(actual->getPuntosAsignados()==false){
            actual->getValor()->setX(actual->getValor()->getInicialX());
            actual->getValor()->setY(actual->getValor()->getInicialY());
            actual= actual->getLeft();
            actual->setEstado(false);
        }
        actual=actual->getLeft();
    }
}


