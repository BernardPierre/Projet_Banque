TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        compteClient.cpp \
        compteEpargne.cpp \
        comptebancaire.cpp \
        main.cpp \
        menu.cpp

HEADERS += \
    compteClient.h \
    compteEpargne.h \
    comptebancaire.h \
    menu.h
