#include "adjacent.h"
#include "lista.h"

adjacent::adjacent(){}


void adjacent::Seters (lista* malla){
    for (int i = 10; i < 835; i+=60) {
        int y=i;
        for (int j = 0; j < 765; j+=51) {
            int x=j;
            nodo* nodeset = malla->getNode(x,y);
            if (nodeset->getX()/51==0 && nodeset->gety()/60==1) {
                nodeset->setLeft(nullptr);
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+60));
                nodeset->setRight(malla->getNode(x+51,y));
                }
            else if (nodeset->getX()/51!=0 && nodeset->getX()/51!= 14 && nodeset->gety()/60==1){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+60));
                nodeset->setRight(malla->getNode(x+51,y));
                }
            else if (nodeset->getX()/51==14 && nodeset->gety()/60==1){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+60));
                nodeset->setRight(nullptr);
            }
            else if (nodeset->getX()/51==0 && nodeset->gety()/60!=0 && nodeset->gety()/60!=15){
                nodeset->setLeft(nullptr);
                nodeset->setUp(malla->getNode(x,y-51));
                nodeset->setDown(malla->getNode(x,y+60));
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51!=0 && nodeset->getX()/51!=14 && nodeset->gety()/60!=1 && nodeset->gety()/60!=15){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-60));
                nodeset->setDown(malla->getNode(x,y+60));
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51==14 && nodeset->gety()/60!=15 && nodeset->gety()/60!=1){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-60));
                nodeset->setDown(malla->getNode(x,y+60));
                nodeset->setRight(nullptr);
            }
            else if (nodeset->getX()/51==0 && nodeset->gety()/60==15){
                nodeset->setLeft(nullptr);
                nodeset->setUp(malla->getNode(x,y-60));
                nodeset->setDown(nullptr);
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51!=0 && nodeset->getX()/51!=14 && nodeset->gety()/60==15){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-60));
                nodeset->setDown(nullptr);
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else{
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-60));
                nodeset->setDown(nullptr);
                nodeset->setRight(nullptr);}
        }
    }
}

