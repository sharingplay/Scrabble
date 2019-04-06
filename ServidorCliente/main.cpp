#include <iostream>
#include "Servidor.h"
#include "Servidor.cpp"

int main() {

    Servidor serv (8080,1024);
    serv.runServer();

    return 0;
}