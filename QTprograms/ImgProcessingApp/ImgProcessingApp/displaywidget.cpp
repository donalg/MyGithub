#include "displaywidget.h"

DisplayWidget::DisplayWidget(QWidget *parent) : QWidget(parent)
{
// Define Variables:
    QPushButton *Start = new QPushButton("START",this);
    QPushButton *Stop = new QPushButton("STOP",this);

    QHBoxLayout *horizLayout = new QHBoxLayout();
    QVBoxLayout *Layout = new QVBoxLayout;



    Webcam *webcam_ = new Webcam(this);
    ImgProcessor *imgproc_  = new ImgProcessor(this);
    ImageViewer *imgview_ = new ImageViewer(this);


// Create Layout:

    horizLayout->addWidget(Start);
    horizLayout->addWidget(Stop);
    Layout->addWidget(imgview_);
    Layout->addLayout(horizLayout);

    setLayout(Layout);


// Start threads:
   // QThread *webcam_thread = new QThread(this);
   // webcam_->moveToThread(webcam_thread);




// Define Connections:

    QObject::connect(webcam_,SIGNAL(mat_ready(cv::Mat)),imgproc_,
            SLOT(Webcam_mat_ToBeProcessed(cv::Mat)));

    QObject::connect(imgproc_,SIGNAL(mat_processed(cv::Mat)),
                     webcam_,SLOT(convert_Mat2QImage(cv::Mat)));

    QObject::connect(webcam_, SIGNAL(Image_ready(QImage)),
                             imgview_,SLOT(set_image(QImage)));

    QObject::connect(Start,SIGNAL(released()),webcam_,SLOT(init()));
    QObject::connect(Start,SIGNAL(released()),this,SLOT(start_pressed()));
    QObject::connect(Stop,SIGNAL(released()),this,SLOT(stop_pressed()));
    QObject::connect(Stop,SIGNAL(released()),webcam_,SLOT(stop()));

    QObject::connect(imgview_, SIGNAL(Image_updated()),this,
                     SLOT(is_another_image_needed()));
    QObject::connect(this, SIGNAL(another_image_please()),webcam_,SLOT(run()));



}

void DisplayWidget::start_pressed() {
    state_ = true;
}

void DisplayWidget::stop_pressed() {
    state_ = false;
}

void DisplayWidget::is_another_image_needed() {
    if (state_) {
        emit another_image_please();
    }
}
