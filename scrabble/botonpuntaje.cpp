#include "botonpuntaje.h"

botonPuntaje::botonPuntaje (QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
setPixmap(QPixmap(":/imagenes/score.png"));
}

void botonPuntaje::mousePressEvent(QGraphicsSceneMouseEvent *event){

    for(int i = 0;i<1;i++){
        ventanaPuntuacion *ventConf = new ventanaPuntuacion();
        ventConf->show();
       }
}
