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
#include "boton.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    static MainWindow& getInstance(){
        static MainWindow instance;
        return instance;
    }
    explicit MainWindow(QWidget *parent = nullptr);
    static QGraphicsScene* escena;
    ~MainWindow();

private slots:

    void on_pushButtonJugar_clicked();

    void on_botonUnirse_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
