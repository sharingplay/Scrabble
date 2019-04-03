#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonJugar_clicked()
{



    jugador *jugador1 = new jugador();
    QString nombre = ui->lineEdit_nombreJugador->text();
    jugador1->setNombre(nombre.toStdString());
    jugador1->setPuntaje(10);
    QString datos = "Nombre:" + nombre + "\nPuntaje:           " + QString::number(jugador1->getPuntaje());


    //Mostrar Datos de los jugadores
    QGraphicsTextItem *datosJugador1 = new QGraphicsTextItem;
    datosJugador1->setScale(2);
    datosJugador1->setPos(800,50);
    datosJugador1->setPlainText(datos);



    //crea bolsa y reparte fichas al jugador
    bolsa *bolsaA = new bolsa();
    bolsaA->crear();
    bolsaA->repartir(7,jugador1);

    //crear escena
    static QGraphicsScene * escena = new QGraphicsScene();

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

    fichaC2->setY(820);
    tableroFondo->setX(0);
    tableroFondo->setY(0);

    escena->addItem(tableroFondo);
    escena->addItem(datosJugador1);

    escena->addItem(fichaA);
    escena->addItem(fichaC);

}
