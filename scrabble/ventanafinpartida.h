#ifndef VENTANAFINPARTIDA_H
#define VENTANAFINPARTIDA_H

#include <QDialog>

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
    void on_botonSalir_clicked();

private:
    Ui::ventanaFinPartida *ui;
};

#endif // VENTANAFINPARTIDA_H
