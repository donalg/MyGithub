#include "imgprocessor.h"
#include "webcam.h"

ImgProcessor::ImgProcessor(QObject *parent) : QObject(parent)
{

}

void ImgProcessor::Webcam_mat_ToBeProcessed(cv::Mat img_mat)
{
    // Have a switch case that will allow for ordered processes to be run on &Mat:

    // emit the mat processed signal back to the webcam:
    emit mat_processed(img_mat);

}
