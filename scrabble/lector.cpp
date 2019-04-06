#include "lector.h"

lector::lector()
{

}
bool lector::leer(string *s){

    QFile archivo("/home/mario/Desktop/Scrabble/diccionario.txt");
    if(!archivo.exists()){
        qDebug()<<"El archivo no existe el archivo";
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
                qDebug()<<"Encontro la palabra"<<endl;
                return true;
            }
        }
        qDebug()<<"No se encontro la palabra"<<endl;
        archivo.flush();
        archivo.close();
        return false;
    }
}
