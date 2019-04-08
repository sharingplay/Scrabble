#include "servidor.h"
#include <stdlib.h>
#include <iostream>
#include <string>
#include "string"
#include <QtDebug>
#include "/home/edgargonza/Desktop/nlohmann/json.hpp"
using json = nlohmann::json;
using string = std::string;

servidor::servidor(int port, int memsize) {

    this->memSize=memsize;
    this->port= port;

    init_ptr = malloc(memsize);
    current_ptr = init_ptr;


}

short servidor::SocketCreate(){

    short hSocket;
    printf("Create the socket\n");

    hSocket = socket(AF_INET, SOCK_STREAM, 0);
}

int servidor::BindCreatedSocket(int hSocket) {

    int iRetval=-1;
    int ClientPort = port;
    struct sockaddr_in  remote={0};


    remote.sin_family = AF_INET; /* Internet address family */
    remote.sin_addr.s_addr = htonl(INADDR_ANY); /* Any incoming interface */
    remote.sin_port = htons(ClientPort); /* Local port */
    iRetval = bind(hSocket,(struct sockaddr *)&remote,sizeof(remote));

    return iRetval;
}

int servidor::runServer(){
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

    //se reutiliza el puerto del socket
    int activity = 1;
    setsockopt(socket_desc, SOL_SOCKET, SO_REUSEADDR, &activity, sizeof(activity));

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

    //Se crea una sala
    //sala* sala1;

    //cola* colaA = new cola();

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

        /*if (clientNext == sock){
            send(sock , "Hola Soy el JugadorN" , 22 , 0);
        }

        //Enviar solucion
        send(sock , "Hola soy el servidor" , 21 , 0);
        send(sock , "Juegue" , 21 , 0);*/

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

        json js = modJS->stringAJson(client_message);

        //Claves del Json recivido
        auto jugador = js.find("jugador");
        string j1 = *jugador;
        cout<<"El jugador es: "<< j1<<endl;

        auto turno = js.find("turno");
        bool t1 = *turno;
        cout<<"El estado del jugador es: "<<t1<<endl;

        auto codigo = js.find("codigo");
        string cod1 = *codigo;
        cout<<"En codigo de la sala del jugador es: "<<cod1<<endl;

        auto puntos = js.find("puntos");
        int p1 = *puntos;
        cout<<"Los puntos del jugador son: "<<p1<<endl;

        /*int tablero[4][4];
        auto tablero = js.find("tablero");
        int tab1[4][4];
        tab1 = *tablero;
        cout<<tab1<<endl;
*/
        auto cantFichas = js.find("cantFichas");
        int cantF1 = *cantFichas;
        cout<<"La cantidad de fichas son: "<<cantF1<<endl;

        cout<<"El cliente es el socket: "<<sock<<endl;

        //jugador se agrega a la cola
        //colaA::getInstance()->agregar(j1,"127.0.0.1",sock,cod1);

        /*colaA->agregar(j1,"127.0.0.1",sock,cod1);

        //jugador se agrega a una sala especifica
        sala1->setLista(colaA->buscarJugador(cod1));

        sala1->iniciarJuego();

        //Le envia el tablero
        json tablero = {
          sala1->getTablero()
       };

        cout<<tablero<<endl;

        //string tablero = json::parse(tablero);
        //enviarJson(tablero);


        //Le envia el cantidad de fichas
        json cantf = {
          sala1->devolverFichas()
        };
        string fichas = json::parse((cantf));
        cout<<fichas<<endl;
       */ //enviarJson(fichas,sock);

        /*send(sock , "Solucion modificada" , 19 , 0);
        send(sock , "Exit" , 5 , 0);

        //Client next
        clientNext = sock+1;*/

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

/*void servidor::enviarJson(string msg, int socket) {

   // json j = json::parse(msg);

        int hSocket, read_size;
        struct sockaddr_in server;
        int n = msg.length();
        char SendToServer[n+1] = {0};
        strcpy(SendToServer, msg.c_str());
        size+= msg.size();
        //Send data to the server
        send(socket, SendToServer, strlen(SendToServer),0);
}*/

