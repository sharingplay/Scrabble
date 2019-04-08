#ifndef COMODIN_H
#define COMODIN_H


class comodin
{
public:
    static comodin& getInstance(){
               static comodin instance;
               return instance;
    }
    //!
    //! \brief comodin, constructor del comodin
    //!
    comodin();
    //!
    //! \brief letra, letra que se le asigna al comodin
    //!
    char letra = ' ';
    //!
    //! \brief valor, valor que se le asigna al comodin
    //!
    int valor = 0;
};

#endif // COMODIN_H
