#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H


// Qt Libraries:
#include <QWidget>
#include <QPushButton>
#include <QFileDialog>
#include <QTextEdit>
#include <QComboBox>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QCheckBox>


// C++ standard Libraries:
#include <fstream>
#include <stdio.h>
#include <string>



/*
The purpose of this file is to allow for the easy loading saving and formatting of files of either *.txt or *.csv
(maybe even *.stl , lets see how far we go though!)


*/




namespace Ui {
class File_Handler;
}

class File_Handler : public QWidget
{
    Q_OBJECT

public:
    explicit File_Handler(QWidget *parent = 0);
    ~File_Handler();

private:
    Ui::File_Handler *ui;

    // Set up the Form:

        // Standard Buttons:
    QPushButton *OpenButton;
    QPushButton *SaveButton;
    QPushButton *CancelButton;
    QPushButton *ConvertButton;


        // Converting files and Formatting:

    QLabel    *CurrentFileType;
   // QComboBox *CurrentTypeBox;
    QComboBox *CurrentFormatBox;

    QLabel  *FeildSelectionCurrent;
    QLabel  *LongCurrent;
    QComboBox *FeildSelect1;
    QLabel  *Latcurrent;
    QComboBox *FeildSelect2;


    QLabel    *DesiredFileType;
  //  QComboBox *DesiredTypeBox;
    QComboBox *DesiredFormatBox;

    QLabel  *FeildSelectionDesired;
    QLabel  *LongDesired;
    QLabel  *LatDesired;




        // Form Formatting:
     QVBoxLayout *Layout;

        QHBoxLayout *FileHandlingSection;

        QHBoxLayout *FormattingSection;

            QVBoxLayout *CurrentFileTypeVLayout;
                QHBoxLayout *CurrentFileTypeHLayout;

            QVBoxLayout *DesiredFileTypeVLayout;
                QHBoxLayout *DesiredFileTypeHLayout;










};

#endif // FILE_HANDLER_H
