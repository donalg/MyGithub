#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>


namespace Ui {
class Notepad;
}

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = 0);
    ~Notepad();

private slots:
    void on_actionOpen_2_triggered();

    void on_actionSave_triggered();

    void on_actionPaste_triggered();

    void on_actionSave_As_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionNew_triggered();

private:
    Ui::Notepad *ui;
    QString mFilename;
};

#endif // NOTEPAD_H
