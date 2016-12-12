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
