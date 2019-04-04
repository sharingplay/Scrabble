//
// Created by edgargonza on 03/04/19.
//

#ifndef SERVIDORCLIENTE_JUGADOR_H
#define SERVIDORCLIENTE_JUGADOR_H

#include <stdlib.h>
#include <iostream>
#include "string"
#include "nlohmann/json.hpp"
#include "Cliente.h"
#include "Cliente.cpp"
using json = nlohmann::json;
using string = std::string;

class jugador {
private:
    Cliente* cliente;

public:
    jugador(string msm);

};


#endif //SERVIDORCLIENTE_JUGADOR_H
