/********************************************************************************
** Form generated from reading UI file 'save.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_H
#define UI_SAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_save
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;

    void setupUi(QDialog *save)
    {
        if (save->objectName().isEmpty())
            save->setObjectName("save");
        save->resize(612, 561);
        widget = new QWidget(save);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 9, 591, 531));
        widget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 150, 55, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 250, 101, 16));
        label_2->setFont(font);
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 20, 241, 61));
        QFont font1;
        font1.setPointSize(20);
        label_5->setFont(font1);
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 591, 531));
        label_6->setStyleSheet(QString::fromUtf8("border-top-left-radius: 80px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:2, stop:0 rgba(158, 254, 222, 0.671), stop:1 rgba(177, 104, 245, 0.707));"));
        lineEdit_1 = new QLineEdit(widget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(150, 150, 200, 22));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(150, 250, 200, 22));
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(150, 300, 200, 22));
        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(150, 200, 200, 22));
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 300, 111, 16));
        label_7->setFont(font);
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 200, 55, 16));
        label_8->setFont(font);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 390, 161, 51));
        QFont font2;
        font2.setPointSize(11);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1  rgba(177, 104, 245, 0.707));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:10px;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0  rgba(177, 104, 245, 0.707), stop:1 rgba(11, 131, 120, 219));\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0  rgba(177, 104, 245, 0.707), stop:1 rgba(11, 131, 120, 219));\n"
"}"));
        label_6->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        lineEdit_1->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        label_7->raise();
        label_8->raise();
        pushButton->raise();

        retranslateUi(save);

        QMetaObject::connectSlotsByName(save);
    } // setupUi

    void retranslateUi(QDialog *save)
    {
        save->setWindowTitle(QCoreApplication::translate("save", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("save", "Label", nullptr));
        label_2->setText(QCoreApplication::translate("save", "Prix d'achat", nullptr));
        label_5->setText(QCoreApplication::translate("save", "Ajouter un livre", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("save", "Prix de vente", nullptr));
        label_8->setText(QCoreApplication::translate("save", "Quantit\303\251", nullptr));
        pushButton->setText(QCoreApplication::translate("save", "Enregistrer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class save: public Ui_save {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_H
