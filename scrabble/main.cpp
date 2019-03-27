#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "ficha.h"
#include "tablero.h"
#include "nodo.h"
#include "lista.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //crear escena
    QGraphicsScene * escena = new QGraphicsScene();

    //crear View
    QGraphicsView * view = new QGraphicsView(escena);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(1250,900);
    escena->setSceneRect(0,0,1250,900);

    ficha * fichaA = new ficha('A');
    ficha * fichaC = new ficha('C');
    ficha * fichaA2 = new ficha('A');
    ficha * fichaC2 = new ficha('C');
    tablero* tableroFondo = new tablero();


    fichaA->setFlag(QGraphicsItem:: ItemIsFocusable);
    fichaA->setFocus();
    fichaA->setX(50);
    fichaA->setY(820);
    fichaC->setFlag(QGraphicsItem:: ItemIsFocusable);
    fichaC->setFocus();
    fichaC->setX(100);
    fichaC->setY(820);
    fichaA2->setFlag(QGraphicsItem:: ItemIsFocusable);
    fichaA2->setFocus();
    fichaA2->setX(150);
    fichaA2->setY(820);
    fichaC2->setFlag(QGraphicsItem:: ItemIsFocusable);
    fichaC2->setFocus();
    fichaC2->setX(200);
    fichaC2->setY(820);
    tableroFondo->setX(0);
    tableroFondo->setY(0);


    escena->addItem(tableroFondo);
    escena->addItem(fichaA);
    escena->addItem(fichaA2);
    escena->addItem(fichaC);
    escena->addItem(fichaC2);


    return a.exec();
}
