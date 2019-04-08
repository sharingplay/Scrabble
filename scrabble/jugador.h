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
    //!
    //! \brief nombre: nombre ingresado por el usuario
    //!
    QString nombre;
    //!
    //! \brief puntaje: puntaje del jugador
    //!
    //!
    int puntaje = 0;
    //!
    //! \brief cantFichas: cantidad de fichas que posee el jugador
    //!
    int cantFichas;
    //!
    //! \brief turno: indica si es el turno del para poder jugar
    //!
    bool turno = false;
    //!
    //! \brief listaFichas: lista con las fichas que tiene el jugador
    //!
    lista* listaFichas = new lista ();
    //!
    //! \brief ultimoNodo: ultimo nodo accedido por el jugador
    //!
    nodo *ultimoNodo;

public:
    jugador();
    void setUltimoNodo(nodo *nodo);
    void setNombre(QString nombre);
    void setPuntaje(int puntaje);
    void setcantFichas(int cantFichas);
    void setTurno(bool turno);
    QString getNombre();
    nodo* getUltimoNodo();
    int getPuntaje();
    int getcantFichas();
    bool getTurno();
    //!
    //! \brief agregarFicha: agrega ficha a la lista del jugador
    //! \param ficha: ficha que se quiere agregar a la lista
    //!
    void agregarFicha(ficha* ficha);
    lista* getlista();
    //!
    //! \brief eliminar: elimina fichas de la lista de jugador
    //! \param ficha: ficha que se quiere eliminar
    //!
    void eliminar(ficha* ficha);

};

#endif // JUGADOR_H
