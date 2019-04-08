#include "ventanaconfirmar.h"
#include "ui_ventanaconfirmar.h"

ventanaConfirmar::ventanaConfirmar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaConfirmar)
{
    ui->setupUi(this);
}

ventanaConfirmar::~ventanaConfirmar()
{
    delete ui;
}
