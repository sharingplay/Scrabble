#include <iostream>
#include "Cliente.h"
#include "Cliente.cpp"

int main() {
    Cliente c1(8080);
    Cliente c2(8080);
    Cliente c3(8080);
    c1.sendJson("Fola");
    c2.sendJson("Foca");

    return 0;
}