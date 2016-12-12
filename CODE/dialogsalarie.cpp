#include "dialogsalarie.h"
#include "ui_dialogsalarie.h"

DialogSalarie::DialogSalarie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSalarie)
{
    ui->setupUi(this);
}

DialogSalarie::~DialogSalarie()
{
    delete ui;
}
/*void MainWindowSalarie::on_action_Quitter_triggered()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();

    if (ret==QMessageBox::Yes)
        close();
}*/
