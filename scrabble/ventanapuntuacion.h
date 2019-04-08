#ifndef VENTANAPUNTUACION_H
#define VENTANAPUNTUACION_H

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

private:
    Ui::ventanaPuntuacion *ui;
};

#endif // VENTANAPUNTUACION_H
