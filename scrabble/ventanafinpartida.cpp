#include "ventanafinpartida.h"
#include "ui_ventanafinpartida.h"

ventanaFinPartida::ventanaFinPartida(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaFinPartida)
{
    ui->setupUi(this);

}

ventanaFinPartida::~ventanaFinPartida()
{
    delete ui;
}

void ventanaFinPartida::on_botonSalir_clicked()
{
    close();
}

void ventanaFinPartida::on_botonGanador_clicked()
{
    string ganador;
    //for (i)
    ui->labelGanador->setText("             Jugador 1");

}
