#ifndef BOLSA_H
#define BOLSA_H
#include "lista.h"
#include "ficha.h"
#include "jugador.h"
#include "ventanafinpartida.h"


class bolsa
{
private:

    lista* listaFichas = new lista();
    char letras[100]={'A','A','A','A','A','A','A','A','A','B','B','C','C','D','D','D','D','E','E','E','E','E','E','E','E','E','E','E','E','F','F','G','G','G','H','H','I','I','I','I','I','I','I','I','I','J','K','L','L','L','L','M','M','N','N','N','N','N','N','O','O','O','O','O','O','O','O','P','P','Q','R','R','R','R','R','R','S','S','S','S','T','T','T','T','T','T','U','U','U','U','V','V','W','W','X','Y','Y','Z','c','c'};


public:
    static bolsa& getInstance(){
               static bolsa instance;
               return instance;
    }
    //!
    //! \brief bolsa: contrusctor de la bolsa con las letras a utilizar
    //!
    bolsa();
    int cantidadFichas = 100; //cantidad de fichas
    //!
    //! \brief repartir: reparte fichas de la bolsa a los jugadores.
    //! \param cantidad: cantida de fichas que se le deben repartir al jugador
    //! \param jugador: jugador al que se le debe repartir las fichas
    //!
    void repartir(int cantidad, jugador* jugador);
    //!
    //! \brief crear: crea la bolsa con las fichas acomodadas de forma aleatoria
    //!
    void crear();
};

#endif // BOLSA_H
