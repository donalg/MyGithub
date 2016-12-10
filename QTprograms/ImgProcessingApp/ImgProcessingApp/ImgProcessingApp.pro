#-------------------------------------------------
#
# Project created by QtCreator 2016-07-24T19:32:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ImgProcessingApp
TEMPLATE = app

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


SOURCES += main.cpp\
        mainwindow.cpp \
    displaywidget.cpp \
    imageviewer.cpp \
    webcam.cpp \
    imgprocessor.cpp

HEADERS  += mainwindow.h \
    displaywidget.h \
    imageviewer.h \
    webcam.h \
    imgprocessor.h

FORMS    += mainwindow.ui
