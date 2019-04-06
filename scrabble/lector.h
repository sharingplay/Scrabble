#ifndef LECTOR_H
#define LECTOR_H
#include <iostream>
#include <QDebug>
#include <string>
#include <QFile>

using namespace std;

class lector{

public:
    static lector& getInstance(){
               static lector instance;
               return instance;
    }
    lector();
    bool leer(string* s);
};

#endif // LECTOR_H
