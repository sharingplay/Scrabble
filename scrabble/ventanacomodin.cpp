#include "ventanacomodin.h"
#include "ui_ventanacomodin.h"

ventanaComodin::ventanaComodin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaComodin)
{
    ui->setupUi(this);
}

ventanaComodin::~ventanaComodin()
{
    delete ui;
}
