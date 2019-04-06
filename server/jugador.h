//
// Created by mariana on 05/04/19.
//

#ifndef SERVER_JUGADOR_H
#define SERVER_JUGADOR_H
#include "lista.h"
#include "ficha.h"
#include "nodo.h"
using namespace std;

class jugador {
private:
    int puntaje;
    int cantFichas;
    bool turno;
    lista* listaFichas = new lista ();
    string nombre;

public:
    jugador();
    void setPuntaje(int puntaje);
    void setcantFichas(int cantFichas);
    void setTurno(bool turno);
    int getPuntaje();
    int getcantFichas();
    bool getTurno();
    void agregarFicha(ficha* ficha);
    lista* getlista();
    void setNombre(string nombre);
    string getNombre();
};


#endif //SERVER_JUGADOR_H
