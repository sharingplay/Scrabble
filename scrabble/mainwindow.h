#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "ficha.h"
#include "tablero.h"
#include "nodo.h"
#include "lista.h"
#include "bolsa.h"
#include "jugador.h"
#include "QString"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButtonJugar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
