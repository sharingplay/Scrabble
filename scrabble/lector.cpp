#include "lector.h"

lector::lector()
{

}
bool lector::leer(string *s){

    QFile archivo("/home/mario/Desktop/Scrabble/diccionario.txt");
    if(!archivo.exists()){
        qDebug()<<"El archivo no existe";
        return false;
    }
    else {
        archivo.open(QFile::ReadOnly);
        QString linea;
        QTextStream stream (&archivo);
        while (!stream.atEnd()) {
            linea = stream.readLine();
            string palabra= linea.toUtf8().constData();
            if(*s == palabra){
                cout<<"Encontro la palabra"<<endl;
                return true;
            }
        } 
        archivo.flush();
        archivo.close();
        cout<<"No se encontro la palabra"<<endl;
        ventanaValidar *ventValid= new ventanaValidar();
        ventValid->show();
        return false;
    }
}
