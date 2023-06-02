#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
#include "ui_admin.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Bienvenue sur votre application de gestion de stock");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /*mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/asus/Desktop/Gestion de stock derniere version/Gstock_cpp/gestiondestock.db");*/
    QString name, password;
    name = ui->lineEdit->text();
    password = ui->lineEdit_2->text();
    if (!connopen()) {
        qDebug() << "Impossible d'accéder à notre basedonnee";
        return;
    }
    QSqlQuery impo;

    if (impo.exec("select * from utilisateurs where [Nom du compte]='" + name + "' and [Mot de passe]='" + password + "'")) {
        int count = 0;
        while (impo.next()) {
            count++;
        }
        if (count == 1) {
            ui->label_6->setText("Vous etes connecté !");
                this->hide();
            admin admin;
            admin.setModal(true);
            admin.exec();
        } else {
            ui->label_6->setText("Nom du compte ou mot de passe incorrect !!");
        }
    } else {
        qDebug() << "Error executing query: " << impo.lastError().text();
    }
    connclose();
}
