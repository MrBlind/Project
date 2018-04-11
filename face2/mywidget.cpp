#include "mywidget.h"
#include "ui_mywidget.h"
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QDebug>
#include <QFileDialog>
#include <QPixmap>
#include <QLabel>

extern QSqlDatabase db;

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

    ui->labelShow_1->setScaledContents(true);
    ui->labelShow_1->setPixmap(QPixmap("image/img.jpg"));
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
