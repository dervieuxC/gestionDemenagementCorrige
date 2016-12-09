#include "mainwindowcommercial.h"
#include "ui_mainwindowcommercial.h"
#include <QModelIndex>


MainWindowCommercial::MainWindowCommercial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowCommercial)
{
    ui->setupUi(this);
}

MainWindowCommercial::~MainWindowCommercial()
{
    delete ui;
}

void MainWindowCommercial::on_actionQuitter_triggered()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();

    if (ret==QMessageBox::Yes)
    {
        close();
    }
}

void MainWindowCommercial::on_pushButtonAjouterDossier_clicked()
{
    //ajouter un dossier
}

void MainWindowCommercial::on_pushButtonSupprimerDossier_clicked()
{
    //supprimer un dossier
}
