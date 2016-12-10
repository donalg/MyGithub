#include "countdown_timer.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QtGui>
#include <QtCore>

static int width = 500;
static int height = 200;
static int buff = 30;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CountDown_Timer w;

    // Define size of calculator application:
    w.showMaximized();
    w.setFixedSize(width,height+buff);
    w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
    w.show();

    return a.exec();
}
