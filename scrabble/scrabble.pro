#-------------------------------------------------
#
# Project created by QtCreator 2019-03-19T22:58:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = scrabble
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    ficha.cpp \
    nodo.cpp \
    lista.cpp \
    tablero.cpp \
    jugador.cpp \
    bolsa.cpp \
    palabra.cpp \
    adjacent.cpp \
    mainwindow.cpp \
    boton.cpp \
    cliente.cpp \
    ventanavalidar.cpp \
    lector.cpp

HEADERS += \
    ficha.h \
    lista.h \
    tablero.h \
    jugador.h \
    nodo.h \
    bolsa.h \
    palabra.h \
    adjacent.h \
    mainwindow.h \
    ../../../Downloads/Scrabble-server/ServidorCliente/nlohmann/json.hpp \
    boton.h \
    cliente.h \
    ventanavalidar.h \
    lector.h

FORMS += \
        mainwindow.ui \
    mainwindow.ui \
    ventanavalidar.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imagenes/imagenes.qrc
