#ifndef COUNTDOWN_TIMER_H
#define COUNTDOWN_TIMER_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QTimer>
#include <QString>
#include <QTextStream>
#include <QtMultimedia/QMediaPlayer>
#include <QUrl>
#include <QFont>

namespace Ui {
class CountDown_Timer;
}

class CountDown_Timer : public QMainWindow
{
    Q_OBJECT

public:
    explicit CountDown_Timer(QWidget *parent = 0);
    ~CountDown_Timer();

private:
    Ui::CountDown_Timer *ui;

private slots:
    void Start_Timer();
    void Stop_Timer();
    void Deincrement();

//signals:
    //void Start_Player();
    //void Stop_Player();

private:

    QTimer *timer;

    QMediaPlayer* AlarmPlayer;

    QLabel *Instructions1;
    QLabel *Instructions2;
    QLabel *Hours_Reamining;
    QLabel *Minutes_Remaining;
    QLabel *Seconds_Remaining;
    QTextEdit *Hours;
    QTextEdit *Minutes;
    QTextEdit *Seconds;

    QString hours;
    QString minutes;
    QString seconds;

    QPushButton *Start_Button;
    QPushButton *Stop_Button;

    qint64 Num_Hours;
    qint64 Num_Minutes;
    qint64 Num_seconds;
    qint64 Num_sec_elapsed;


    bool stop_pressed = 0;


};

#endif // COUNTDOWN_TIMER_H
