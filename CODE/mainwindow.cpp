#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::chargerPermis()
{
    QSqlQuery laRequete("select * from permis order by per_id asc;");
    while (laRequete.next())
    {
        int id=laRequete.value(0).toInt();
        QString libelle=laRequete.value(1).toString();
        Permis newPermis(id,libelle);
        vectPermis.push_back(newPermis);
    }
}
void MainWindow::AjouterPermis(int idPermis, QString libellePermis)
{
    QSqlQuery reqAjouterPermis;
        QString requeteText="insert into contact values ('";
        requeteText+=QString::number(idPermis);
        requeteText+="','";
        requeteText+=libellePermis;
        requeteText+="');";
        qDebug() << requeteText << endl;
        reqAjouterPermis.exec(requeteText);
}
void MainWindow::chargerAgences()
{
    QSqlQuery laRequete("select * from agence order by age_id asc;");
    while (laRequete.next())
    {
        //int id=laRequete.value(0).toInt();
        Agence newAgence();//a remplir
        //vectAgence.push_back(newAgence);
    }
}
void MainWindow::AjouterAgence(int idAgence)
{
    QSqlQuery reqAjouterAgence;
        /*QString requeteText="insert into agence values ('";
        requeteText+=QString::number(idAgence);
        requeteText+="','";
        requeteText+=libellePermis;
        requeteText+="');";
        qDebug() << requeteText << endl;*/
        //reqAjouterAgence.exec(requeteText);
}
void MainWindow::chargerSalaries()
{
    QSqlQuery laRequete("select * from salarie order by sal_id asc;");
    while (laRequete.next())
    {
        int id=laRequete.value(0).toInt();
        Salarie newSalarie();//a remplir
        //vectSalarie.push_back(newSalarie);
    }
}
void MainWindow::AjouterSalarie(int idSalarie)
{
    QSqlQuery reqAjouterSalarie;
        /*QString requeteText="insert into agence values ('";
        requeteText+=QString::number(idAgence);
        requeteText+="','";
        requeteText+=libellePermis;
        requeteText+="');";
        qDebug() << requeteText << endl;*/
        //reqAjouterSalarie.exec(requeteText);
}
void MainWindow::on_actionQuitter_triggered()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();

    if (ret==QMessageBox::Yes)
    close();
}

void MainWindow::on_pushButtonConnexion_clicked()
{


    QString id=ui->lineEditID->text();
    QString mdp=ui->lineEditMDP->text();
    QSqlQuery laRequete;
    QString requeteText="select * from salarie where sal_login=";
    requeteText+="'"+id+"'";
    requeteText+=" and sal_mdp=";
    requeteText+="'"+mdp+"';";
    qDebug() << requeteText << endl;
    if (laRequete.exec(requeteText)){
            laRequete.next();
            QString type=laRequete.value(8).toString();
            qDebug() << type << endl;
        if(type=="D")//requete renvoi salarié
        {
            DialogSalarie dialSalarie;
            if (dialSalarie.exec() ==QDialog::Accepted)
            {}
        }
        if(type=="CA")//requete renvoi chef d'agence
        {
            DialogChefAgence dialChefAgence;
            if (dialChefAgence.exec() ==QDialog::Accepted)
            {}
        }
        if(type=="CE")//requete renvoi chef d'entreprise
        {
            DialogChefEntreprise dialChefEntreprise;
            if (dialChefEntreprise.exec() ==QDialog::Accepted)
            {}
        }
        if(type=="C")//requete renvoi commercial
        {
            DialogCommercial dialCommercial;
            if (dialCommercial.exec() ==QDialog::Accepted)
            {}
        }
    }



}
