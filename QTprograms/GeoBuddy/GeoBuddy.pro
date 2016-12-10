#-------------------------------------------------
#
# Project created by QtCreator 2016-08-02T18:45:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GeoBuddy
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plot_and_display_handler.cpp \
    processing.cpp \
    file_handler.cpp

HEADERS  += mainwindow.h \
    plot_and_display_handler.h \
    processing.h \
    file_handler.h

FORMS    += mainwindow.ui \
    file_handler.ui
