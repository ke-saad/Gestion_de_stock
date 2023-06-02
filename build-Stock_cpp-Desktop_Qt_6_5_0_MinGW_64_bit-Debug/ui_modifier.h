/********************************************************************************
** Form generated from reading UI file 'modifier.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIER_H
#define UI_MODIFIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modifier
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_8;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *Modifier)
    {
        if (Modifier->objectName().isEmpty())
            Modifier->setObjectName("Modifier");
        Modifier->resize(627, 597);
        QFont font;
        font.setPointSize(10);
        Modifier->setFont(font);
        widget = new QWidget(Modifier);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 611, 581));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 611, 561));
        label->setStyleSheet(QString::fromUtf8("border-top-left-radius: 80px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:2, stop:0 rgba(158, 254, 222, 0.671), stop:1 rgba(177, 104, 245, 0.707));"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 20, 401, 41));
        QFont font1;
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 200, 55, 16));
        label_3->setFont(font);
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 300, 141, 20));
        label_5->setFont(font);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 420, 161, 51));
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
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 250, 91, 16));
        label_8->setFont(font);
        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(380, 150, 191, 22));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(410, 190, 141, 31));
        pushButton_2->setFont(font2);
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
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 150, 61, 16));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 150, 200, 22));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(150, 200, 200, 22));
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(150, 250, 200, 22));
        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(150, 300, 200, 22));

        retranslateUi(Modifier);

        QMetaObject::connectSlotsByName(Modifier);
    } // setupUi

    void retranslateUi(QDialog *Modifier)
    {
        Modifier->setWindowTitle(QCoreApplication::translate("Modifier", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Modifier", "Modifier les infos d'un livre", nullptr));
        label_3->setText(QCoreApplication::translate("Modifier", "Quantit\303\251", nullptr));
        label_5->setText(QCoreApplication::translate("Modifier", "Prix de vente :", nullptr));
        pushButton->setText(QCoreApplication::translate("Modifier", "Modifier", nullptr));
        label_8->setText(QCoreApplication::translate("Modifier", "Prix d'achat:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Modifier", "Load", nullptr));
        label_9->setText(QCoreApplication::translate("Modifier", "Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Modifier: public Ui_Modifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIER_H
