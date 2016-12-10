#include "notepad.h"
#include "ui_notepad.h"
#include <QtGui>
#include <QtCore>
#include <QFileDialog>
#include <QMessageBox>


Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::on_actionOpen_2_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Choose File to Open");
    if (!filename.isEmpty())
    {
        QFile sFile(filename);
        if(sFile.open(QFile::ReadOnly | QFile::Text))
        {
            mFilename = filename;
            QTextStream in(&sFile);
            QString text = in.readAll();
            sFile.close();

            ui->textEdit->setPlainText(text);
        }
    }

}

void Notepad::on_actionSave_triggered()
{

    // Check for File name:
    if(mFilename != "")
    {
        QFile sFile(mFilename);
        if(sFile.open(QFile::WriteOnly | QFile::Text))
        {
           // mFilename = filename;
            QTextStream out(&sFile);
            out << ui->textEdit->toPlainText();

            sFile.flush();
            sFile.close();
        }
    } else
    {
        QMessageBox msgbox;
        msgbox.setText("You have not deifned a filename");
        msgbox.exec();

        on_actionSave_As_triggered();
    }

}

void Notepad::on_actionSave_As_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this,"Choose file Name");
    if (!filename.isEmpty())
    {
        mFilename = filename;
        on_actionSave_triggered();
    }


}


void Notepad::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}



void Notepad::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void Notepad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void Notepad::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void Notepad::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void Notepad::on_actionNew_triggered()
{
    mFilename = "";
    ui->textEdit->setPlainText("");
}
