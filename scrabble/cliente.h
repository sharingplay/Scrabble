#ifndef CLIENTE_H
#define CLIENTE_H


#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<stdio.h>
#include "string"
#include"/home/mario/Downloads/Scrabble-server/ServidorCliente/nlohmann/json.hpp"

using string = std::string;
using json = nlohmann::json;

class cliente {

public:
    string data;

    cliente(int _port);

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


#endif // CLIENTE_H
