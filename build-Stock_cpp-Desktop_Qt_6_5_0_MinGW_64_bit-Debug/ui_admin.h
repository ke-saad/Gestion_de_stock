/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QWidget *widget;
    QPushButton *deleteEmpButton;
    QPushButton *updateEmpButton;
    QPushButton *addEmpButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *produit;
    QTableView *tableView;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(1213, 676);
        widget = new QWidget(admin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 1191, 651));
        widget->setStyleSheet(QString::fromUtf8("border-top-left-radius: 80px;\n"
""));
        deleteEmpButton = new QPushButton(widget);
        deleteEmpButton->setObjectName("deleteEmpButton");
        deleteEmpButton->setGeometry(QRect(0, 470, 321, 44));
        QFont font;
        font.setPointSize(11);
        deleteEmpButton->setFont(font);
        deleteEmpButton->setStyleSheet(QString::fromUtf8("#deleteEmpButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:black;	\n"
"\n"
"}\n"
"#deleteEmpButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/icons8_Remove_User_Male_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteEmpButton->setIcon(icon);
        deleteEmpButton->setIconSize(QSize(32, 32));
        updateEmpButton = new QPushButton(widget);
        updateEmpButton->setObjectName("updateEmpButton");
        updateEmpButton->setGeometry(QRect(0, 410, 321, 44));
        updateEmpButton->setFont(font);
        updateEmpButton->setStyleSheet(QString::fromUtf8("#updateEmpButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:black;\n"
"}\n"
"#updateEmpButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/icons8_Registration_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateEmpButton->setIcon(icon1);
        updateEmpButton->setIconSize(QSize(32, 32));
        addEmpButton = new QPushButton(widget);
        addEmpButton->setObjectName("addEmpButton");
        addEmpButton->setGeometry(QRect(0, 350, 321, 44));
        addEmpButton->setFont(font);
        addEmpButton->setStyleSheet(QString::fromUtf8("#addEmpButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:black;\n"
"}\n"
"#addEmpButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/icons8_Add_User_Male_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        addEmpButton->setIcon(icon2);
        addEmpButton->setIconSize(QSize(32, 32));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1191, 651));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:2, stop:0 rgba(158, 254, 222, 0.671), stop:1 rgba(177, 104, 245, 0.707));"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 160, 291, 591));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/cosmetcis_image/da09915c774a24097eeab7d3fa22af48.jpg")));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(700, 50, 191, 61));
        QFont font1;
        font1.setPointSize(20);
        label_3->setFont(font1);
        produit = new QPushButton(widget);
        produit->setObjectName("produit");
        produit->setGeometry(QRect(0, 300, 321, 44));
        produit->setFont(font);
        produit->setStyleSheet(QString::fromUtf8("#livre\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:black;\n"
"}\n"
"#livre:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(410, 160, 771, 471));
        label_2->raise();
        label->raise();
        deleteEmpButton->raise();
        updateEmpButton->raise();
        addEmpButton->raise();
        label_3->raise();
        produit->raise();
        tableView->raise();

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        deleteEmpButton->setText(QCoreApplication::translate("admin", "Supprimer  un produit", nullptr));
        updateEmpButton->setText(QCoreApplication::translate("admin", "Modifier les informations d'un produit", nullptr));
        addEmpButton->setText(QCoreApplication::translate("admin", "Ajouter de nouveux produits", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("admin", "Stock", nullptr));
        produit->setText(QCoreApplication::translate("admin", "Les produits disponibles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
