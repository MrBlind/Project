#include "mywidget.h"
#include "ui_mywidget.h"

//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv/cv.h>

using namespace cv;

extern QSqlDatabase db;

Mat src1;
VideoCapture Cap;

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    db.open();
    QSqlQueryModel * model = new QSqlQueryModel(ui->tableView);
    model->setQuery(QString("select * from info"));
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("name"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("sex"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("time"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("locate"));
    ui->tableView->setModel(model);

    connect(ui->tableView,SIGNAL(clicked(QModelIndex)),this,SLOT(ShowSupplyClicked()));
    db.close();


    //this is about image, opencv and display movie
    ui->labelShow_1->setScaledContents(true);
    ui->labelShow_1->setPixmap(QPixmap("image/img.jpg"));
    ui->labeltext1->setText("2018:03:12");


    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(readFrame()));
    connect(ui->pushButtonopen,SIGNAL(clicked()),this,SLOT(openCamera()));
//    connect(ui->
//    Cap = new VideoCapture(0);
//    while(1){
//    Cap >> src1;
//    waitKey(30);
//    Mat src1 = imread("image/img.jpg");
//    cvtColor(src1,src1,CV_BGR2RGB);

//    ui->labelShowImage->setScaledContents(true);
//    QImage ShowImage((const uchar*)src1.data,src1.cols,src1.rows,
//                     src1.cols * src1.channels(),QImage::Format_RGB888);
//    ui->labelShowImage->setPixmap(QPixmap::fromImage(ShowImage));
//    }
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::ShowSupplyClicked()
{
    db.open();
    QSqlQueryModel supplymodel(ui->tableView);
    supplymodel.setQuery(QString("select * from info"));
    int row = ui->tableView->currentIndex().row();
    QSqlRecord record = supplymodel.record(row);
    ui->lineEditId->setText(record.value(0).toString());
    ui->lineEditName->setText(record.value(1).toString());
    ui->lineEditSex->setText(record.value(2).toString());
    ui->lineEditTime->setText(record.value(3).toString());
}


void MyWidget::readFrame()
{
    Cap>>src1;
//    Cap >> src1;
    cvtColor(src1,src1,CV_BGR2RGB);
    QImage ShowImage((const uchar*)src1.data,src1.cols,src1.rows,
                     src1.cols * src1.channels(),QImage::Format_RGB888);
    ui->labelShowImage->setScaledContents(true);
    ui->labelShowImage->setPixmap(QPixmap::fromImage(ShowImage));
//    timer->start(33);
//    timer->start(33);
}

void MyWidget::openCamera()
{
    Cap.open(0);
    timer->start(33);
}

