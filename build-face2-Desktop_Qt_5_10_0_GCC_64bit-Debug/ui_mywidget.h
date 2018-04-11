/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QTableView *tableView;
    QLabel *labelShow_1;
    QLabel *labelShow_2;
    QLabel *labelShow_3;
    QLabel *labeltext3;
    QLabel *labeltext2;
    QLabel *labeltext1;
    QLabel *labelShow_4;
    QLabel *labeltext4;
    QLabel *labelShow_5;
    QLabel *labelShow_6;
    QLabel *labelShow_7;
    QLabel *labelShow_8;
    QLabel *labelShow_9;
    QLabel *labeltext7;
    QLabel *labeltext8;
    QLabel *labeltext9;
    QLabel *labeltext5;
    QLabel *labeltext6;
    QLabel *labelId;
    QLabel *labelTime;
    QLabel *labelName;
    QLabel *labelSex;
    QLineEdit *lineEditId;
    QLineEdit *lineEditTime;
    QLineEdit *lineEditName;
    QLineEdit *lineEditSex;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonExit;
    QPushButton *pushButtonAdd;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(1080, 650);
        tableView = new QTableView(MyWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 420, 490));
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        labelShow_1 = new QLabel(MyWidget);
        labelShow_1->setObjectName(QStringLiteral("labelShow_1"));
        labelShow_1->setGeometry(QRect(470, 38, 90, 125));
        labelShow_1->setAlignment(Qt::AlignCenter);
        labelShow_2 = new QLabel(MyWidget);
        labelShow_2->setObjectName(QStringLiteral("labelShow_2"));
        labelShow_2->setGeometry(QRect(620, 38, 90, 125));
        labelShow_2->setAlignment(Qt::AlignCenter);
        labelShow_3 = new QLabel(MyWidget);
        labelShow_3->setObjectName(QStringLiteral("labelShow_3"));
        labelShow_3->setGeometry(QRect(770, 38, 90, 125));
        labelShow_3->setAlignment(Qt::AlignCenter);
        labeltext3 = new QLabel(MyWidget);
        labeltext3->setObjectName(QStringLiteral("labeltext3"));
        labeltext3->setGeometry(QRect(786, 168, 58, 15));
        labeltext3->setAlignment(Qt::AlignCenter);
        labeltext2 = new QLabel(MyWidget);
        labeltext2->setObjectName(QStringLiteral("labeltext2"));
        labeltext2->setGeometry(QRect(636, 168, 58, 15));
        labeltext2->setAlignment(Qt::AlignCenter);
        labeltext1 = new QLabel(MyWidget);
        labeltext1->setObjectName(QStringLiteral("labeltext1"));
        labeltext1->setGeometry(QRect(486, 168, 58, 15));
        labeltext1->setAlignment(Qt::AlignCenter);
        labelShow_4 = new QLabel(MyWidget);
        labelShow_4->setObjectName(QStringLiteral("labelShow_4"));
        labelShow_4->setGeometry(QRect(470, 188, 90, 125));
        labelShow_4->setAlignment(Qt::AlignCenter);
        labeltext4 = new QLabel(MyWidget);
        labeltext4->setObjectName(QStringLiteral("labeltext4"));
        labeltext4->setGeometry(QRect(486, 318, 58, 15));
        labeltext4->setAlignment(Qt::AlignCenter);
        labelShow_5 = new QLabel(MyWidget);
        labelShow_5->setObjectName(QStringLiteral("labelShow_5"));
        labelShow_5->setGeometry(QRect(620, 188, 90, 125));
        labelShow_5->setAlignment(Qt::AlignCenter);
        labelShow_6 = new QLabel(MyWidget);
        labelShow_6->setObjectName(QStringLiteral("labelShow_6"));
        labelShow_6->setGeometry(QRect(770, 188, 90, 125));
        labelShow_6->setAlignment(Qt::AlignCenter);
        labelShow_7 = new QLabel(MyWidget);
        labelShow_7->setObjectName(QStringLiteral("labelShow_7"));
        labelShow_7->setGeometry(QRect(470, 358, 90, 125));
        labelShow_7->setAlignment(Qt::AlignCenter);
        labelShow_8 = new QLabel(MyWidget);
        labelShow_8->setObjectName(QStringLiteral("labelShow_8"));
        labelShow_8->setGeometry(QRect(620, 358, 90, 125));
        labelShow_8->setAlignment(Qt::AlignCenter);
        labelShow_9 = new QLabel(MyWidget);
        labelShow_9->setObjectName(QStringLiteral("labelShow_9"));
        labelShow_9->setGeometry(QRect(770, 358, 90, 125));
        labelShow_9->setAlignment(Qt::AlignCenter);
        labeltext7 = new QLabel(MyWidget);
        labeltext7->setObjectName(QStringLiteral("labeltext7"));
        labeltext7->setGeometry(QRect(486, 488, 58, 15));
        labeltext7->setAlignment(Qt::AlignCenter);
        labeltext8 = new QLabel(MyWidget);
        labeltext8->setObjectName(QStringLiteral("labeltext8"));
        labeltext8->setGeometry(QRect(636, 488, 58, 15));
        labeltext8->setAlignment(Qt::AlignCenter);
        labeltext9 = new QLabel(MyWidget);
        labeltext9->setObjectName(QStringLiteral("labeltext9"));
        labeltext9->setGeometry(QRect(786, 488, 58, 15));
        labeltext9->setAlignment(Qt::AlignCenter);
        labeltext5 = new QLabel(MyWidget);
        labeltext5->setObjectName(QStringLiteral("labeltext5"));
        labeltext5->setGeometry(QRect(636, 318, 58, 15));
        labeltext5->setAlignment(Qt::AlignCenter);
        labeltext6 = new QLabel(MyWidget);
        labeltext6->setObjectName(QStringLiteral("labeltext6"));
        labeltext6->setGeometry(QRect(786, 318, 58, 15));
        labeltext6->setAlignment(Qt::AlignCenter);
        labelId = new QLabel(MyWidget);
        labelId->setObjectName(QStringLiteral("labelId"));
        labelId->setGeometry(QRect(470, 530, 58, 15));
        labelId->setAlignment(Qt::AlignCenter);
        labelTime = new QLabel(MyWidget);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(470, 600, 58, 15));
        labelTime->setAlignment(Qt::AlignCenter);
        labelName = new QLabel(MyWidget);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setGeometry(QRect(700, 530, 58, 15));
        labelName->setAlignment(Qt::AlignCenter);
        labelSex = new QLabel(MyWidget);
        labelSex->setObjectName(QStringLiteral("labelSex"));
        labelSex->setGeometry(QRect(700, 600, 58, 15));
        labelSex->setAlignment(Qt::AlignCenter);
        lineEditId = new QLineEdit(MyWidget);
        lineEditId->setObjectName(QStringLiteral("lineEditId"));
        lineEditId->setGeometry(QRect(540, 528, 113, 24));
        lineEditTime = new QLineEdit(MyWidget);
        lineEditTime->setObjectName(QStringLiteral("lineEditTime"));
        lineEditTime->setGeometry(QRect(540, 598, 113, 24));
        lineEditName = new QLineEdit(MyWidget);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(770, 528, 113, 24));
        lineEditSex = new QLineEdit(MyWidget);
        lineEditSex->setObjectName(QStringLiteral("lineEditSex"));
        lineEditSex->setGeometry(QRect(770, 598, 113, 24));
        pushButtonDelete = new QPushButton(MyWidget);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));
        pushButtonDelete->setGeometry(QRect(310, 530, 100, 40));
        pushButtonUpdate = new QPushButton(MyWidget);
        pushButtonUpdate->setObjectName(QStringLiteral("pushButtonUpdate"));
        pushButtonUpdate->setGeometry(QRect(170, 530, 100, 40));
        pushButtonExit = new QPushButton(MyWidget);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(310, 600, 100, 40));
        pushButtonAdd = new QPushButton(MyWidget);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(30, 530, 100, 40));
        pushButton_4 = new QPushButton(MyWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 600, 100, 40));
        pushButton_5 = new QPushButton(MyWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 600, 100, 40));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "Form", nullptr));
        labelShow_1->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labelShow_2->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labelShow_3->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labeltext3->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labeltext2->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labeltext1->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labelShow_4->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labeltext4->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labelShow_5->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labelShow_6->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labelShow_7->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labelShow_8->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labelShow_9->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labeltext7->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labeltext8->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labeltext9->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labeltext5->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labeltext6->setText(QApplication::translate("MyWidget", "TextLabel", nullptr));
        labelId->setText(QApplication::translate("MyWidget", "ID", nullptr));
        labelTime->setText(QApplication::translate("MyWidget", "LastTime", nullptr));
        labelName->setText(QApplication::translate("MyWidget", "Name", nullptr));
        labelSex->setText(QApplication::translate("MyWidget", "Sex", nullptr));
        pushButtonDelete->setText(QApplication::translate("MyWidget", "Delete", nullptr));
        pushButtonUpdate->setText(QApplication::translate("MyWidget", "Update", nullptr));
        pushButtonExit->setText(QApplication::translate("MyWidget", "Exit", nullptr));
        pushButtonAdd->setText(QApplication::translate("MyWidget", "Add", nullptr));
        pushButton_4->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
