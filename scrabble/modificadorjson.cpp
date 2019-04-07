#include "modificadorjson.h"

modificadorJson::modificadorJson() {}

string modificadorJson::jsonAString(json JS) {
    string s = JS.dump();
    return s;
}

json modificadorJson::stringAJson(string text) {
    json jsonParseado = json::parse(text);
    return jsonParseado;
}

void* modificadorJson::obtenerKey(json jsKey, string clave) {

    //clave por comparar
    auto keyV = jsKey.find(clave);
    //return *keyV;
}
