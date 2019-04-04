#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "lista.h"
#include "ficha.h"
#include "nodo.h"
#include "QKeyEvent"
using namespace std;

class jugador
{
//protected:
//    void keyPressEvent(QKeyEvent *tecla);
private:
    QString nombre;
    int puntaje;
    int cantFichas;
    bool turno;
    lista* listaFichas = new lista ();

public:
    jugador();
    void setNombre(QString nombre);
    void setPuntaje(int puntaje);
    void setcantFichas(int cantFichas);
    void setTurno(bool turno);
    QString getNombre();
    int getPuntaje();
    int getcantFichas();
    bool getTurno();
    void agregarFicha(ficha* ficha);
    lista* getlista();

};

#endif // JUGADOR_H
