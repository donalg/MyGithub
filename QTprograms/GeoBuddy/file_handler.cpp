#include "file_handler.h"
#include "ui_file_handler.h"

File_Handler::File_Handler(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::File_Handler)
{
    ui->setupUi(this);

    // Set up Buttons along with Formatting:
        // BUTTON SECTION
    OpenButton = new QPushButton("Open File", this);
    SaveButton = new QPushButton("Save File", this);
    CancelButton = new QPushButton("Cancel", this);
    ConvertButton = new QPushButton("Convert & Save", this);
    FileHandlingSection = new QHBoxLayout();
        // FORMATTING
    FileHandlingSection->addWidget(OpenButton);
    FileHandlingSection->addWidget(SaveButton);
    FileHandlingSection->addWidget(CancelButton);
    FileHandlingSection->addWidget(ConvertButton);


    // Formatting Section:
    CurrentFileType = new QLayout();
    CurrentFileType->setText("Current file parameters:");
        CurrentFormatBox = new QComboBox(this);
                            CurrentFormatBox->addItem("Please Select Data Spacing");
                            CurrentFormatBox->addItem("Comma");
                            CurrentFormatBox->addItem("Space");
                            CurrentFormatBox->addItem("Tab");



// Format Variebles:
}

File_Handler::~File_Handler()
{
    delete ui;
}
