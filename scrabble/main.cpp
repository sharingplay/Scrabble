//#include "mainwindow.h"
//#include <QApplication>
#include "servidor.h"
#include "cola.h"

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);

    MainWindow ventanaMenu;
    ventanaMenu.show();
*/
    servidor serv (8079,1024);

    serv.runServer();


    //return a.exec();
}
