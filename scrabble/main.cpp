#include "mainwindow.h"
#include <QApplication>
#include "cliente.h"
#include "cliente.cpp"
#include <iostream>
using namespace std;
void messageSender(const char* word){
    const char* exp_palabra = word;
    const char* pyfile = "python /home/mario/Desktop/Scrabble/scrabble/trial.py ";

    string msj = pyfile;
    msj += exp_palabra;
    //----------------------------------------------------
    //
    //      Ordenar palabra para que se vea mejorcito
    //
    //----------------------------------------------------

    const char* exp_palabra1 = ",";
    msj += exp_palabra1;

    const char* exp_palabra2 = "8896";
    msj += exp_palabra2;

    const char* sendCommand = msj.c_str();

    system(sendCommand);

}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow ventanaMenu;
    ventanaMenu.show();

    messageSender("Exito");
    cliente c1(8080);
    c1.sendJson("hodsksdj");
    return a.exec();
}
