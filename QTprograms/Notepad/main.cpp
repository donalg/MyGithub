#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Notepad w;
    w.show();

    // This program is derived from the C++ Qt 91 - Simple Application - NotePad
    // web link: https://www.youtube.com/watch?v=x858_WCtl_Y

    // Note work out how to show images in the Dialogue box !





    return a.exec();
}
