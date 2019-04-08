#include "ventanacodigo.h"
#include "ui_ventanacodigo.h"

ventanaCodigo::ventanaCodigo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaCodigo)
{
    ui->setupUi(this);
}

ventanaCodigo::~ventanaCodigo()
{
    delete ui;
}

void ventanaCodigo::on_botonSalir_clicked()
{
    close();
}

void ventanaCodigo::on_botonValidar_clicked()
{

}
