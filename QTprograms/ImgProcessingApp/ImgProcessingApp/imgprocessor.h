#ifndef IMGPROCESSOR_H
#define IMGPROCESSOR_H

#include <QObject>
#include <opencv2/opencv.hpp>

class ImgProcessor : public QObject
{
    Q_OBJECT
public:
    explicit ImgProcessor(QObject *parent = 0);

signals:
    void mat_processed(cv::Mat );

public slots:
    void Webcam_mat_ToBeProcessed(cv::Mat img_mat);
};

#endif // IMGPROCESSOR_H
