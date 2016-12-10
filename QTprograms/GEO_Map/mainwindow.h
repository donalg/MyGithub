#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QFileDialog>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QStandardItemModel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QStandardItemModel mmodel;
    QTableView *Qtable;
    QPushButton *Load;
    QVBoxLayout *vbox;

    void setQtable();



private:
    void setValueAt(int ix, int jx, QString values);
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
