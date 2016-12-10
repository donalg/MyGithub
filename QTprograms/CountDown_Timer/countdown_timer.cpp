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

    AlarmPlayer = new QMediaPlayer(this);
    AlarmPlayer->setMedia(QUrl::fromLocalFile("/Users/donalglavin/Documents/Programming/Qt GUI programs/PROGRAMS/CountDown_Timer/resources/EpicSaxGuy.mp3"));
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
    TextStreamH >> Num_Hours; TextStreamH.reset();
    QTextStream TextStreamM(&minutes);
    TextStreamM >> Num_Minutes; TextStreamM.reset();
    QTextStream TextStreamS(&seconds);
    TextStreamS >> Num_seconds; TextStreamS.reset();

    Hours_Reamining->setText(hours);
    Minutes_Remaining->setText(minutes);
    Seconds_Remaining->setText(seconds);

    timer->setInterval(1000);
    timer->start();

}

void CountDown_Timer::Stop_Timer()
{
    timer->stop();
    AlarmPlayer->stop();
}

void CountDown_Timer::Deincrement()
{

        Num_seconds--;
        if (Num_seconds < 0 && Num_Minutes > 0)
        {
            Num_Minutes--;
            Num_seconds = 60;
        }
        if ( Num_Hours > 0 && Num_seconds < 0)
        {
           Num_Hours --;
           Num_Minutes = 60;
           Num_seconds = 60;
        }

        if ((Num_Hours == 0) && (Num_Minutes == 0) && (Num_seconds == 0))
        {
            timer->stop();
            AlarmPlayer->play();
        }

        if ((Num_Hours < 0) || (Num_Minutes < 0) || (Num_seconds < 0))
        {
            Num_seconds = 0;
            Num_Minutes = 0;
            Num_Hours = 0;
            timer->stop();
        }


        hours = QString::number(Num_Hours);
        minutes = QString::number(Num_Minutes);
        seconds = QString::number(Num_seconds);

        Hours_Reamining->setText(hours);
        Minutes_Remaining->setText(minutes);
        Seconds_Remaining->setText(seconds);
}
