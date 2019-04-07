#ifndef VENTANACOMODIN_H
#define VENTANACOMODIN_H

#include <QDialog>

namespace Ui {
class ventanaComodin;
}

class ventanaComodin : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaComodin(QWidget *parent = nullptr);
    ~ventanaComodin();

private:
    Ui::ventanaComodin *ui;
};

#endif // VENTANACOMODIN_H
