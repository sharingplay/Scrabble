#ifndef VENTANACOMODIN_H
#define VENTANACOMODIN_H

#include <QDialog>
#include "ficha.h"
#include "comodin.h"

namespace Ui {
class ventanaComodin;
}

class ventanaComodin : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaComodin(QWidget *parent = nullptr);
    ~ventanaComodin();

private slots:
    void on_botonSeleccionar_clicked();

private:
    Ui::ventanaComodin *ui;
};

#endif // VENTANACOMODIN_H
