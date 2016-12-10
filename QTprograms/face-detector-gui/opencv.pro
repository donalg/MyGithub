#-------------------------------------------------
#
# Project created by QtCreator 2015-03-25T18:15:50
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
TARGET = opencv
TEMPLATE = app
DESTDIR = $$PWD


INCLUDEPATH += //usr/local/include

LIBS += -L"//usr/local/lib" \
    -lopencv_imgproc \
    -lopencv_calib3d \
    -lopencv_core \
    -lopencv_features2d \
    -lopencv_flann \
    -lopencv_nonfree \
    -lopencv_objdetect \
    -lopencv_highgui



SOURCES += main.cpp \
    gui/mainwindow.cpp \
    camera.cpp \
    gui/displaywidget.cpp \
    faceDetector.cpp \
    gui/imageviewer.cpp

HEADERS += gui/mainwindow.h \
    camera.h \
    gui/displaywidget.h \
    faceDetector.h \
    gui/imageviewer.h
