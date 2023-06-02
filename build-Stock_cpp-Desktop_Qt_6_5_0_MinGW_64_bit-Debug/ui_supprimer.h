/********************************************************************************
** Form generated from reading UI file 'supprimer.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMER_H
#define UI_SUPPRIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Supprimer
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Supprimer)
    {
        if (Supprimer->objectName().isEmpty())
            Supprimer->setObjectName("Supprimer");
        Supprimer->resize(583, 429);
        QFont font;
        font.setPointSize(11);
        Supprimer->setFont(font);
        widget = new QWidget(Supprimer);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 551, 371));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 551, 351));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border-top-left-radius: 80px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:2, stop:0 rgba(158, 254, 222, 0.671), stop:1 rgba(177, 104, 245, 0.707));"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 50, 151, 41));
        QFont font2;
        font2.setPointSize(20);
        label_2->setFont(font2);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 170, 55, 16));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(150, 160, 281, 41));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 260, 141, 51));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1  rgba(177, 104, 245, 0.707));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:10px;\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0  rgba(177, 104, 245, 0.707), stop:1 rgba(11, 131, 120, 219));\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0  rgba(177, 104, 245, 0.707), stop:1 rgba(11, 131, 120, 219));\n"
"}"));

        retranslateUi(Supprimer);

        QMetaObject::connectSlotsByName(Supprimer);
    } // setupUi

    void retranslateUi(QDialog *Supprimer)
    {
        Supprimer->setWindowTitle(QCoreApplication::translate("Supprimer", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Supprimer", "Supprimer", nullptr));
        label_3->setText(QCoreApplication::translate("Supprimer", "Label", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Supprimer", "Load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Supprimer: public Ui_Supprimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMER_H
