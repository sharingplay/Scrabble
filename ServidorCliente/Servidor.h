//
// Created by edgargonza on 03/04/19.
//

#ifndef SERVIDORCLIENTE_SERVIDOR_H
#define SERVIDORCLIENTE_SERVIDOR_H
#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include "string"
#include "nlohmann/json.hpp"
#include "LibreriaCodes.h"
#include "LibreriaCodes.cpp"
#include "modificadorJson.h"
#include "modificadorJson.cpp"

using string = std::string;

class Servidor {

public:
    Servidor(int port, int memsize);

    short SocketCreate(void);
    int BindCreatedSocket(int hSocket);
    int runServer();

    int findVal(string tag);
    int findAdd(string add);

    void enviarJson(string msg);

private:

    LibreriaCodes* lib;
    modificadorJson* modJS;
    int memSize;
    int port;
    void* init_ptr;
    void* current_ptr;

};


#endif //SERVIDORCLIENTE_SERVIDOR_H
