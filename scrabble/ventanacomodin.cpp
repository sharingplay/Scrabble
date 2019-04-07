#include "ventanacomodin.h"
#include "ui_ventanacomodin.h"
#include <iostream>
using namespace std;
ventanaComodin::ventanaComodin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaComodin)
{
    ui->setupUi(this);
}

ventanaComodin::~ventanaComodin()
{
    delete ui;
}

void ventanaComodin::on_botonSeleccionar_clicked()
{
    if (ui->botonA->isChecked()){
        comodin::getInstance().letra = 'A';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonB->isChecked()){
        comodin::getInstance().letra = 'B';
        comodin::getInstance().valor = 3;
    }
    else if (ui->botonC->isChecked()){
        comodin::getInstance().letra = 'C';
        comodin::getInstance().valor = 3;
    }
    else if (ui->botonD->isChecked()){
        comodin::getInstance().letra = 'D';
        comodin::getInstance().valor = 2;
    }
    else if (ui->botonE->isChecked()){
        comodin::getInstance().letra = 'E';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonF->isChecked()){
        comodin::getInstance().letra = 'F';
        comodin::getInstance().valor = 4;
    }
    else if (ui->botonG->isChecked()){
        comodin::getInstance().letra = 'G';
        comodin::getInstance().valor = 2;
    }
    else if (ui->botonH->isChecked()){
        comodin::getInstance().letra = 'H';
        comodin::getInstance().valor = 4;
    }
    else if (ui->botonI->isChecked()){
        comodin::getInstance().letra = 'I';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonJ->isChecked()){
        comodin::getInstance().letra = 'J';
        comodin::getInstance().valor = 8;
    }
    else if (ui->botonK->isChecked()){
        comodin::getInstance().letra = 'K';
        comodin::getInstance().valor = 5;
    }
    else if (ui->botonL->isChecked()){
        comodin::getInstance().letra = 'L';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonM->isChecked()){
        comodin::getInstance().letra = 'M';
        comodin::getInstance().valor = 3;
    }
    else if (ui->botonN->isChecked()){
        comodin::getInstance().letra = 'N';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonO->isChecked()){
        comodin::getInstance().letra = 'O';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonP->isChecked()){
        comodin::getInstance().letra = 'P';
        comodin::getInstance().valor = 3;
    }
    else if (ui->botonQ->isChecked()){
        comodin::getInstance().letra = 'Q';
        comodin::getInstance().valor = 10;
    }
    else if (ui->botonR->isChecked()){
        comodin::getInstance().letra = 'R';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonS->isChecked()){
        comodin::getInstance().letra = 'S';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonT->isChecked()){
        comodin::getInstance().letra = 'T';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonU->isChecked()){
        comodin::getInstance().letra = 'U';
        comodin::getInstance().valor = 1;
    }
    else if (ui->botonV->isChecked()){
        comodin::getInstance().letra = 'V';
        comodin::getInstance().valor = 4;
    }
    else if (ui->botonW->isChecked()){
        comodin::getInstance().letra = '2';
        comodin::getInstance().valor = 4;
    }
    else if (ui->botonX->isChecked()){
        comodin::getInstance().letra = 'X';
        comodin::getInstance().valor = 8;
    }
    else if (ui->botonY->isChecked()){
        comodin::getInstance().letra = 'Y';
        comodin::getInstance().valor = 4;
    }
    else if (ui->botonZ->isChecked()){
        comodin::getInstance().letra = 'Z';
        comodin::getInstance().valor = 10;
    }
    close();
    cout<<"letra "<<comodin::getInstance().letra<<" valor "<<comodin::getInstance().valor<<endl;
}
