#include "dialogchefentreprise.h"
#include "ui_dialogchefentreprise.h"

DialogChefEntreprise::DialogChefEntreprise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogChefEntreprise)
{
    ui->setupUi(this);
}

DialogChefEntreprise::~DialogChefEntreprise()
{
    delete ui;
}

void DialogChefEntreprise::on_pushButtonChefQuitter_clicked()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();
    if (ret==QMessageBox::Yes)
    close();
}

void DialogChefEntreprise::on_action_Quitter_triggered()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();
    if (ret==QMessageBox::Yes)
    close();
}
