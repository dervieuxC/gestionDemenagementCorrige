#include "dialogcommercial.h"
#include "ui_dialogcommercial.h"

DialogCommercial::DialogCommercial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCommercial)
{
    ui->setupUi(this);
}

DialogCommercial::~DialogCommercial()
{
    delete ui;
}

void DialogCommercial::on_actionQuitter_triggered()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();
    if (ret==QMessageBox::Yes)
    close();
}
