#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "lista.h"
#include "ficha.h"
#include "nodo.h"
using namespace std;

class jugador
{
private:
    string nombre;
    int puntaje;
    int cantFichas;
    bool turno;
    lista* listaFichas;

public:
    jugador();
    void setNombre(string nombre);
    void setPuntaje(int puntaje);
    void setcantFichas(int cantFichas);
    void setTurno(bool turno);
    string getNombre();
    int getPuntaje();
    int getcantFichas();
    bool getTurno();
    void agregarFicha(ficha* ficha);
    lista* getlista();

};

#endif // JUGADOR_H
