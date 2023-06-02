#include "save.h"
#include "ui_save.h"
#include"mainwindow.h"
#include"admin.h"
#include<QMessageBox>

save::save(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::save)
{
    ui->setupUi(this);
    setWindowTitle("Ajouter un produit");
}

save::~save()
{
    delete ui;
}

void save::on_pushButton_clicked()
{
    MainWindow conn;
    QString label,quantite,prix_vente,prix_achat;
    label=ui->lineEdit_1->text();
    quantite=ui->lineEdit_2->text();
    prix_achat=ui->lineEdit_3->text();
    prix_vente=ui->lineEdit_4->text();
    int quantite_Int=quantite.toInt();
    int prix_achat_Int=prix_achat.toInt();
    int prix_vente_Int=prix_vente.toInt();

    if(!conn.connopen()){
        qDebug()<<"Impossible d'accéder à notre base de données";
        return;
    }
    QSqlQuery impo(conn.mydb);
    impo.prepare("INSERT INTO produits ([Label],[Quantité],[Prix d'achat],[Prix de vente]) VALUES ('" + label + "','" + QString::number(quantite_Int) + "','" + QString::number(prix_achat_Int) + "','" + QString::number(prix_vente_Int) + "')");
        if (impo.exec()) {
        this->hide();
    } else {
        QMessageBox::critical(this, tr("Error"), impo.lastError().text());
    }
    conn.connclose();
}


