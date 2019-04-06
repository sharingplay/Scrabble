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
    ficha (char letra);
    void setLetra(char letra);
    void setValor(int valor);
    char getLetra();
    int getValor();
    void dibujar(ficha* letra);
    int getInicialX();
    void setInicialX(int inicial);
    int getInicialY();
    void setInicialY(int inicial);

};


#endif //SERVER_FICHA_H
