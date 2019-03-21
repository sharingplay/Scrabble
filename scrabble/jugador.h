#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using namespace std;

class jugador
{
private:
    string nombre;
    int puntaje;
    int cantFichas;
    bool turno;

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

};

#endif // JUGADOR_H
