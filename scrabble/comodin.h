#ifndef COMODIN_H
#define COMODIN_H


class comodin
{
public:
    static comodin& getInstance(){
               static comodin instance;
               return instance;
    }

    comodin();
    char letra = ' ';
    int valor = 0;
};

#endif // COMODIN_H
