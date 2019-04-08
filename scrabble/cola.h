#ifndef COLA_H
#define COLA_H

#include "colanodo.h"
#include "jugador.h"

class cola {

    private:
        cola(cola const&) = default;
        cola& operator = (cola const&) = default;

        static cola* Cola;
        int largo = 0;
    public:
        cola() = default;
        colanodo* head = nullptr;
        static cola* getInstance();
        void agregar(string Name,string Url,int puerto, string codigo);
        void eliminar();
        int gettamano();
        void settamano(int numero);
        void imprimirCola();
        jugador* buscarJugador(string codigo);
        jugador* nuevaSala();

};

#endif // COLA_H
