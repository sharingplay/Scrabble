#include "adjacent.h"
#include "lista.h"

adjacent::adjacent(){}


void adjacent::Seters (lista* malla){
    for (int i = 0; i < 765; i+=51) {
        std::cout << "Linea en x: " << i << std::endl;
        int x=i;
        for (int j = 0; j < 765; j+=51) {
            std::cout << "Linea en y: " << j << std::endl;
            int y=j;
            nodo* nodeset = malla->getNode(x,y);
            if (nodeset->getX()/51==0 && nodeset->gety()/51==0) {
                std::cout << "0,0" << std::endl;
                nodeset->setLeft(nullptr);
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+51));
                nodeset->setRight(malla->getNode(x+51,y));
                }
            else if (nodeset->getX()/51!=0 && nodeset->getX()/51!= 14 && nodeset->gety()/51==0){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+51));
                nodeset->setRight(malla->getNode(x+51,y));
                }
            else if (nodeset->getX()/51==14 && nodeset->gety()/51==0){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+51));
                nodeset->setRight(nullptr);
            }
            else if (nodeset->getX()/51==0 && nodeset->gety()/51!=0 && nodeset->gety()/51!=14){
                nodeset->setLeft(nullptr);
                nodeset->setUp(malla->getNode(x,y-51));
                nodeset->setDown(malla->getNode(x,y+51));
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51!=0 && nodeset->getX()/51!=14 && nodeset->gety()/51!=0 && nodeset->gety()/51!=14){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-51));
                nodeset->setDown(malla->getNode(x,y+51));
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51==14 && nodeset->gety()/51!=14 && nodeset->gety()/51!=0){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-51));
                nodeset->setDown(malla->getNode(x,y+51));
                nodeset->setRight(nullptr);
            }
            else if (nodeset->getX()/51==0 && nodeset->gety()/51==14){
                nodeset->setLeft(nullptr);
                nodeset->setUp(malla->getNode(x,y-51));
                nodeset->setDown(nullptr);
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51!=0 && nodeset->getX()/51!=14 && nodeset->gety()/51==14){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-51));
                nodeset->setDown(nullptr);
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else{
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-51));
                nodeset->setDown(nullptr);
                nodeset->setRight(nullptr);}
        }
    }
}

