#ifndef VENTANAPUNTUACION_H
#define VENTANAPUNTUACION_H
#include "tablero.h"
#include <QString>

#include <QDialog>

namespace Ui {
class ventanaPuntuacion;
}

class ventanaPuntuacion : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaPuntuacion(QWidget *parent = nullptr);
    ~ventanaPuntuacion();

private slots:
    void on_botonPuntaje_clicked();

    void on_botonSalir_clicked();

private:
    Ui::ventanaPuntuacion *ui;
};

#endif // VENTANAPUNTUACION_H
