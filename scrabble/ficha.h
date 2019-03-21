#ifndef FICHA_H
#define FICHA_H


class ficha
{
private:
    char letra;
    int valor,x,y;
public:
    ficha();
    void setX(int x);
    void setY(int y);
    void setLetra(char letra);
    void setValor(int valor);
    int getX();
    int getY();
    char getLetra();
    int getValor();
};

#endif // FICHA_H
