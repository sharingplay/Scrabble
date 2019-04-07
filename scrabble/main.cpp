//#include "mainwindow.h"
//#include <QApplication>
#include "servidor.h"

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);

    MainWindow ventanaMenu;
    ventanaMenu.show();
*/
    servidor serv (8090,1024);
    serv.runServer();

    //return a.exec();
}
