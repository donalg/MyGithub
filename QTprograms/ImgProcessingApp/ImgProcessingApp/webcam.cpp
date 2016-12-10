#include "webcam.h"
#include <opencv2/opencv.hpp>

Webcam::Webcam(QObject *parent) : QObject(parent)
{
    camera_index = 0;
}


QImage Mat2QImage(cv::Mat const& src)
    {
         cv::Mat temp(src.cols,src.rows,src.type());
         cvtColor(src, temp,CV_BGR2RGB);
         QImage dest= QImage((uchar*) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
         return dest;
    }
/*void Webcam::run() {
    // This needs to be a recusive that if start has been released is
}*/

void Webcam::init() {
    if (!capture.isOpened())
    {
            capture.open(camera_index);
            run();
    }
}


void Webcam::run()
{

    //cv::VideoCapture capture(0);
    if (!capture.isOpened()) {
        //cv::VideoCapture capture(0);
        //run();

        qDebug() << "Error: Camera not available";
        init();
    } else {
    cv::Mat image_matrix;
    if(!capture.read(image_matrix)) {
        qDebug() << "FRAME NOT READY";
        return;
    } else {
        qDebug() << "FRAME";
        emit mat_ready(image_matrix);

    }




    }


}

void Webcam::stop()
{
    capture.release();
}

void Webcam::convert_Mat2QImage(cv::Mat mat)
{

    QImage image;
    image = Mat2QImage(mat);
    emit Image_ready(image);

}


