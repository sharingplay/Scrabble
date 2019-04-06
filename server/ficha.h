//
// Created by mariana on 05/04/19.
//

#ifndef SERVER_FICHA_H
#define SERVER_FICHA_H


class ficha {
private:
    char letra= 'p';
    int valor;
    int inicialX, inicialY;
public:
    ficha (char _letra);
    void setLetra(char _letra);
    void setValor(int valor);
    char getLetra();
    int getValor();
    void dibujar(ficha* _letra);
    int getInicialX();
    void setInicialX(int _inicial);
    int getInicialY();
    void setInicialY(int _inicial);

};


#endif //SERVER_FICHA_H
