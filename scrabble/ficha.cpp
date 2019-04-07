#include "ficha.h"
#include "QGraphicsScene"
#include "mainwindow.h"

ficha::ficha (QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
}
    //Asignar imagen a la ficha
    ficha::ficha(char letra){
        switch (letra) {
        case 'A': setPixmap(QPixmap(":/imagenes/A.png"));
            setLetra('A');
            setValor(1);
            break;
        case 'B': setPixmap(QPixmap(":/imagenes/B.png"));
            setLetra('B');
            setValor(3);
            break;
        case 'C': setPixmap(QPixmap(":/imagenes/C.png"));
            setLetra('C');
            setValor(3);
            break;
        case 'D': setPixmap(QPixmap(":/imagenes/D.png"));
            setLetra('D');
            setValor(2);
            break;
        case 'E': setPixmap(QPixmap(":/imagenes/E.png"));
            setLetra('E');
            setValor(1);
            break;
        case 'F': setPixmap(QPixmap(":/imagenes/F.png"));
            setLetra('F');
            setValor(4);
            break;
        case 'G': setPixmap(QPixmap(":/imagenes/G.png"));
            setLetra('G');
            setValor(2);
            break;
        case 'H': setPixmap(QPixmap(":/imagenes/H.jpg"));
            setLetra('H');
            setValor(4);
            break;
        case 'I': setPixmap(QPixmap(":/imagenes/I.png"));
            setLetra('I');
            setValor(1);
            break;
        case 'J': setPixmap(QPixmap(":/imagenes/J.png"));
            setLetra('J');
            setValor(8);
            break;
        case 'K': setPixmap(QPixmap(":/imagenes/K.png"));
            setLetra('K');
            setValor(5);
            break;
        case 'L': setPixmap(QPixmap(":/imagenes/L.png"));
            setLetra('L');
            setValor(1);
            break;
        case 'M': setPixmap(QPixmap(":/imagenes/M.png"));
            setLetra('M');
            setValor(3);
            break;
        case 'N': setPixmap(QPixmap(":/imagenes/N.png"));
            setLetra('N');
            setValor(1);
            break;
        case 'O': setPixmap(QPixmap(":/imagenes/O.png"));
            setLetra('O');
            setValor(1);
            break;
        case 'P': setPixmap(QPixmap(":/imagenes/P.png"));
            setLetra('P');
            setValor(3);
            break;
        case 'Q': setPixmap(QPixmap(":/imagenes/Q.png"));
            setLetra('Q');
            setValor(10);
            break;
        case 'R': setPixmap(QPixmap(":/imagenes/R.png"));
            setLetra('R');
            setValor(1);
            break;
        case 'S': setPixmap(QPixmap(":/imagenes/S.png"));
            setLetra('S');
            setValor(1);
            break;
        case 'T': setPixmap(QPixmap(":/imagenes/T.png"));
            setLetra('T');
            setValor(1);
            break;
        case 'U': setPixmap(QPixmap(":/imagenes/U.png"));
            setLetra('U');
            setValor(1);
            break;
        case 'V': setPixmap(QPixmap(":/imagenes/V.png"));
            setLetra('V');
            setValor(4);
            break;
        case 'W': setPixmap(QPixmap(":/imagenes/W.png"));
            setLetra('W');
            setValor(4);
            break;
        case 'X': setPixmap(QPixmap(":/imagenes/X.png"));
            setLetra('X');
            setValor(8);
            break;
        case 'Y': setPixmap(QPixmap(":/imagenes/Y.png"));
            setLetra('Y');
            setValor(4);
            break;
        case 'Z': setPixmap(QPixmap(":/imagenes/Z.png"));
            setLetra('Z');
            setValor(10);
            break;
        case 'c': setPixmap(QPixmap(":/imagenes/blanca.png"));
            setLetra('c');
            setValor(0);
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

    int ficha::getInicialX(){
        return this->inicialX;
    }
    void ficha::setInicialX(int inicial){
        this->inicialX = inicial;
    }
    int ficha::getInicialY(){
        return this->inicialY;
    }
    void ficha::setInicialY(int inicial){
        this->inicialY = inicial;
    }
    int ficha::getFinalX(){
        return this->finalX;
    }
    void ficha::setFinalX(int inicial){
        this->finalX = inicial;
    }
    int ficha::getFinalY(){
        return this->finalY;
    }
    void ficha::setFinalY(int inicial){
        this->finalY = inicial;
    }

    void ficha:: mouseMoveEvent(QGraphicsSceneMouseEvent *event){
        this->setX(event->scenePos().x());
        this->setY(event->scenePos().y());

    }

    void ficha::mousePressEvent(QGraphicsSceneMouseEvent *event){
        int x = event->scenePos().x();
        int y = event->scenePos().y();

    }

    void ficha::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){
        int mouseX = event->scenePos().x();
        int mouseY = event->scenePos().y();
        if (this->getFinalX() > 0 && this->getFinalX() < 760 && this->getFinalY() > 0 && this->getFinalY() < 810){
            if(tablero::getInstance().quitar(this->getFinalX(),this->getFinalY())){
                tablero::getInstance().acomodar(mouseX,mouseY,this);
                tablero::getInstance().imprimirLetra();
            }else{
                this->setX(this->getFinalX());
                this->setY(this->getFinalY());
            }
        }else{
            tablero::getInstance().acomodar(mouseX,mouseY,this);
            tablero::getInstance().imprimirLetra();
        }

    }
    void ficha::dibujar(ficha* letra){
        letra->setFlag(QGraphicsItem::ItemIsFocusable);
        letra->setFocus();
        MainWindow::escena->addItem(letra);
    }

