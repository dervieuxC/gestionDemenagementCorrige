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

/*void MainWindow::ChargeLesSalaries()
{
    QSqlQuery reqSalarie("select * from Salarie");
            while (reqSalarie.next())
            {
                QString sid = reqSalarie.value(0).toString();
                QString snom = reqSalarie.value(1).toString();
                QString sprenom = reqSalarie.value(2).toString();
                QString sdaten = reqSalarie.value(3).toString();
                QString FinalC = cid + " - " + cnom + " " + cprenom;
                ui->comboBoxAfficher->addItem(FinalC);
                Salarie newSalarie;
                newSalarie.setId(cid);
                newSalarie.setNom(cnom);
                newSalarie.setPrenom(cprenom);
                newSalarie.set();
                newSalarie.set();
                vectSalarie.push_back(newsalarie);

}*/

void MainWindow::on_pushButtonConnexion_clicked()
{
    QString id=ui->lineEditID->text();
    QString mdr=ui->lineEditMDP->text();
    QSqlQuery laRequete;
    QString requeteText="select";
    if(1==1)//requete renvoi salarié
    {
        DialogSalarie dialSalarie;
        if (dialSalarie.exec() ==QDialog::Accepted)
        {}
    }
    if(1==1)//requete renvoi chef d'agence
    {
        DialogChefAgence dialChefAgence;
        if (dialChefAgence.exec() ==QDialog::Accepted)
        {}
    }
    if(1==1)//requete renvoi chef d'entreprise
    {
        DialogChefEntreprise dialChefEntreprise;
        if (dialChefEntreprise.exec() ==QDialog::Accepted)
        {}
    }
    if(1==1)//requete renvoi commercial
    {
        DialogCommercial dialCommercial;
        if (dialCommercial.exec() ==QDialog::Accepted)
        {}
    }
}
