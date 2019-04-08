#ifndef VENTANACODIGO_H
#define VENTANACODIGO_H

#include <QDialog>

namespace Ui {
class ventanaCodigo;
}

class ventanaCodigo : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaCodigo(QWidget *parent = nullptr);
    ~ventanaCodigo();

private slots:
    void on_botonSalir_clicked();

    void on_botonValidar_clicked();

private:
    Ui::ventanaCodigo *ui;
};

#endif // VENTANACODIGO_H
