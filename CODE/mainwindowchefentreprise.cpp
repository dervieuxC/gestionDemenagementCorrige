#include "mainwindowchefentreprise.h"
#include "ui_mainwindowchefentreprise.h"
#include "dialogagence.h"
#include "dialogajouteremploye.h"
#include <QDebug>

MainWindowChefEntreprise::MainWindowChefEntreprise(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowChefEntreprise)
{
    ui->setupUi(this);
}

MainWindowChefEntreprise::~MainWindowChefEntreprise()
{
    delete ui;
}

// modif Apti
void MainWindowChefEntreprise::on_pushButtonChefAjouterAgence_clicked()
{
    qDebug()<<"MainWindowChefEntreprise::on_pushButtonChefAjouterAgence_clicked()";
    DialogAgence monDialogAgence;
    if(monDialogAgence.exec()==QDialog::Accepted)
    {
         QString nomAgence=monDialogAgence.getNomAgence();
         QString adresseAgence=monDialogAgence.getAdresseAgence();
         //...

    } else { ui->statusBar->showMessage(tr("Message d'erreur"));}
}


// modif Apti
void MainWindowChefEntreprise::on_pushButtonChefEngager_clicked()
{
    qDebug()<<"MainWindowChefEntreprise::on_pushButtonChefEngager_clicked()";
    DialogAjouterEmploye monDialogAjouterEmploye;
    if(monDialogAjouterEmploye.exec()==QDialog::Accepted)
    {
         QString nomEmploye=monDialogAjouterEmploye.getNomEmploye();
         QString prenomEmploye=monDialogAjouterEmploye.getPrenomEmploye();
         QString adresseEmploye=monDialogAjouterEmploye.getAdresseEmploye();
         //...

    } else { ui->statusBar->showMessage(tr("Message d'erreur"));}
}
