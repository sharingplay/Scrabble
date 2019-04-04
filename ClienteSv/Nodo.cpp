//
// Created by edgargonza on 03/04/19.
//

#include "Nodo.h"

Nodo::Nodo(int n) {
    number=n;
    std::cout<<n<<'\n';
}

int Nodo::n() {
    return number;
}