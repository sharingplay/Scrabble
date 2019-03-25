#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>

int main(void) {

    struct sockaddr_in direccionServidor;
    direccionServidor.sin_family = AF_INET;
    direccionServidor.sin_addr.s_addr = inet_addr("127.0.0.1");
    direccionServidor.sin_port = htons(8080);

    int cliente = socket(AF_INET, SOCK_STREAM, 0);
    if ( connect(cliente, (sockaddr*)&direccionServidor, sizeof(direccionServidor)) != 0){
        perror("No se puede conectar");
        return 1;
    }

    while (1){
        char mensaje[1000];
        scanf("%s", mensaje);


        send(cliente, mensaje, strlen(mensaje), 0);
    }

    return 0;
}