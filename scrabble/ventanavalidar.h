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
    //!
    //! \brief on_botonCancelar_clicked, no valida la palabra y cierra la ventana
    //!
    void on_botonCancelar_clicked();
    //!
    //! \brief on_botonValidar_clicked, envia mensaje al telefono del experto para validar la palabra
    //!
    void on_botonValidar_clicked();

private:
    Ui::ventanaValidar *ui;
};

#endif // VENTANAVALIDAR_H
