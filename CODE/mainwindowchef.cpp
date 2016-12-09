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

