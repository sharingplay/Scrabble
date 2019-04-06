#include "adjacent.h"
#include "lista.h"

adjacent::adjacent(){}


void adjacent::Seters (lista* malla){
    for (int i = 10; i < 810; i+=54) {
        int y=i;
        for (int j = 7; j < 750; j+=50) {
            int x=j;
            nodo* nodeset = malla->getNode(x,y);
            if (nodeset->getX()/50==0 && nodeset->gety()/54==0) {
                nodeset->setLeft(nullptr);
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+54));
                nodeset->setRight(malla->getNode(x+50,y));
                }
            else if (nodeset->getX()/50!=0 && nodeset->getX()/50!= 14 && nodeset->gety()/54==0){
                nodeset->setLeft(malla->getNode(x-50,y));
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+54));
                nodeset->setRight(malla->getNode(x+50,y));
                }
            else if (nodeset->getX()/50==14 && nodeset->gety()/54==0){
                nodeset->setLeft(malla->getNode(x-50,y));
                nodeset->setUp(nullptr);
                nodeset->setDown(malla->getNode(x,y+54));
                nodeset->setRight(nullptr);
            }
            else if (nodeset->getX()/50==0 && nodeset->gety()/54!=0 && nodeset->gety()/54!=14){
                nodeset->setLeft(nullptr);
                nodeset->setUp(malla->getNode(x,y-54));
                nodeset->setDown(malla->getNode(x,y+54));
                nodeset->setRight(malla->getNode(x+50,y));
            }
            else if (nodeset->getX()/50!=0 && nodeset->getX()/50!=14 && nodeset->gety()/54!=0 && nodeset->gety()/54!=14){
                nodeset->setLeft(malla->getNode(x-50,y));
                nodeset->setUp(malla->getNode(x,y-54));
                nodeset->setDown(malla->getNode(x,y+54));
                nodeset->setRight(malla->getNode(x+50,y));
            }
            else if (nodeset->getX()/50==14 && nodeset->gety()/54!=14 && nodeset->gety()/54!=0){
                nodeset->setLeft(malla->getNode(x-50,y));
                nodeset->setUp(malla->getNode(x,y-54));
                nodeset->setDown(malla->getNode(x,y+54));
                nodeset->setRight(nullptr);
            }
            else if (nodeset->getX()/50==0 && nodeset->gety()/54==14){
                nodeset->setLeft(nullptr);
                nodeset->setUp(malla->getNode(x,y-54));
                nodeset->setDown(nullptr);
                nodeset->setRight(malla->getNode(x+50,y));
            }
            else if (nodeset->getX()/50!=0 && nodeset->getX()/50!=14 && nodeset->gety()/54==14){
                std::cout << "2" << std::endl;
                nodeset->setLeft(malla->getNode(x-50,y));
                nodeset->setUp(malla->getNode(x,y-54));
                nodeset->setDown(nullptr);
                nodeset->setRight(malla->getNode(x+50,y));
            }
            else if (nodeset->getX()/50==14 && nodeset->gety()/54==14){
                std::cout << "ultimo " << std::endl;
                nodeset->setLeft(malla->getNode(x-50,y));
                nodeset->setUp(malla->getNode(x,y-54));
                nodeset->setDown(nullptr);
                nodeset->setRight(nullptr);}
        }
    }
}
