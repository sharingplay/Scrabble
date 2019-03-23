#include "tablero.h"
#include "QGraphicsScene"

tablero::tablero(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/imagenes/tablero.jpg"));
}
