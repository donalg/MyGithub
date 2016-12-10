#include "imageviewer.h"


ImageViewer::ImageViewer(QWidget *parent) : QWidget(parent)
{
    // IMAGESHOW->show();
   // QPainter *p = new QPainter(this);
}


void ImageViewer::set_image(QImage img)
{

/*
    if (!image.isNull())
        qDebug() << "Viewer dropped frame!";
    image = img;
    if (image.size() != size())
        setFixedSize(image.size());
   // update();
    paint(image);

*/



    if(img.isNull())
    {
        // Frame dropped.
        qDebug() << "Frame dropped";
    } else {
        IMAGESHOW.setPixmap(QPixmap::fromImage(img));
       // IMAGESHOW->update();
        IMAGESHOW.show();
        IMAGESHOW.update();
        qDebug() << "Img Viewer code executed.";
    }

   // for (int i =0; i < 10000; i++) {
        //spin ...
    //}

    qDebug() << "Image_updated() - emited";
    emit Image_updated();


}

void ImageViewer::paint(QImage image) {
    p->drawImage(0,0, image);
    image = QImage();
    emit Image_updated();
}
