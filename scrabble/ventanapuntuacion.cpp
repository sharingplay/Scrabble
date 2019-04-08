#include "ventanapuntuacion.h"
#include "ui_ventanapuntuacion.h"

ventanaPuntuacion::ventanaPuntuacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaPuntuacion)
{
    ui->setupUi(this);
}

ventanaPuntuacion::~ventanaPuntuacion()
{
    delete ui;
}
