/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(851, 601);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 30, 731, 491));
        label_1 = new QLabel(widget);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(20, 10, 381, 461));
        label_1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 80px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:2, stop:0 rgba(158, 254, 222, 0.671), stop:1 rgba(177, 104, 245, 0.707));"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 10, 331, 461));
        label_2->setStyleSheet(QString::fromUtf8("border-bottom-right-radius: 80px;\n"
"background-color: rgba(255, 255, 255, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 60, 221, 40));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:rgba(0,0,0,200);"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(420, 170, 251, 40));
        QFont font1;
        font1.setPointSize(10);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:1.5px solid rgba(177, 104, 245, 0.707);\n"
"color:rgba(0,0,0,240);\n"
"padding-bottom:7px;"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(420, 250, 251, 40));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:1.5px solid rgba(177, 104, 245, 0.707);\n"
"color:rgba(0,0,0,240);\n"
"padding-bottom:7px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(410, 410, 311, 20));
        QFont font2;
        font2.setPointSize(8);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color:rgba(0, 0, 0, 0.464);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 330, 191, 51));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        pushButton->setFont(font3);
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
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 240, 55, 16));
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 0, 521, 491));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/cosmetcis_image/da09915c774a24097eeab7d3fa22af48.jpg")));
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 440, 271, 20));
        label_6->setStyleSheet(QString::fromUtf8("color:rgba(0, 0, 0, 0.464);"));
        label_5->raise();
        label_1->raise();
        label_2->raise();
        label_3->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_4->raise();
        pushButton->raise();
        label->raise();
        label_6->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 851, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_1->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Veuillez saisir votre identifiant et mot de passe", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        label->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
