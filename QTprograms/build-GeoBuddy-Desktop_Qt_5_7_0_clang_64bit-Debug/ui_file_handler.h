/********************************************************************************
** Form generated from reading UI file 'file_handler.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_HANDLER_H
#define UI_FILE_HANDLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_File_Handler
{
public:

    void setupUi(QWidget *File_Handler)
    {
        if (File_Handler->objectName().isEmpty())
            File_Handler->setObjectName(QStringLiteral("File_Handler"));
        File_Handler->resize(400, 300);

        retranslateUi(File_Handler);

        QMetaObject::connectSlotsByName(File_Handler);
    } // setupUi

    void retranslateUi(QWidget *File_Handler)
    {
        File_Handler->setWindowTitle(QApplication::translate("File_Handler", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class File_Handler: public Ui_File_Handler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_HANDLER_H
