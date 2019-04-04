#ifndef BOTON_H
#define BOTON_H
#include<QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include <QEvent>
#include "palabra.h"


class boton: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
   boton(QGraphicsItem * parent = nullptr);

protected:
   void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // BOTON_H
