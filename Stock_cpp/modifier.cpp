#include "modifier.h"
#include "ui_modifier.h"
#include"mainwindow.h"

Modifier::Modifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modifier)
{
    ui->setupUi(this);
    setWindowTitle("Modifier un produit");
}

Modifier::~Modifier()
{
    delete ui;
}

void Modifier::on_pushButton_2_clicked()
{
    MainWindow conn;
    QSqlQueryModel* modal = new QSqlQueryModel();
    if (!conn.connopen()) {
        qDebug() << "Impossible d'accéder à notre base de données.";
        return;
    }
    QSqlQuery* qry = new QSqlQuery(conn.mydb);
    qry->prepare("select Label from produits");
    if (qry->exec()) {
        modal->setQuery(*qry);
        ui->comboBox->setModel(modal);

        if (modal->rowCount() > 0) {
            QString label = modal->record(0).value("Label").toString();
            QString quantity = modal->record(0).value("Quantité").toString();
            QString purchasePrice = modal->record(0).value("Prix d'achat").toString();
            QString sellingPrice = modal->record(0).value("Prix de vente").toString();

            ui->lineEdit->setText(label);
            ui->lineEdit_2->setText(quantity);
            ui->lineEdit_3->setText(purchasePrice);
            ui->lineEdit_4->setText(sellingPrice);
        }
    } else {
        qDebug() << "Query execution failed.";
    }

    conn.connclose();
    qDebug() << modal->rowCount();
}


void Modifier::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString selectedLabel = ui->comboBox->currentText();
    MainWindow conn;
    if (!conn.connopen()) {
        qDebug() << "Impossible d'accéder à notre base de données.";
        return;
    }
    QSqlQuery impo(conn.mydb);
    impo.prepare("SELECT * FROM produits WHERE Label = '" + selectedLabel + "'");
    if (impo.exec()) {
        if (impo.next()) {
            QString label = impo.value("Label").toString();
            QString quantity = impo.value("Quantité").toString();
                               QString purchasePrice = impo.value("Prix d'achat").toString();
            QString sellingPrice = impo.value("Prix de vente").toString();

            ui->lineEdit->setText(label);
            ui->lineEdit_2->setText(quantity);
            ui->lineEdit_3->setText(purchasePrice);
            ui->lineEdit_4->setText(sellingPrice);
        }
    } else {
        qDebug() << "Query execution failed.";
    }
    conn.connclose();
}



void Modifier::on_pushButton_clicked()
{
    MainWindow conn;
    QString oldLabel,newLabel,quantite,prix_vente,prix_achat;
    oldLabel=ui->comboBox->currentText();
    newLabel=ui->lineEdit->text();
    quantite=ui->lineEdit_2->text();
    prix_achat=ui->lineEdit_4->text();
    prix_vente=ui->lineEdit_3->text();
    int quantiteInt=prix_achat.toInt();
    int prix_achatInt=prix_achat.toInt();
    int prix_venteInt=prix_vente.toInt();
    if(!conn.connopen()){
        qDebug()<<"Impossible d'accéder à notre la base de données.";
        return;
    }

    QSqlQuery impo(conn.mydb);
    impo.prepare("update produits set [Label]='" + newLabel + "', [Quantité]='" + QString::number(quantiteInt) + "', [Prix d'achat]='" + QString::number(prix_achatInt) + "', [Prix de vente]='" + QString::number(prix_venteInt) + "' WHERE [Label]='" + oldLabel + "'");

        if(impo.exec()){
        this->hide();
    }else {
        QMessageBox::critical(this,tr("Error"),impo.lastError().text());
    }
    conn.connclose();
}
