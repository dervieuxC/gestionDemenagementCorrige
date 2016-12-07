#include "mainwindowsalarie.h"
#include "ui_mainwindowsalarie.h"

MainWindowSalarie::MainWindowSalarie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowSalarie)
{
    ui->setupUi(this);
}

MainWindowSalarie::~MainWindowSalarie()
{
    delete ui;
}

void MainWindowSalarie::on_action_Quitter_triggered()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();

    if (ret==QMessageBox::Yes)
        close();
}
