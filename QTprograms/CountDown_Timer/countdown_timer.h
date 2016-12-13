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
#include <time.h>

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

private:

    QTimer *timer;

    QMediaPlayer* AlarmPlayer;

    time_t rawtime;

    double starttime_val;
    double currenttime_val;
    double stoptime_val;
    double timedifference_val;


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

    double Num_Hours;
    double Num_Minutes;
    double Num_Seconds;
    qint64 N_H_temp;
    qint64 N_M_temp;
    qint64 N_S_temp;


};

#endif // COUNTDOWN_TIMER_H
