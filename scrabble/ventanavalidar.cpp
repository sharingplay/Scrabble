#include "ventanavalidar.h"
#include "ui_ventanavalidar.h"
#include <iostream>
using namespace std;


ventanaValidar::ventanaValidar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaValidar)
{
    ui->setupUi(this);
}

ventanaValidar::~ventanaValidar()
{
    delete ui;
}

void ventanaValidar::on_botonCancelar_clicked()
{
    close();
}

void ventanaValidar::on_botonValidar_clicked()
{
    cout<<"clickValidar"<<endl;
}
