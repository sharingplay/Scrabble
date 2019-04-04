//
// Created by edgargonza on 03/04/19.
//

#ifndef SERVIDORCLIENTE_CLIENTE_H
#define SERVIDORCLIENTE_CLIENTE_H

#include "nlohmann/json.hpp"
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<stdio.h>
#include "string"
using string = std::string;
using json = nlohmann::json;

class Cliente {

public:
    string data;

    Cliente(int _port);

    int sendJson(string msg);

    //Create a Socket for server communication
    short SocketCreate(void);

    //try to connect with server
    int SocketConnect(int hSocket);

    // Send the data to the server and set the timeout of 20 seconds
    int SocketSend(int hSocket,char* Rqst,short lenRqst);

    //receive the data from the server
    int SocketReceive(int hSocket,char* Rsp,short RvcSize);

private:
    int port;
    int size = 0;
};



#endif //SERVIDORCLIENTE_CLIENTE_H
