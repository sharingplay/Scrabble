#include "palabra.h"

palabra::palabra()
{
}

bool palabra::verificar(nodo* final){
    nodo* actual= final;
    if(!tablero::getInstance().getcentro()->getEstado()){
        volverFicha(final);
    }
    if(actual->getUp()==nullptr){
        if(actual->getLeft()==nullptr){
            if(actual->getDown()->getEstado()==true){
                leerAbajo(actual);
            }
            else if(actual->getRight()->getEstado()==true){
                leerDerecha(actual);
            }
        }
        if(actual->getRight()==nullptr){
                if(actual->getLeft()->getEstado()==true){
                    while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
                        actual= actual->getLeft();
                    }
                    leerDerecha(actual);
                }
                else if(actual->getDown()->getEstado()==true){
                    leerAbajo(actual);
                }
        }else{

            if(actual->getLeft()->getEstado()==true){
                while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
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

    }
    else if(actual->getDown()==nullptr){
        if(actual->getLeft()==nullptr){
            if(actual->getUp()->getEstado()==true){
                while (actual->getUp()!=nullptr && actual->getUp()->getEstado()==true) {
                    actual= actual->getUp();
                }
                leerAbajo(actual);
            }
            else if(actual->getRight()->getEstado()==true){
                leerDerecha(actual);
            }
        }
        else if(actual->getRight()==nullptr){
            if(actual->getLeft()->getEstado()==true){
                while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
                    actual= actual->getLeft();
                }
                leerDerecha(actual);
            }
            if(actual->getUp()->getEstado()==true){
                while (actual->getUp()!=nullptr && actual->getUp()->getEstado()==true) {
                    actual= actual->getUp();
                }
                leerAbajo(actual);
            }

        }
        else{
            if(actual->getLeft()->getEstado()==true){
                while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
                    actual= actual->getLeft();
                }
                leerDerecha(actual);
            }
            else if(actual->getRight()->getEstado()==true){
                leerDerecha(actual);
            }
            else if(actual->getUp()->getEstado()==true){
                while (actual->getUp()!=nullptr && actual->getUp()->getEstado()==true) {
                    actual= actual->getUp();
                }
                leerAbajo(actual);
            }

        }

    }
    else if(actual->getLeft()==nullptr){
        if(actual->getUp()->getEstado()==true){
            while (actual->getUp()!= nullptr && actual->getUp()->getEstado()==true) {
                actual= actual->getUp();
            }
            leerAbajo(actual);
        }

        else if( actual->getDown()->getEstado()==true){
            leerAbajo(actual);
        }
        else if(actual->getRight()->getEstado()==true){
            leerDerecha(actual);
        }

    }
    else if(actual->getRight()==nullptr){
        if(actual->getUp()->getEstado()==true){
            while (actual->getUp()!= nullptr && actual->getUp()->getEstado()==true) {
                actual= actual->getUp();
            }
            leerAbajo(actual);
        }

        else if(actual->getDown()->getEstado()==true){
            leerAbajo(actual);
        }

        else if(actual->getLeft()->getEstado()==true){
            while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
                actual= actual->getLeft();
            }
            leerDerecha(actual);
        }
    }
    else{
        if(actual->getUp()->getEstado()==true){
            while (actual->getUp()!=nullptr && actual->getUp()->getEstado()==true) {
                actual= actual->getUp();
            }
            leerAbajo(actual);
        }
        else if(actual->getLeft()->getEstado()==true){
            while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
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
}

bool palabra::leerAbajo(nodo* final){
    nodo* actual= final;
    string palabra;
    if(!unionPalabrasAbajo(final) && tablero::getInstance().getPrimera()){
        quitarAbajo(final);

    }else{
        tablero::getInstance().setPrimera(true);
        while (actual!= nullptr && actual->getEstado()==true) {
            if (actual->getValor()->getLetra()=='c'){
                actual->getValor()->setLetra(comodin::getInstance().letra);
                actual->getValor()->setValor(comodin::getInstance().valor);

            }
                palabra+=actual->getValor()->getLetra();
                actual= actual->getDown();
            }

        std::cout<<palabra<<endl;
        string* palabraptr= &palabra;
        if (lector::getInstance().leer(palabraptr) == true){
            cout<<"Palabra verificada"<<endl;
            asignarPuntuacion(final,1);
        }
        else {
            quitarAbajo(final);
            cout<<"Palabra no encontrada"<<endl;
        }
    //diccionario
    }
}

bool palabra::unionPalabrasAbajo(nodo* final){
    nodo* actual= final;
    while(actual->getEstado()==true){
        if(actual->getPuntosAsignados() ==true){
            return true;
        }
        else{
            actual= actual->getDown();
        }
    }
    return false;
}
bool palabra::unionPalabrasDerecha(nodo* final){
    nodo* actual= final;
    while(actual->getEstado()==true){
        if(actual->getPuntosAsignados() ==true){
            return true;
        }
        else{
            actual= actual->getRight();
        }
    }
    return false;
}

bool palabra::leerDerecha(nodo* final){
    nodo* actual= final;
    string palabra;
    if(!unionPalabrasDerecha(final) && tablero::getInstance().getPrimera()){
        quitarDerecha(final);

    }else{
        tablero::getInstance().setPrimera(true);
        while (actual!= nullptr && actual->getEstado()==true) {
            palabra+=actual->getValor()->getLetra();
            actual= actual->getRight();
        }
        cout<<palabra<<endl;
        string* palabraptr= &palabra;

        if (lector::getInstance().leer(palabraptr) == true){
            cout<<"Palabra verificada"<<endl;

            asignarPuntuacion(final,2);//revisar.....................
        }
        else {
            cout<<"Palabra no encontrada"<<endl;
        }
        quitarDerecha(final);
    //diccionario
    }
}
int palabra::asignarPuntuacion(nodo* final, int direccion){
    int puntuacion=0;
    int bonus=1;
    if(direccion==1){
        while (final!= nullptr && final->getEstado()==true) {
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
            }else{
                final->setPuntosAsignados(true);
                puntuacion+=final->getValor()->getValor();
                final= final->getDown();
            }
        }
        puntuacion*=bonus;
        cout<<puntuacion<<endl;

        //agregar puntuacion al jugador
    }
    if(direccion==2){
        while (final!= nullptr && final->getEstado()==true) {
            if(final->getPuntosAsignados()==true){
                puntuacion+=final->getValor()->getValor();
                final= final->getRight();
            }
            else if(final->getPuntuacion()==1){
                puntuacion+=final->getValor()->getValor();
                bonus=3;
                final->setPuntosAsignados(true);
                final= final->getRight();
            }else if(final->getPuntuacion()==2){
                puntuacion+=final->getValor()->getValor()*2;
                final->setPuntosAsignados(true);
                final= final->getRight();

            }else if(final->getPuntuacion()==3){
                puntuacion+=final->getValor()->getValor()*3;
                final->setPuntosAsignados(true);
                final= final->getRight();

            }else if(final->getPuntuacion()==4){
                puntuacion+=final->getValor()->getValor();
                bonus=2;
                final->setPuntosAsignados(true);
                final= final->getRight();
            }else{
                final->setPuntosAsignados(true);
                puntuacion+=final->getValor()->getValor();
                final= final->getRight();
            }
        }
        puntuacion*=bonus;
        cout<<puntuacion<<endl;
        //agregar puntuacion al jugador
    }
}
void palabra::volverFicha(nodo *final){
    nodo* actual= final;
    if(actual->getUp()==nullptr){
        if(actual->getLeft()==nullptr){
            //if(actual->getDown()->getEstado()==true && actual->getRight()->getEstado()==true){
                //quitarNodo(final);
            //}
            if(actual->getDown()->getEstado()==true){
                quitarAbajo(actual);
            }
            else if(actual->getRight()->getEstado()==true){
                quitarDerecha(actual);
            }
        }
        if(actual->getRight()==nullptr){
            //if(actual->getDown()->getEstado()==true && actual->getRight()->getEstado()==true){
                //quitarNodo(final);
            //}
            if(actual->getLeft()->getEstado()==true){
                while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
                    actual= actual->getLeft();
                }
                quitarDerecha(actual);
            }
            else if(actual->getDown()->getEstado()==true){
                quitarAbajo(actual);
            }
        }else{

            if(actual->getLeft()->getEstado()==true){
                while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
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
    else if(actual->getDown()==nullptr){
        if(actual->getLeft()==nullptr){
            if(actual->getUp()->getEstado()==true){
                while (actual->getUp()!=nullptr && actual->getUp()->getEstado()==true) {
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
                while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
                    actual= actual->getLeft();
                }
                quitarDerecha(actual);
            }
            if(actual->getUp()->getEstado()==true){
                while (actual->getUp()!=nullptr && actual->getUp()->getEstado()==true) {
                    actual= actual->getUp();
                }
                quitarAbajo(actual);
            }

        }
        else{
            if(actual->getLeft()->getEstado()==true){
                while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
                    actual= actual->getLeft();
                }
                quitarDerecha(actual);
            }
            else if(actual->getRight()->getEstado()==true){
                quitarDerecha(actual);
            }
            else if(actual->getUp()->getEstado()==true){
                while (actual->getUp()!=nullptr && actual->getUp()->getEstado()==true) {
                    actual= actual->getUp();
                }
                quitarAbajo(actual);
            }

        }

    }
    else if(actual->getLeft()==nullptr){
        if(actual->getUp()->getEstado()==true){
            while (actual->getUp()!= nullptr && actual->getUp()->getEstado()==true) {
                actual= actual->getUp();
            }
            quitarAbajo(actual);
        }

        else if( actual->getDown()->getEstado()==true){
            quitarAbajo(actual);
        }
        else if(actual->getRight()->getEstado()==true){
            quitarDerecha(actual);
        }

    }
    else if(actual->getRight()==nullptr){
        if(actual->getUp()->getEstado()==true){
            while (actual->getUp()!= nullptr && actual->getUp()->getEstado()==true) {
                actual= actual->getUp();
            }
            quitarAbajo(actual);
        }

        else if(actual->getDown()->getEstado()==true){
            quitarAbajo(actual);
        }

        else if(actual->getLeft()->getEstado()==true){
            while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
                actual= actual->getLeft();
            }
            quitarDerecha(actual);
        }
    }
    else{
        if(actual->getUp()->getEstado()==true){
            while (actual->getUp()!=nullptr && actual->getUp()->getEstado()==true) {
                actual= actual->getUp();
            }
            quitarAbajo(actual);
        }
        else if(actual->getLeft()->getEstado()==true){
            while (actual->getLeft()!=nullptr && actual->getLeft()->getEstado()==true) {
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
    nodo* actual= final;
    while (actual!= nullptr && actual->getEstado()==true) {
        if(actual->getPuntosAsignados()==false){
            actual->getValor()->setX(actual->getValor()->getInicialX());
            actual->getValor()->setY(actual->getValor()->getInicialY());
            actual->setEstado(false);
            actual= actual->getDown();
        }else{
        actual=actual->getDown();

        }
    }
}
void palabra::quitarDerecha(nodo* final){
    nodo* actual= final;
    while (actual!= nullptr && actual->getEstado()==true) {
        if(actual->getPuntosAsignados()==false){
            actual->getValor()->setX(actual->getValor()->getInicialX());
            actual->getValor()->setY(actual->getValor()->getInicialY());
            actual->setEstado(false);
            actual= actual->getRight();
        }else{
            actual=actual->getRight();
        }
    }
}


