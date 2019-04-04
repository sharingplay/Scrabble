#include <iostream>
#include "Cliente.h"
#include "Cliente.cpp"
#include <stdio.h>
#include "string"
#include "Nodo.h"
#include "Nodo.cpp"
#include <string.h>

#include"nlohmann/json.hpp"
using json = nlohmann::json;

using namespace std;
using string = std::string;

int main() {
    //Cliente c1(8080);
    //Cliente c2(8080);
    //Cliente c3(8080);

    int matriz[4][4] = {{3,4,5,5},{0,4,2,3},{9,5,2,6}};

    json js={
            {"Jugador","Edgar"},
            {"Puntos", 89},
            {"Matriz", matriz}

    };
//+"as\"" /
    char t1[]=R"({)";
    cout<<t1<<endl;

    for (json::iterator it = js.begin(); it != js.end(); it++){

        strcat(t1,"\"");
        //v = js[it.key()];
        strcat(t1,"Clave");
        strcat(t1,"\"");
        strcat(t1,":");
        strcat(t1,"valor,");
        cout<<t1<<endl;

        //cout<< it.key() << " : " << it.value()<< "\n";
    }

    strcat(t1,"}");
    cout<<t1<<endl;

    /*char text[]= R"(
            {
            "Jugador": "Edgar",
            "Puntos": 8,
            "Matriz": [7868,867,[867,8,67]]
            }
    )";

    json jsonT = {};

    cout<<jsonT<<endl;
    jsonT.emplace("Jugador","Ed");
    cout<<jsonT<<endl;

    json jsonParseado = json::parse(text);

    cout<<setw(4)<<jsonParseado<<"\n\n";
    */
    //c1.sendJson(text);
    //c2.sendJson("Foca");

    return 0;
}