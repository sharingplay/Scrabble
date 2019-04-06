//
// Created by edgargonza on 05/04/19.
//

#include "LibreriaCodes.h"
#include <iostream>
#include "string"

LibreriaCodes::LibreriaCodes() {}

string LibreriaCodes::Agregar(string code, string nombre) {

    //Utiliza el array de Codes para buscar el codigo
    int i;
    for (i=0; i<6; i++){
        //Agrega la partida con su codigo porque no hay
        if (lib[i][0]==""){lib[i][0]==code;}

        //Ya existe la partida con su codigo
        else if (lib[i][0]==code){

            //Agrega el jugador a la partida
            for (int j=0; j<6; j++){

                if (lib[i][j]==""){lib[i][j]=nombre;}

                //para saber si se puede jugar la partida
                //cantidad minima que se ocupa para jugar
                if (lib[i][3]!=""){return "Ya puede iniciar la partida";}

                else{return "Ya no hay campos disponibles en esta partida";}
            }
        }

        else{return "Ya no hay salas disponibles, ingrese mas tarde";}
    }

}
