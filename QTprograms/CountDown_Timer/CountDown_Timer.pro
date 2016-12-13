#-------------------------------------------------
#
# Project created by QtCreator 2016-12-10T15:47:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CountDown_Timer
TEMPLATE = app


SOURCES += main.cpp\
        countdown_timer.cpp

HEADERS  += countdown_timer.h

FORMS    += countdown_timer.ui

LIBS += -framework QtMultimedia

