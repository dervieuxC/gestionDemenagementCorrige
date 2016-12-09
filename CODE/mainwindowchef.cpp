#include "mainwindowchef.h"
#include "ui_mainwindowchef.h"
#include "dialogagence.h"


MainWindowChef::MainWindowChef(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowChef)
{
    ui->setupUi(this);
}

MainWindowChef::~MainWindowChef()
{
    delete ui;
}

void MainWindowChef::on_pushButtonQuitter_clicked()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();
    if (ret==QMessageBox::Yes)
    close();
}

void MainWindowChef::on_pushButtonCreerAgence_clicked()
{
    DialogAgence monDialogAgence;
            if(monDialogAgence.exec()==QDialog::Accepted)
            {
                 QString nomAgence=monDialogAgence.getNomAgence();
                 QString adresseAgence=monDialogAgence.getAdresseAgence();
                 QString telAgence=monDialogAgence.getTelAgence();
                 QString faxAgence=monDialogAgence.getFaxAgence();
                 QString mailAgence=monDialogAgence.getMailAgence();

                 Agence unAgence;
                 unAgence.setNomAgence(nomAgence.toStdString());
                 unEleve.setAdresseAgence(adresseAgence.toStdString());

                 int nbLigne = ui->tableWidgetListeEleves->rowCount();
                 nbLigne++;

                 ui->tableWidgetListeEleves->setRowCount(nbLigne);
                 ui->tableWidgetListeEleves->setItem(nbLigne-1, 0, new QTableWidgetItem(nomAgence));
                 ui->tableWidgetListeEleves->setItem(nbLigne-1, 1, new QTableWidgetItem(adresseAgence));


                }
            } else { ui->statusBar->showMessage(tr(""));}
}
