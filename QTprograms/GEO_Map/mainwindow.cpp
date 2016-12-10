#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    Qtable = new QTableView(this);
    Load = new QPushButton("Load File");
    vbox = new QVBoxLayout();
    vbox->addWidget(Load);
    vbox->addWidget(Qtable);
    setLayout(vbox);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setQtable() {

    // Open a QFile Dialoge and locate the CSV file.
        // Returning the string to download the file from


    // Store this imformation into the QFile structure, allowing each row to be
    // accessed and re ordered.

    QString FileName = QFileDialog::getOpenFileName(this,
                       "Select CSV file",QDir::rootPath(),"CSV file (*.csv)");
    if (FileName.isEmpty()) {
        return;
    }


    QFile file(FileName);

    if (!file.isOpen() ) { // QIODevice::ReadOnly | QIODevice::Text
            return;
    }

    QTextStream xin(&file);
    int ix = 0;
    while (!xin.atEnd()) {
        auto line = xin.readLine();
        auto values = line.split(",",QString::SkipEmptyParts);
        const int colcount = values.size();

        for (int jx = 0; jx < colcount; jx++) {
            setValueAt(ix, jx, &values.at(jx));
        }
        ++ix;
    }
    file.close();



}

void MainWindow::setValueAt(int ix, int jx, QString values) {
    mmodel.setItem(ix,jx, new QStandardItem(values));
}
