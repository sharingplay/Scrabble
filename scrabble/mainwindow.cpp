#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>

int main(int argc, char *argv[])
{
    QApplication a (argc, argv);

    //Crear la escena
    QGraphicsScene * escena = new QGraphicsScene();

    //Crear la cuadricula
    for (int i = 0;i<751;i+=50){
        for(int j = 0; j<751;j+=50){
            QGraphicsRectItem * rectangulo = new QGraphicsRectItem();
            rectangulo -> setRect(i,j,i,j+50);
        }


}

    return a.exec();
}
