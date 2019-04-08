#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

QGraphicsScene* MainWindow::escena = nullptr;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena = new QGraphicsScene(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonJugar_clicked()
{
    //cierra la ventana de menu
    close();

    //crear View
    QGraphicsView * view = new QGraphicsView(escena);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(1250,900);
    escena->setSceneRect(0,0,1250,900);

    //crea tablero y lo agrega a la escena
    tablero *tableroFondo = new tablero();
    tableroFondo->setX(0);
    tableroFondo->setY(0);
    escena->addItem(tableroFondo);

    //creacion jugador
    jugador *jugador1 = new jugador();
    jugador1->setTurno(true);
    tablero::getInstance().listaJugadores[0] = jugador1;
    QString nombre = ui->lineEdit_nombreJugador->text();
    jugador1->setNombre(nombre);
    jugador1->setPuntaje(0);

    //crea bolsa y reparte fichas al jugador
    bolsa::getInstance().crear();
    bolsa::getInstance().repartir(7,jugador1);

    //crea boton de jugar
    boton* botonJugar = new boton();
    botonJugar->setX(800);
    botonJugar->setY(675);
    escena->addItem(botonJugar);

    //crea boton de score
    botonPuntaje* botonScore = new botonPuntaje();
    botonScore->setX(900);
    botonScore->setY(500);
    escena->addItem(botonScore);
}

void MainWindow::on_botonUnirse_clicked()
{
    ventanaFinPartida *ventFin = new ventanaFinPartida();
    ventFin->show();
}
