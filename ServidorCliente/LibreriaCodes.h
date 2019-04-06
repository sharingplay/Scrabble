//
// Created by edgargonza on 05/04/19.
//

#ifndef SERVIDORCLIENTE_LIBRERIACODES_H
#define SERVIDORCLIENTE_LIBRERIACODES_H

#include <string>
#include <iostream>
using namespace std;
using string = std::string;

using namespace std;
class LibreriaCodes {

private:
    string lib[5][5];
public:
    LibreriaCodes();
    string Agregar(string code, string nombre);
};


#endif //SERVIDORCLIENTE_LIBRERIACODES_H
