/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionOpen_2;
    QAction *actionNew;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QStringLiteral("Notepad"));
        Notepad->resize(400, 300);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(Notepad);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCut = new QAction(Notepad);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionOpen_2 = new QAction(Notepad);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        actionNew = new QAction(Notepad);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        centralWidget = new QWidget(Notepad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 371, 221));
        Notepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Notepad);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        Notepad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Notepad);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Notepad);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Notepad->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_As);
        mainToolBar->addAction(actionOpen_2);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QApplication::translate("Notepad", "Notepad", 0));
        actionSave->setText(QApplication::translate("Notepad", "Save", 0));
        actionSave_As->setText(QApplication::translate("Notepad", "Save As", 0));
        actionCopy->setText(QApplication::translate("Notepad", "Copy", 0));
        actionCut->setText(QApplication::translate("Notepad", "Cut", 0));
        actionPaste->setText(QApplication::translate("Notepad", "Paste", 0));
        actionUndo->setText(QApplication::translate("Notepad", "Undo ", 0));
        actionRedo->setText(QApplication::translate("Notepad", "Redo ", 0));
        actionOpen_2->setText(QApplication::translate("Notepad", "Open", 0));
        actionNew->setText(QApplication::translate("Notepad", "New", 0));
        menuFile->setTitle(QApplication::translate("Notepad", "File", 0));
        menuEdit->setTitle(QApplication::translate("Notepad", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
