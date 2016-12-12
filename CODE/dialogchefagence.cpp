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
