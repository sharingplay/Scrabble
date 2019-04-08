#ifndef LECTOR_H
#define LECTOR_H
#include <iostream>
#include <QDebug>
#include <string>
#include <QFile>
#include "ventanaconfirmar.h"
#include "ventanavalidar.h"
using namespace std;

class lector{

public:
    static lector& getInstance(){
               static lector instance;
               return instance;
    }
    lector();
    //!
    //! \brief leer: busca en el diccionario la palabra que el jugador necesita
    //! \param s: palabra a buscar
    //! \return devuelve true si la encuentra y false si no la encuentra
    //!
    bool leer(string* s);
};

#endif // LECTOR_H
