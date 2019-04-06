//
// Created by edgargonza on 05/04/19.
//

#ifndef SERVIDORCLIENTE_MODIFICADORJSON_H
#define SERVIDORCLIENTE_MODIFICADORJSON_H

#include <string>
#include <iostream>
#include "nlohmann/json.hpp"

using namespace std;

using json = nlohmann::json;
using string = std::string;

class modificadorJson {

public:
    modificadorJson();
    static string jsonAString(json JS);
    static json stringAJson(string text);
    static string obtenerKey(json jsKey, string clave);
};


#endif //SERVIDORCLIENTE_MODIFICADORJSON_H
