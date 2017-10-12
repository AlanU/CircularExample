TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    derived.cpp \
    derived2.cpp \
    base.cpp

HEADERS += \
    derived.h \
    derived2.h \
    base.h
