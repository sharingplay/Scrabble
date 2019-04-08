#ifndef FICHA_H
#define FICHA_H
#include<QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include <QEvent>


class ficha: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    char letra;
    int valor;
    int inicialX, inicialY;
    int finalX, finalY;
public:
    ficha(QGraphicsItem * parent = nullptr);
    //!
    //! \brief ficha, constructor de la ficha
    //! \param letra, letra con la que se quiere crear la ficha
    //!
    ficha (char letra);
    void setLetra(char letra);
    void setValor(int valor);
    char getLetra();
    int getValor();
    //!
    //! \brief dibujar, dibuja la letra en la escena
    //! \param letra, letra para indicar que imagen dibujar
    //!
    void dibujar(ficha* letra);
    int getInicialX();
    void setInicialX(int inicial);
    int getInicialY();
    void setInicialY(int inicial);
    int getFinalX();
    void setFinalX(int inicial);
    int getFinalY();
    void setFinalY(int inicial);
protected:
    //!
    //! \brief mouseMoveEvent, mueve la ficha y le asgina un (x,y) de acuerdo al mouse
    //!
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    //!
    //! \brief mouseReleaseEvent, acomoda la ficha dentro de la matriz del tablero y devuelve el nodo en el qu
    //!
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // FICHA_H
