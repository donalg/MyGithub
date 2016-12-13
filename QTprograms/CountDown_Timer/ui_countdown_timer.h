/********************************************************************************
** Form generated from reading UI file 'countdown_timer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTDOWN_TIMER_H
#define UI_COUNTDOWN_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CountDown_Timer
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CountDown_Timer)
    {
        if (CountDown_Timer->objectName().isEmpty())
            CountDown_Timer->setObjectName(QStringLiteral("CountDown_Timer"));
        CountDown_Timer->resize(400, 300);
        menuBar = new QMenuBar(CountDown_Timer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        CountDown_Timer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CountDown_Timer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CountDown_Timer->addToolBar(mainToolBar);
        centralWidget = new QWidget(CountDown_Timer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CountDown_Timer->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CountDown_Timer);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CountDown_Timer->setStatusBar(statusBar);

        retranslateUi(CountDown_Timer);

        QMetaObject::connectSlotsByName(CountDown_Timer);
    } // setupUi

    void retranslateUi(QMainWindow *CountDown_Timer)
    {
        CountDown_Timer->setWindowTitle(QApplication::translate("CountDown_Timer", "CountDown_Timer", 0));
    } // retranslateUi

};

namespace Ui {
    class CountDown_Timer: public Ui_CountDown_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTDOWN_TIMER_H
