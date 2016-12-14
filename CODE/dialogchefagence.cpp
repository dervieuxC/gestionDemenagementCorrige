using namespace std;
#include "dialogchefagence.h"
#include "ui_dialogchefagence.h"
#include "dialogajouteremploye.h"
#include <QDebug>
#include "agence.h"
#include "salarie.h"
DialogChefAgence::DialogChefAgence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogChefAgence)
{
    ui->setupUi(this);
}

DialogChefAgence::~DialogChefAgence()
{
    delete ui;
}

void DialogChefAgence::on_pushButtonQuitter_clicked()
{
    qDebug()<<"DialogChefAgence::on_pushButtonQuitter_clicked()";
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();
    if (ret==QMessageBox::Yes)
    close();
}

void DialogChefAgence::on_pushButtonAjouterEmploye_clicked()
{
    qDebug()<<"DialogChefAgence::on_pushButtonAjouterEmploye_clicked()";
    DialogAjouterEmploye monDialogAjouterEmploye;
    if(monDialogAjouterEmploye.exec()==QDialog::Accepted)
    {
        QString nomEmploye = monDialogAjouterEmploye.getNomEmploye();
        QString prenomEmploye = monDialogAjouterEmploye.getPrenomEmploye();
        QString rueEmploye = monDialogAjouterEmploye.getRueEmploye();
        QString villeEmploye = monDialogAjouterEmploye.getVilleEmploye();
        QString CPEmploye = monDialogAjouterEmploye.getCPEmploye();
        QString telEmploye = monDialogAjouterEmploye.getTelEmploye();
        QString dateEmploye = monDialogAjouterEmploye.getDateEmploye();
        QString loginEmploye = monDialogAjouterEmploye.getLoginEmploye();
        QString typeEmploye = monDialogAjouterEmploye.getTypeEmploye();
        // si le type choisi est commercial
        if(typeEmploye=="commercial")
        {
            // on crée un commercial puis on ajoute au vecteur vectSalariesAgence
        }// si non
        else {
            // on crée un demenageur puis on ajoute au vecteur vectSalarieAgence
        }
        int nbLigne = ui->tableWidgetEmployes->rowCount();
        nbLigne++;
        ui->tableWidgetEmployes->setRowCount(nbLigne);
        ui->tableWidgetEmployes->setItem(nbLigne-1, 0, new QTableWidgetItem(nomEmploye));
        ui->tableWidgetEmployes->setItem(nbLigne-1, 1, new QTableWidgetItem(prenomEmploye));
        // ui->tableWidgetEmployes->setItem(nbLigne-1, 2, new QTableWidgetItem(dateEmbaucheEmploye));
         ui->tableWidgetEmployes->setItem(nbLigne-1, 3, new QTableWidgetItem(typeEmploye));
        // ui->tableWidgetEmployes->setItem(nbLigne-1, 4, new QTableWidgetItem(etatEmploye));

    }

}


void DialogChefAgence::on_pushButtonLicencierEmploye_clicked()
{
    ui->tableWidgetEmployes->removeRow(ui->tableWidgetEmployes->currentRow());

}
