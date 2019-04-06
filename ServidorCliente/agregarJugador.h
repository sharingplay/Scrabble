//
// Created by edgargonza on 05/04/19.
//

#ifndef SERVIDORCLIENTE_AGREGARJUGADOR_H
#define SERVIDORCLIENTE_AGREGARJUGADOR_H

#include "LibreriaCodes.h"
#include "LibreriaCodes.cpp"
#include "nlohmann/json.hpp"
using namespace std;
using json = nlohmann::json;
using string = std::string;

class agregarJugador {

private:
    string jugador;
    string code;

public:
    agregarJugador();
    bool decodificarClave(string key);
    string inicioSesion(LibreriaCodes lib,string key);
};


#endif //SERVIDORCLIENTE_AGREGARJUGADOR_H
