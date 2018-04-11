#include "dialog.h"
#include "mywidget.h"
#include <QApplication>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>


#define HOST "localhost"
#define USER "root"
#define PASSWD "tyj9702202016"
QSqlDatabase db;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(HOST);
    db.setUserName(USER);
    db.setPassword(PASSWD);
    db.setDatabaseName("face");
    if(!db.open())
    {
        qDebug()<<"open database error"<<endl;
    }
    Dialog w;
    MyWidget m;
    if(w.exec() == QDialog::Accepted)
        m.show();
    else exit(0);
    return a.exec();
}
