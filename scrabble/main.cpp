#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow ventanaMenu;
    ventanaMenu.show();

    return a.exec();
}
