//
// Created by edgargonza on 03/04/19.
//

#include "Servidor.h"
#include <stdlib.h>
#include <iostream>
#include "Servidor.h"
#include "string"
#include "nlohmann/json.hpp"
using json = nlohmann::json;
using string = std::string;

Servidor::Servidor(int port, int memsize) {

    this->memSize=memsize;
    this->port= port;

    init_ptr = malloc(memsize);
    current_ptr = init_ptr;


}

short Servidor::SocketCreate(){

    short hSocket;
    printf("Create the socket\n");

    hSocket = socket(AF_INET, SOCK_STREAM, 0);
    return hSocket;
}

int Servidor::BindCreatedSocket(int hSocket) {

    int iRetval=-1;
    int ClientPort = port;
    struct sockaddr_in  remote={0};


    remote.sin_family = AF_INET; /* Internet address family */
    remote.sin_addr.s_addr = htonl(INADDR_ANY); /* Any incoming interface */
    remote.sin_port = htons(ClientPort); /* Local port */
    iRetval = bind(hSocket,(struct sockaddr *)&remote,sizeof(remote));

    return iRetval;
}

int Servidor::runServer(){
    int socket_desc , sock , clientLen , read_size;
    struct sockaddr_in server , client;
    char client_message[200]={0};
    char message[100] = {0};

    //Create socket
    socket_desc = SocketCreate();
    if (socket_desc == -1)
    {
        printf("Could not create socket");
        return 1;
    }
    printf("Socket created\n");


    //Bind
    if( BindCreatedSocket(socket_desc) < 0)
    {
        //print the error message
        perror("bind failed.");
        return 1;
    }
    printf("bind done\n");

    //Listen
    listen(socket_desc , 3);

    //Accept and incoming connection

    while(1)
    {

        printf("Port is: %i\n",port);
        printf("Waiting for incoming connections...\n");

        clientLen = sizeof(struct sockaddr_in);

        //accept connection from an incoming client
        sock = accept(socket_desc, (struct sockaddr *)&client, (socklen_t*)&clientLen);
        if (sock < 0)
        {
            perror("accept failed");
            return 1;
        }
        printf("Connection accepted\n");


        memset(client_message, '\0', sizeof client_message);
        memset(message, '\0', sizeof message);


        //Receive a reply from the client
        if( recv(sock , client_message , 200 , 0) < 0)
        {
            printf("recv failed");
            break;
        }

        printf("Cliente %i\n me envio: %s\n", sock,client_message);

        string str(client_message);

        json js = modJS().stringAJson(client_message);

        string inicio = modJS().obtenerKey(js,"iniciarSesion");
        string nombre = modJS().obtenerKey(js,"jugador");
        string codigo = modJS().obtenerKey(js, "code");

        if (inicio=="iniciado"){
            lib().Agregar(codigo, nombre);
        }

        //para envairle al cliente
        //send(sock , message , strlen(message) , 0)

        /*if(str == "break"){
            close(sock);
            sleep(1);
            printf("Shutting server");
            break;
        }*/
        if (0<-1){
            printf("Error");
        }
        else{
            //close(sock);
            sleep(1);
            //enviarJson(message);
        }
    }
}

void Servidor::enviarJson(string msg) {

    json j = json::parse(msg);

    return;
}






