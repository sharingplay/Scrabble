#include "ficha.h"
#include "QGraphicsScene"

ficha::ficha (QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
}
    //Asignar imagen a la ficha
    ficha::ficha(char letra){
        switch (letra) {
        case 'A': setPixmap(QPixmap(":/imagenes/A.png"));
            break;
        case 'B': setPixmap(QPixmap(":/images/B.png"));
            break;
        case 'C': setPixmap(QPixmap(":/images/C.png"));
            break;
        case 'D': setPixmap(QPixmap(":/images/D.png"));
            break;
        case 'E': setPixmap(QPixmap(":/images/E.png"));
            break;
        case 'F': setPixmap(QPixmap(":/images/F.png"));
            break;
        case 'G': setPixmap(QPixmap(":/images/G.png"));
            break;
        case 'H': setPixmap(QPixmap(":/images/H.png"));
            break;
        case 'I': setPixmap(QPixmap(":/images/I.png"));
            break;
        case 'J': setPixmap(QPixmap(":/images/J.png"));
            break;
        case 'K': setPixmap(QPixmap(":/images/K.png"));
            break;
        case 'L': setPixmap(QPixmap(":/images/L.png"));
            break;
        case 'M': setPixmap(QPixmap(":/images/M.png"));
            break;
        case 'N': setPixmap(QPixmap(":/images/N.png"));
            break;
        case 'O': setPixmap(QPixmap(":/images/O.png"));
            break;
        case 'P': setPixmap(QPixmap(":/images/P.png"));
            break;
        case 'Q': setPixmap(QPixmap(":/images/Q.png"));
            break;
        case 'R': setPixmap(QPixmap(":/images/R.png"));
            break;
        case 'S': setPixmap(QPixmap(":/images/S.png"));
            break;
        case 'T': setPixmap(QPixmap(":/images/T.png"));
            break;
        case 'U': setPixmap(QPixmap(":/images/U.png"));
            break;
        case 'V': setPixmap(QPixmap(":/images/V.png"));
            break;
        case 'W': setPixmap(QPixmap(":/images/W.png"));
            break;
        case 'X': setPixmap(QPixmap(":/images/X.png"));
            break;
        case 'Y': setPixmap(QPixmap(":/images/Y.png"));
            break;
        case 'Z': setPixmap(QPixmap(":/images/Z.png"));
            break;
        case ' ': setPixmap(QPixmap(":/images/blanca.png"));
            break;
        }

    }
    void ficha::setValor(int valor){
        this->valor = valor;
    }
    void ficha::setLetra(char letra){
        this->letra = letra;
    }
    char ficha::getLetra(){
        return this->letra;
    }
    int ficha::getValor(){
        return this->valor;
    }

    void ficha:: mouseMoveEvent(QGraphicsSceneMouseEvent *event){
        this->setX(event->scenePos().x());
        this->setY(event->scenePos().y());
    }
    void ficha::mousePressEvent(QGraphicsSceneMouseEvent *event){

    }
    void ficha::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){

    }
