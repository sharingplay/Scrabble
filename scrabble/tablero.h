#ifndef TABLERO_H
#define TABLERO_H
#include "lista.h"
#include <QObject>
#include <QGraphicsPixmapItem>


class tablero: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

private:
    lista posicionesLibres;
    lista posicionesOcupadas;

public:
    tablero(QGraphicsItem * parent = nullptr);
};
#endif // TABLERO_H
