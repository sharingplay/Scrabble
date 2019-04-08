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
    Cliente c1(8079);
    Cliente c2(8079);
    Cliente c3(8079);

    string matriz[4][4] = {{"C","A","S","A"},{"C","A","R","S"},{"C","O","C","O"}};

    json js={
            {"turno",false},
            {"jugador","Edgar"},
            {"codigo","#RT34"},
            {"puntos", 200},
            {"tablero", matriz},
            {"cantFichas", 5}
    };

    json js2={
            {"turno",false},
            {"jugador","Valeria"},
            {"codigo","#RT35"},
            {"puntos", 200},
            {"tablero", matriz},
            {"cantFichas", 7}
    };

    json js3={
            {"turno",true},
            {"jugador","Raul"},
            {"codigo","#RT34"},
            {"puntos", 200},
            {"tablero", matriz},
            {"cantFichas", 4}
    };

    //auto p =js.find("Jugador");
    //cout<<*p<<endl;

    string s = js.dump();
    //json jsonParseado = json::parse(s);
    string s2 = js2.dump();
    //json jsonParseado = json::parse(s2);
    string s3 = js3.dump();

    c1.sendJson(s);
    c2.sendJson(s2);
    c3.sendJson(s3);
    //c2.sendJson(s2);

    return 0;
}