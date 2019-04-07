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
