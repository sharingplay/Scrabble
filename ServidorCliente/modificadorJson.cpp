//
// Created by edgargonza on 05/04/19.
//

#include "modificadorJson.h"

modificadorJson::modificadorJson() {}

string modificadorJson::jsonAString(json JS) {
    string s = JS.dump();
    return s;
}

json modificadorJson::stringAJson(string text) {
    json jsonParseado = json::parse(text);
    return jsonParseado;
}

string modificadorJson::obtenerKey(json jsKey, string clave) {

    //clave por comparar
    auto keyV = jsKey.find(clave);
    return *keyV;

    /*//valor bool de la clave
    bool key = (keyV != jsKey.end());
    if ( key == true){
        return *keyV;
    }
    else{
        cout << "No existe esa clave en el json" << endl;
        return "Key no encontrada";
    }*/
}