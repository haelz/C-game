TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        game.cpp \
        main.cpp \
        personages.cpp \
        playerperson.cpp

HEADERS += \
    bear.h \
    enemy.h \
    fight.h \
    game.h \
    ninja.h \
    personages.h \
    playerperson.h
