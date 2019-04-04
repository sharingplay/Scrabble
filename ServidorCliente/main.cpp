#include <iostream>
#include "Servidor.h"
#include "Servidor.cpp"
#include "Cliente.h"
#include "Cliente.cpp"
//#include "jugador.h"
//#include "jugador.cpp"

int main() {

    //Servidor serv (8080,1024);
    //serv.runServer();

    Cliente c1(8080);
    c1.sendJson("Fola");

    //jugador j1("Hols");

    return 0;
}