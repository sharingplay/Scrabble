#include "mainwindow.h"
#include <QApplication>
#include "cliente.h"
#include "cliente.cpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow ventanaMenu;
    ventanaMenu.show();

    cliente c1(8080);
    c1.sendJson("hodsksdj");

    return a.exec();
}
