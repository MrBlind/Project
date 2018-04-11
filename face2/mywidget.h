#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

//public slots:
public slots:
    void ShowSupplyClicked();
//    void ShowSupplyClicked();

private:
    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
