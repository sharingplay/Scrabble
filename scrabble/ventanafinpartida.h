#ifndef VENTANAFINPARTIDA_H
#define VENTANAFINPARTIDA_H

#include <QDialog>
#include "tablero.h"

namespace Ui {
class ventanaFinPartida;
}

class ventanaFinPartida : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaFinPartida(QWidget *parent = nullptr);
    ~ventanaFinPartida();

private slots:
    //!
    //! \brief on_botonSalir_clicked, cierra la ventana
    //!
    void on_botonSalir_clicked();

    void on_botonGanador_clicked();

private:
    Ui::ventanaFinPartida *ui;
};

#endif // VENTANAFINPARTIDA_H
