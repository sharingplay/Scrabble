#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <iostream>
#include "nlohmann/json.hpp"

using namespace std;

int main(void) {

    using json = nlohmann::json;

    struct sockaddr_in direccionServidor;
    direccionServidor.sin_family = AF_INET;
    direccionServidor.sin_addr.s_addr = inet_addr("127.0.0.1");
    direccionServidor.sin_port = htons(8080);

    int cliente = socket(AF_INET, SOCK_STREAM, 0);
    if ( connect(cliente, (sockaddr*)&direccionServidor, sizeof(direccionServidor)) != 0){
        perror("No se puede conectar");
        return 1;
    }

    //json json_cliente
    auto jsonCliente = R"(
            {
                "Nombre": "Edgar",
                "Deporte": "Futbol",
                "Edad": 19
            }
        )"_json;

    //para mostrar el JSON
    //cout << jsonCliente << endl;

    //para mostrar si JSON es is_objet()
    //cout << jsonCliente.is_object() << endl;

    //Para enviar los valores de las claves
    //nc 127.0.0.1 8080;

    //claves con sus valores
    for (auto& el : jsonCliente.items()){
        //scanf("%s", element);
        //send(cliente, el.value(),, 0);
        cout << el.key() << " : " << el.value() << '\n';
    }

    /*//Para enviarle el json
    json* mensaje[jsonCliente.size()];
    mensaje = *&jsonCliente;
    send(cliente, mensaje , sizeof(mensaje), 0);
    cout << mensaje << '\n';
    //para mantenerlo abierto
    while (1){

    }*/

    send(cliente, "HOLLFokkT", 10, 0);
    json* buff = &jsonCliente;
    send(cliente, buff, sizeof(buff),0);

    /*//Para enviar mensajes type char con nc 127.0.0.1 8080
    while (1){
        char mensaje[WCHAR_MAX];
        send(cliente, mensaje , sizeof(mensaje), 0);
    }*/
    return 0;
}