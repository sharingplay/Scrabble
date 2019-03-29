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

    struct sockaddr_in direccionServidor;
    direccionServidor.sin_family = AF_INET;
    direccionServidor.sin_addr.s_addr = INADDR_ANY;
    direccionServidor.sin_port = htons(8080);

    int servidor = socket(AF_INET, SOCK_STREAM, 0);

    int activado = 1;
    setsockopt(servidor, SOL_SOCKET, SO_REUSEADDR, &activado, sizeof(activado));

    if ( bind(servidor, (sockaddr*)&direccionServidor, sizeof(direccionServidor)) != 0){
        perror("Fallo el Bind");
        return 1;
    }

    printf("Estoy escuchando\n");
    listen(servidor, SOMAXCONN);

    //................................Cliente...........................

    struct sockaddr_in direccionCliente;
    unsigned int tamDireccion;
    int cliente = accept(servidor, (sockaddr*)&direccionCliente, &tamDireccion);

    printf("Recibi una nueva conexion en %d!!\n", tamDireccion);

    //...........................Se lo envia al SocketCliente.................

    send(cliente, "Hola Soy El Servidor\n", 21, 0);

    /*//............................Para enviar datos del Cliente al Srv con Bytes especificos........................

    char *buffer = (char *)malloc(5);

    int bytesRecibidos = recv(cliente, buffer, 4, 0);
    if (bytesRecibidos<0){
        perror("El cliente se desconecto");
        return 1;
    }

    buffer[bytesRecibidos] = '\0';
    printf("Me llegaron %d bytes con %s", bytesRecibidos, buffer);

    free(buffer);*/

    //....................Para enviar datos del cliente al servidor con bytes indefinidos...................
    /*uint32_t  tamPaquete;
    recv(cliente, &tamPaquete, 4, 0);

    char *buffer = (char *)malloc(tamPaquete);
    int bytesRecibidos = recv(cliente, buffer, tamPaquete, MSG_WAITALL);

    if (bytesRecibidos<0){
        perror("El cliente se desconecto");
        return 1;
    }

    buffer[bytesRecibidos] = '\0';
    printf("Me llegaron %d bytes con %s", bytesRecibidos, buffer);
    */

    //....................Para enviar Datos Cliente-Servidor...............................................

    //uint32_t  tamPaquete;
    //recv(cliente, &tamPaquete, 4, 0);

    //Para crear el json
    using json = nlohmann::json;

    //Para enviar y recibir tipo json
    json *buffer = (json*)malloc(1000);

    while (1){

        int bytesRecibidos = recv(cliente, buffer, sizeof(&buffer), 0);
        if (bytesRecibidos<=0){
            perror("El cliente se desconecto");
            return 1;
        }

        buffer[bytesRecibidos] = '\0';
        cout << buffer << '\n';
        printf("Me llegaron %d bytes con %s\n", bytesRecibidos, buffer);
    }


    //Para solo recibir char con char
    /*char *buffer = (char *)malloc(1000);

    while (1){

        int bytesRecibidos = recv(cliente, buffer, sizeof(&buffer), 0);
        if (bytesRecibidos<=0){
            perror("El cliente se desconecto");
            return 1;
        }

        buffer[bytesRecibidos] = '\0';
        printf("Me llegaron %d bytes con %s\n", bytesRecibidos, buffer);
    }*/


    return 0;
}
