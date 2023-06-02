#include "supprimer.h"
#include "ui_supprimer.h"
#include"mainwindow.h"

Supprimer::Supprimer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Supprimer)
{
    ui->setupUi(this);
    setWindowTitle("Retirer un produit");
}

Supprimer::~Supprimer()
{
    delete ui;
}



void Supprimer::on_pushButton_2_clicked()
{
    MainWindow conn;
    QSqlQueryModel * modal = new QSqlQueryModel();
    conn.connopen();
    QSqlQuery* qry =new QSqlQuery(conn.mydb);
    qry->prepare("select Label from produits");
    qry->exec();
    modal->setQuery(*qry);
    ui->comboBox->setModel(modal);
    conn.connclose();
    qDebug()<<(modal->rowCount());
}

void Supprimer::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString label=ui->comboBox->currentText();
    MainWindow conn;
    if(!conn.connopen()){
        qDebug()<<"Impossible d'accéder à notre base de données";
        return;
    }
    conn.connopen();
    QSqlQuery impo;
    impo.prepare("delete from produits where Label='"+label+"'");
    if(impo.exec()){
        conn.connclose();
    }

}

void Supprimer::on_deleteButton_clicked()
{
    QString label = ui->comboBox->currentText();
    MainWindow conn;

    if (!conn.connopen()) {
        qDebug() << "Impossible d'accéder à notre base de données";
        return;
    }

    QSqlQuery impo;
    impo.prepare("delete from produits where Label='" + label + "'");
    if (impo.exec()) {
        conn.connclose();
        this->hide();
        qDebug() << "Product deleted";
    } else {
        qDebug() << "Failed to delete product";
    }
}

