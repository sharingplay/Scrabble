#ifndef SALA_H
#define SALA_H

#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "string"
#include "/home/edgargonza/Desktop/nlohmann/json.hpp"
#include "modificadorjson.h"
#include "jugador.h"
#include "tablero.h"
#include "bolsa.h"
#include "palabra.h"
#include "lista.h"

using string = std::string;
class sala {
/*private:
    jugador* listaJugadores[4];
    string codigo;
    int tamano;
    tablero* tableroA;
    bolsa* bolsaA;

public:
    jugador* buscarTurno();
    void cambiarTurno(jugador* jugador);
    void actualizar(tablero* tablero);
    void setLista(jugador* jugador);
    //void iniciarJuego();
    void finalizarJuego();
    string getCodigo();
    void setCodigo(string codigo);
    int getTamano();
    void setTamano(int tamano);
    sala();
    void verificarPalabra(tablero* tablero,nodo* final);
    tablero* getTablero();
    //void setTablero();
    bolsa* getBolsa();
    void setBolsa();
    lista* devolverFichas();*/
};

#endif // SALA_H
