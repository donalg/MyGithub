#ifndef WEBCAM_H
#define WEBCAM_H

#include <QObject>
#include <opencv2/opencv.hpp>
#include <QImage>
#include <iostream>
#include <stdio.h>
#include <QtDebug>
#include <QScopedPointer>

class Webcam : public QObject
{
    Q_OBJECT


public:
    explicit Webcam(QObject *parent = 0);


signals:
     void started(); // This will be sent to anything that is relevant
     void mat_ready(cv::Mat); // This will be sent to the processing widget
     void Image_ready(QImage); // This will be sent to the display widget



public slots:
     void run();
     void init();
     void stop();
     void convert_Mat2QImage( cv::Mat mat);

private:
    // cv::VideoCapture capture;
     int camera_index;
     cv::VideoCapture capture;


};

#endif // WEBCAM_H
