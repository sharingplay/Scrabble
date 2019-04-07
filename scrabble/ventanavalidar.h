#ifndef VENTANAVALIDAR_H
#define VENTANAVALIDAR_H

#include <QDialog>

namespace Ui {
class ventanaValidar;
}

class ventanaValidar : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaValidar(QWidget *parent = nullptr);
    ~ventanaValidar();

private slots:
    void on_botonCancelar_clicked();

    void on_botonValidar_clicked();

private:
    Ui::ventanaValidar *ui;
};

#endif // VENTANAVALIDAR_H
