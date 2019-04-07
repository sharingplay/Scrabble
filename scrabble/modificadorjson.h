#ifndef MODIFICADORJSON_H
#define MODIFICADORJSON_H

#include <string>
#include <iostream>
#include "/home/edgargonza/Desktop/nlohmann/json.hpp"

using namespace std;

using json = nlohmann::json;
using string = std::string;

class modificadorJson {

public:
    modificadorJson();
    static string jsonAString(json JS);
    static json stringAJson(string text);
    static void* obtenerKey(json jsKey, string clave);
};

#endif // MODIFICADORJSON_H
