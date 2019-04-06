#include "palabra.h"

palabra::palabra()
{
}

bool palabra::verificar(nodo* final){
    nodo* actual= final;
    if(!tablero::getInstance().getcentro()->getEstado()){
        volverFicha(final);
    }
    else if(actual->getUp()->getEstado()==true){
        while (actual->getUp()->getEstado()==true) {
            actual= actual->getUp();
        }
        leerAbajo(actual);
    }
    else if(actual->getLeft()->getEstado()==true){
        while (actual->getLeft()->getEstado()==true) {
            actual= actual->getLeft();
        }
        leerDerecha(actual);
    }
    else if(actual->getDown()->getEstado()==true){
        leerAbajo(actual);
    }
    else if(actual->getRight()->getEstado()==true){
        leerDerecha(actual);
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
            else if(final->getPuntuacion()==1){
                puntuacion+=final->getValor()->getValor();
                bonus=3;
                final->setPuntosAsignados(true);
                final= final->getDown();
            }else if(final->getPuntuacion()==2){
                puntuacion+=final->getValor()->getValor()*2;
                final->setPuntosAsignados(true);
                final= final->getDown();

            }else if(final->getPuntuacion()==3){
                puntuacion+=final->getValor()->getValor()*3;
                final->setPuntosAsignados(true);
                final= final->getDown();

            }else if(final->getPuntuacion()==4){
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
            else if(final->getPuntuacion()==1){
                puntuacion+=final->getValor()->getValor();
                bonus=3;
                final->setPuntosAsignados(true);
                final= final->getLeft();
            }else if(final->getPuntuacion()==2){
                puntuacion+=final->getValor()->getValor()*2;
                final->setPuntosAsignados(true);
                final= final->getLeft();

            }else if(final->getPuntuacion()==3){
                puntuacion+=final->getValor()->getValor()*3;
                final->setPuntosAsignados(true);
                final= final->getLeft();

            }else if(final->getPuntuacion()==4){
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
    if(actual->getUp()==nullptr){
        if(actual->getLeft()==nullptr){
            if(actual->getDown()->getEstado()==true){
                quitarAbajo(actual);
            }
            else if(actual->getRight()->getEstado()==true){
                quitarDerecha(actual);
            }
        }
        if(actual->getRight()==nullptr){
                if(actual->getLeft()->getEstado()==true){
                    while (actual->getLeft()->getEstado()==true) {
                        actual= actual->getLeft();
                    }
                }
                else if(actual->getDown()->getEstado()==true){
                    quitarAbajo(actual);
                }
        }

    }
    else if(actual->getDown()==nullptr){
        if(actual->getLeft()==nullptr){
            if(actual->getUp()->getEstado()==true){
                while (actual->getUp()->getEstado()==true) {
                    actual= actual->getUp();
                }
                quitarAbajo(actual);
            }
            else if(actual->getRight()->getEstado()==true){
                quitarDerecha(actual);
            }
        }
        else if(actual->getRight()==nullptr){
            if(actual->getLeft()->getEstado()==true){
                while (actual->getLeft()->getEstado()==true) {
                    actual= actual->getLeft();
                }
            }
            if(actual->getUp()->getEstado()==true){
                while (actual->getUp()->getEstado()==true) {
                    actual= actual->getUp();
                }
                quitarAbajo(actual);
            }

        }

    }
    else if(actual->getLeft()==nullptr){
        if(actual->getUp()->getEstado()==true){
            while (actual->getUp()->getEstado()==true) {
                actual= actual->getUp();
            }
            quitarAbajo(actual);
        }

        else if(actual->getDown()->getEstado()==true){
            quitarAbajo(actual);
        }
        else if(actual->getRight()->getEstado()==true){
            quitarDerecha(actual);
        }

    }
    else if(actual->getRight()==nullptr){
        if(actual->getUp()->getEstado()==true){
            while (actual->getUp()->getEstado()==true) {
                actual= actual->getUp();
            }
            quitarAbajo(actual);
        }

        else if(actual->getDown()->getEstado()==true){
            quitarAbajo(actual);
        }

        else if(actual->getLeft()->getEstado()==true){
            while (actual->getLeft()->getEstado()==true) {
                actual= actual->getLeft();
            }
            quitarDerecha(actual);
        }
    }
    else{
        if(actual->getUp()->getEstado()==true){
            while (actual->getUp()->getEstado()==true) {
                actual= actual->getUp();
            }
            quitarAbajo(actual);
        }
        else if(actual->getLeft()->getEstado()==true){
            while (actual->getLeft()->getEstado()==true) {
                actual= actual->getLeft();
            }
            quitarDerecha(actual);
        }
        else if(actual->getDown()->getEstado()==true){
            quitarAbajo(actual);
        }
        else if(actual->getRight()->getEstado()==true){
            quitarDerecha(actual);
        }
    }
}
void palabra::quitarAbajo(nodo* final){
    cout<<"quitarabajo"<<endl;
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
    cout<<"quitar derecha"<<endl;
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


