#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "ficha.h"

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
    view->setFixedSize(1250,800);
    escena->setSceneRect(0,0,1250,800);

    ficha * fichaA = new ficha('A');
    fichaA->setFlag(QGraphicsItem:: ItemIsFocusable);
    fichaA->setFocus();
    fichaA->setX(50);
    fichaA->setY(50);
    escena->addItem(fichaA);
    return a.exec();
}
