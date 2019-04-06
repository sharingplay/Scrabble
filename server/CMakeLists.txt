cmake_minimum_required(VERSION 3.13)
project(server)

set(CMAKE_CXX_STANDARD 14)

add_executable(server main.cpp comunicacion.cpp comunicacion.h adjacent.cpp adjacent.h bolsa.cpp bolsa.h ficha.cpp ficha.h jugador.cpp jugador.h lista.cpp lista.h nodo.cpp nodo.h palabra.cpp palabra.h tablero.cpp tablero.h)