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

void ventanaPuntuacion::on_botonPuntaje_clicked()
{
    int puntaje = tablero::getInstance().listaJugadores[0]->getPuntaje();
    QString nombre = tablero::getInstance().listaJugadores[0]->getNombre();
    QString datos = nombre + " " +QString::number(puntaje);
    ui->labelPuntos->setText(datos);
}

void ventanaPuntuacion::on_botonSalir_clicked()
{
    close();
}
