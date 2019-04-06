//
// Created by mariana on 05/04/19.
//

#include "adjacent.h"

adjacent::adjacent(){}


void adjacent::Seters (lista* malla){
    for (int i = 10; i < 760; i+=50) {
        int y=i;
        for (int j = 0; j < 765; j+=51) {
            int x=j;
            nodo* nodeset = malla->getNode(x,y);
            if (nodeset->getX()/51==0 && nodeset->gety()/50==0) {
                nodeset->setLeft(nullptr);
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+50));
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51!=0 && nodeset->getX()/51!= 14 && nodeset->gety()/50==0){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+50));
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51==14 && nodeset->gety()/50==0){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+50));
                nodeset->setRight(nullptr);
            }
            else if (nodeset->getX()/51==0 && nodeset->gety()/50!=0 && nodeset->gety()/50!=14){
                nodeset->setLeft(nullptr);
                nodeset->setUp(malla->getNode(x,y-51));
                nodeset->setDown(malla->getNode(x,y+50));
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51!=0 && nodeset->getX()/51!=14 && nodeset->gety()/50!=0 && nodeset->gety()/50!=14){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-50));
                nodeset->setDown(malla->getNode(x,y+50));
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51==14 && nodeset->gety()/50!=14 && nodeset->gety()/50!=0){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-50));
                nodeset->setDown(malla->getNode(x,y+50));
                nodeset->setRight(nullptr);
            }
            else if (nodeset->getX()/51==0 && nodeset->gety()/50==14){
                nodeset->setLeft(nullptr);
                nodeset->setUp(malla->getNode(x,y-50));
                nodeset->setDown(nullptr);
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else if (nodeset->getX()/51!=0 && nodeset->getX()/51!=14 && nodeset->gety()/50==14){
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-50));
                nodeset->setDown(nullptr);
                nodeset->setRight(malla->getNode(x+51,y));
            }
            else{
                nodeset->setLeft(malla->getNode(x-51,y));
                nodeset->setUp(malla->getNode(x,y-50));
                nodeset->setDown(nullptr);
                nodeset->setRight(nullptr);}
        }
    }
}