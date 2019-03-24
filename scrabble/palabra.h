#ifndef PALABRA_H
#define PALABRA_H
#include <lista.h>
#include <tablero.h>

class palabra
{
private:
    int puntuacion;
public:
    palabra();
    bool verificar(tablero tablero);
    int puntuacio();

};


#endif // PALABRA_H
