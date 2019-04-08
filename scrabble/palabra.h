#ifndef PALABRA_H
#define PALABRA_H
#include <lista.h>
#include "tablero.h"
#include "lector.h"
#include "iostream"
#include "bolsa.h"
using namespace std;
class palabra
{
private:
    //!
    //! \brief puntuacion, puntos que vale la palabra formada
    //!
    int puntuacion;
public:
    palabra();
    //!
    //! \brief verificar, verifica si la palabra existe en el diccionario
    //! \param final, ultima ficha colocada
    //! \return true si la palabra existe, false si no
    //!
    bool verificar(nodo* final);
    int asignarPuntuacion(nodo* final, int direccion);
    //!
    //! \brief leerAbajo, lee la palabra formada por las fichas de arriba hacia abajo
    //! \param final, ultimo nodo ingresado a partir del cual busca la formacion de palabras
    //! \return  devuelve la palabra formada
    //!
    bool leerAbajo(nodo* final);
    //!
    //! \brief leerDerecha, lee la palabra formada por las fichas de izquierda a derecha
    //! \param final, ultimo nodo ingresado a partir del cual busca la formacion de palabras
    //! \return devuelve la palabra formada
    //!
    bool leerDerecha(nodo* final);
    //!
    //! \brief volverFicha, devuelve la ficha a la posicion anterior
    //! \param final, ultimo nodo donde se coloco
    //!
    void volverFicha(nodo* final);
    //!
    //! \brief quitarAbajo,quitarDerecha, elimina la ficha que se encuentra abajo o a la derecha del nodo
    //! \param final, ultimo nodo
    //!
    void quitarAbajo(nodo* final);
    void quitarDerecha(nodo* final);
    //!
    //! \brief unionPalabrasAbajo, unionPalabraDerecha, verifica que la nueva palabra este enlzada a una letra del tablero
    //! \param final, ultimo nodo acomodado
    //! \return  true si esta enlazado, false si no lo esta
    //!
    bool unionPalabrasAbajo(nodo* final);
    bool unionPalabrasDerecha(nodo* final);
};


#endif // PALABRA_H
