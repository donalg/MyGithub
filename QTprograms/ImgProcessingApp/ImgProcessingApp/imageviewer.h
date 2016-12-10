#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QWidget>
#include <QImage>
#include <QPainter>
#include <QLabel>
#include <QPixmap>
#include <QtDebug>


class ImageViewer : public QWidget
{
    Q_OBJECT
    QImage image;
    QLabel IMAGESHOW;
    //QLabel *IMAGESHOW;
   /* QPainter p(this);
    void paintEvent(QPaintEvent *) {
       // QPainter p(this);
        p.drawImage(0,0, image);
        image = QImage();
    }*/



public:
    explicit ImageViewer(QWidget *parent = 0);

signals:
    void Image_updated();

public slots:

    void set_image(QImage img);

private:
  //  QLabel IMAGESHOW;
    QPixmap IMAGE;
    void paint(QImage image);
    QPainter *p;


};

#endif // IMAGEVIEWER_H
