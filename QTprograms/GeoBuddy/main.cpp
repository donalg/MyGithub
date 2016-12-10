#include "mainwindow.h"
#include <QApplication>

/*
For the purpose of self preservation (along with general portability of code) most of the code in
this project will aim to use standard c++ libraries, along with common and easily accessable c++ Libraries
(i.e. OpenCV OpenGL) where nessesscery with the QT based funtionaly focused towards the front end
of the program design.
*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
