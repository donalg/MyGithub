#ifndef DISPLAYWIDGET_H
#define DISPLAYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QImage>
#include "imageviewer.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "webcam.h"
#include "imgprocessor.h"
#include "imageviewer.h"
#include <QThread>




class DisplayWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DisplayWidget(QWidget *parent = 0);
    bool state_;

signals:
    void another_image_please();

public slots:
        void start_pressed();
        void stop_pressed();
        void is_another_image_needed();

private:
       QThread webcam_thread;



};

#endif // DISPLAYWIDGET_H
