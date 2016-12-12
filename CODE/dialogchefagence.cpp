#include "dialogchefagence.h"
#include "ui_dialogchefagence.h"

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
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();
    if (ret==QMessageBox::Yes)
    close();
}
