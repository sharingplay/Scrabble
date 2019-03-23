#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "ficha.h"
#include "tablero.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //crear escena
    QGraphicsScene * escena = new QGraphicsScene();

    //crear View
    QGraphicsView * view = new QGraphicsView(escena );
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(1250,900);
    escena->setSceneRect(0,0,1250,900);

    ficha * fichaA = new ficha('A');
    tablero * tableroFondo = new tablero();
    fichaA->setFlag(QGraphicsItem:: ItemIsFocusable);
    fichaA->setFocus();
    fichaA->setX(50);
    fichaA->setY(820);
    tableroFondo->setX(0);
    tableroFondo->setY(0);


    escena->addItem(tableroFondo);
    escena->addItem(fichaA);
    return a.exec();
}
