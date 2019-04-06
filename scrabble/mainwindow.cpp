#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    //crear View
    QGraphicsView * view = new QGraphicsView(escena);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(1250,900);
    escena->setSceneRect(0,0,1250,900);

    //crea tablero y lo agrega a la escena
    tablero* tableroFondo = new tablero();
    tableroFondo->setX(0);
    tableroFondo->setY(0);
    escena->addItem(tableroFondo);

    //creacion jugador
    jugador *jugador1 = new jugador();
    QString nombre = ui->lineEdit_nombreJugador->text();
    jugador1->setNombre(nombre);
    jugador1->setPuntaje(10);
    QString datos = "Nombre:" + nombre + "\nPuntaje:           " + QString::number(jugador1->getPuntaje());

    //Mostrar Datos de los jugadores
    QGraphicsTextItem *datosJugador1 = new QGraphicsTextItem;
    datosJugador1->setScale(2);
    datosJugador1->setPos(800,50);
    datosJugador1->setPlainText(datos);

    //crea bolsa y reparte fichas al jugador
    //bolsa *bolsaA = new bolsa();
    //bolsaA->crear();
    //bolsaA->repartir(7,jugador1);
    bolsa::getInstance().crear();
    bolsa::getInstance().repartir(7,jugador1);

    //crea boton de jugar
    boton* botonJugar = new boton();
    botonJugar->setX(800);
    botonJugar->setY(675);

    escena->addItem(botonJugar);
    escena->addItem(datosJugador1);


}

void MainWindow::on_botonUnirse_clicked()
{
    ventValidar = new ventanaValidar(this);
    ventValidar->show();

}
