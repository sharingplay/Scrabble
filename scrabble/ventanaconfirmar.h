#ifndef VENTANACONFIRMAR_H
#define VENTANACONFIRMAR_H

#include <QDialog>

namespace Ui {
class ventanaConfirmar;
}

class ventanaConfirmar : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaConfirmar(QWidget *parent = nullptr);
    ~ventanaConfirmar();

private:
    Ui::ventanaConfirmar *ui;
};

#endif // VENTANACONFIRMAR_H
