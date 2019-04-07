#include <iostream>
#include "Cliente.h"
#include "Cliente.cpp"
#include <stdio.h>
#include "string"
#include <string.h>

#include"nlohmann/json.hpp"
using json = nlohmann::json;

using namespace std;
using string = std::string;

int main() {
    Cliente c1(8090);
    Cliente c2(8081);

    int matriz[4][4] = {{3,4,5,5},{0,4,2,3},{9,5,2,6}};

    json js={
            {"turno",false},
            {"jugador","Edgar"},
            {"codigo","#RT34"},
            {"puntos", 200},
            {"tablero", matriz},
            {"cantFichas", 9}
    };

    json js2={
            {"turno",false},
            {"jugador","Valeria"},
            {"codigo","#RT34"},
            {"puntos", 200},
            {"tablero", matriz},
            {"cantFichas", 9}
    };

    //auto p =js.find("Jugador");
    //cout<<*p<<endl;

    string s = js.dump();
    //json jsonParseado = json::parse(s);
    string s2 = js2.dump();
    //json jsonParseado = json::parse(s2);

    c1.sendJson(s);
    c1.sendJson(s2);
    //c2.sendJson(s2);

    return 0;
}