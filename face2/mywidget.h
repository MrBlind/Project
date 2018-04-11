#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QDebug>
#include <QFileDialog>
#include <QPixmap>
#include <QLabel>
#include <cv.h>
#include <opencv2/opencv.hpp>
#include <QTimer>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

public slots:
    void ShowSupplyClicked();
    void readFrame();
    void openCamera();
//    void takingPictures();

private:
    Ui::MyWidget *ui;
    QTimer       *timer;
//    QImage       *image;
//    VideoCapture Cap;
};

#endif // MYWIDGET_H
