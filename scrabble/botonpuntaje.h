#ifndef BOTONPUNTAJE_H
#define BOTONPUNTAJE_H
#include<QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include <QEvent>
#include "jugador.h"
#include "tablero.h"
#include "ventanapuntuacion.h"

class botonPuntaje: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    botonPuntaje(QGraphicsItem * parent = nullptr);
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // BOTONPUNTAJE_H
