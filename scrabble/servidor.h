#ifndef SERVIDOR_H
#define SERVIDOR_H

#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "string"
#include "/home/edgargonza/Desktop/nlohmann/json.hpp"
#include "modificadorjson.h"

using string = std::string;

class servidor {

public:
    servidor(int port, int memsize);

    short SocketCreate(void);
    int BindCreatedSocket(int hSocket);
    int runServer();

    int findVal(string tag);
    int findAdd(string add);

    //void enviarJson(string msg);

private:
    modificadorJson* modJS;
    int memSize;
    int port;
    void* init_ptr;
    void* current_ptr;
    int clientNext;
};


#endif //SERVIDOR_H
