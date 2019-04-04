//
// Created by edgargonza on 03/04/19.
//

#include "jugador.h"

jugador::jugador(string msm) {

    this->cliente = new Cliente(8080);

    cliente->sendJson(msm);

}