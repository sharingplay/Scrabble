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

using string = std::string;
class sala {
public:
    sala();
    string getJugadores();
    void setJugadores(string _nombre);
    string getCode();
    void setCode(string _code);
    void IniciarJuego();
private:
    string code;
    string jugadores[4];
};

#endif // SALA_H
