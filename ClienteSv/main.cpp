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
    Cliente c1(8080);
    //Cliente c2(8080);
    //Cliente c3(8080);

    int matriz[4][4] = {{3,4,5,5},{0,4,2,3},{9,5,2,6}};

    json js={
            {"iniciarSesion","iniciado"},
            {"Jugador","Edgar"},
            {"codigo","#RT34"},
            {"Puntos", {89,"Ed","pts",34}},
            {"Nodo", 90},
            {"Matriz", matriz}
    };

    auto p =js.find("Jugador");
    cout<<*p<<endl;

    string s = js.dump();

    json jsonParseado = json::parse(s);

    cout<<setw(4)<<jsonParseado<<"\n\n";

    cout<<s<<endl;

    c1.sendJson(s);
    //c2.sendJson("Foca");

    return 0;
}