#include "countdown_timer.h"
#include "ui_countdown_timer.h"


static int w = 500;
static int h = 200;

CountDown_Timer::CountDown_Timer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CountDown_Timer)
{
    ui->setupUi(this);

    // Definitions:
    timer = new QTimer(this);
    QFont setfont( "Arial", 25, QFont::Bold);

    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open music file to be played on timer done."), "/Users", tr("Music Files (*.mp3 *.wav *.ogg)"));

    AlarmPlayer = new QMediaPlayer(this);
    AlarmPlayer->setMedia(QUrl::fromLocalFile(fileName));
    AlarmPlayer->setVolume(100);

    Instructions1 = new QLabel("Please Enter time in following format:", this);
    Instructions2 = new QLabel("[Hours : Minutes : Seconds]", this);
    Hours_Reamining = new QLabel("0", this);
    Minutes_Remaining = new QLabel("0",this);
    Seconds_Remaining = new QLabel("0",this);
    Hours = new QTextEdit("0", this);
    Minutes = new QTextEdit("0",this);
    Seconds = new QTextEdit("0", this);

    Hours_Reamining->setFont(setfont);
    Minutes_Remaining->setFont(setfont);
    Seconds_Remaining->setFont(setfont);

    Hours->setFont(setfont);
    Minutes->setFont(setfont);
    Seconds->setFont(setfont);


    Start_Button = new QPushButton("Start", this);
    Stop_Button = new QPushButton("Stop", this);

    // Connections:
    connect(Start_Button, SIGNAL(released()), this, SLOT(Start_Timer()));
    connect(Stop_Button, SIGNAL(released()), this, SLOT(Stop_Timer()));
    connect(timer, SIGNAL(timeout()), this, SLOT(Deincrement()));


    // Geometry Definitions:
    Instructions1->setGeometry(QRect(QPoint( 0 , 12 ), QSize( w , h/9 )));
    Instructions1->setAlignment(Qt::AlignCenter);
    Instructions2->setGeometry(QRect(QPoint( 0 , h/9 +12), QSize( w , h/9 )));
    Instructions2->setAlignment(Qt::AlignCenter);

    // Top row:
    Hours_Reamining->setGeometry(QRect(QPoint( 0 , h/4 ), QSize( w/3  , h/4 )));
    Hours_Reamining->setAlignment(Qt::AlignCenter);
    Minutes_Remaining->setGeometry(QRect(QPoint( w/3 , h/4 ), QSize( w/3 , h/4 )));
    Minutes_Remaining->setAlignment(Qt::AlignCenter);
    Seconds_Remaining->setGeometry(QRect(QPoint( 2*w/3 , h/4 ), QSize( w/3 , h/4 )));
    Seconds_Remaining->setAlignment(Qt::AlignCenter);

    // Middle Row:
    Hours->setGeometry(QRect(QPoint( 0 , 2*h/4 ), QSize( w/3 , h/4 )));
    Hours->setAlignment(Qt::AlignCenter);
    Minutes->setGeometry(QRect(QPoint( w/3 , 2*h/4 ), QSize( w/3 , h/4 )));
    Minutes->setAlignment(Qt::AlignCenter);
    Seconds->setGeometry(QRect(QPoint( (2*w/3) , 2*h/4 ), QSize( w/3 , h/4 )));
    Seconds->setAlignment(Qt::AlignCenter);

    // Bottom Row:
    Start_Button->setGeometry(QRect(QPoint( 0 , 3*h/4 ), QSize( w/2 , h/4 )));
    Stop_Button->setGeometry(QRect(QPoint( w/2 , 3*h/4 ), QSize( w/2 , h/4 )));


}

CountDown_Timer::~CountDown_Timer()
{
    delete ui;
}


void CountDown_Timer::Start_Timer()
{
    hours = Hours->toPlainText();
    minutes = Minutes->toPlainText();
    seconds = Seconds->toPlainText();
    QTextStream TextStreamH(&hours);
    TextStreamH >> N_H_temp; TextStreamH.reset();
    QTextStream TextStreamM(&minutes);
    TextStreamM >> N_M_temp; TextStreamM.reset();
    QTextStream TextStreamS(&seconds);
    TextStreamS >> N_S_temp; TextStreamS.reset();

    Hours_Reamining->setText(hours);
    Minutes_Remaining->setText(minutes);
    Seconds_Remaining->setText(seconds);

    timer->setInterval(500);
    timer->start();

    Num_Hours = N_H_temp;
    Num_Minutes = N_M_temp;
    Num_Seconds = N_S_temp;

    time(&rawtime);
    starttime_val = rawtime;
    stoptime_val = (60*60*Num_Hours) + (60*Num_Minutes) + (Num_Seconds);

}


void CountDown_Timer::Stop_Timer()
{
    timer->stop();
    AlarmPlayer->stop();
}

void CountDown_Timer::Deincrement()
{


        time(&rawtime);
        timedifference_val = stoptime_val - ((double)rawtime - (double)starttime_val);
        Num_Hours = trunc(timedifference_val / 3600);
        Num_Minutes = trunc((timedifference_val - (3600*Num_Hours))/60);
        Num_Seconds = timedifference_val - (3600*Num_Hours) - (60*Num_Minutes);
        N_H_temp = (qint64) Num_Hours;
        N_M_temp = (qint64) Num_Minutes;
        N_S_temp = (qint64) Num_Seconds;

        hours = QString::number(N_H_temp);
        minutes = QString::number(N_M_temp);
        seconds = QString::number(N_S_temp);

        Hours_Reamining->setText(hours);
        Minutes_Remaining->setText(minutes);
        Seconds_Remaining->setText(seconds);

        if ((Num_Hours == 0) && (Num_Minutes == 0) && (Num_Seconds == 0))
        {
            timer->stop();
            AlarmPlayer->play();
        }

        if ((Num_Hours < 0) || (Num_Minutes < 0) || (Num_Seconds < 0))
        {
            Num_Seconds = 0;
            Num_Minutes = 0;
            Num_Hours = 0;
            timer->stop();
        }

}
