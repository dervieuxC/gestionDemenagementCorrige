#include "dialoggererdemenagement.h"
#include "ui_dialoggererdemenagement.h"

DialogGererDemenagement::DialogGererDemenagement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGererDemenagement)
{
    ui->setupUi(this);
}

DialogGererDemenagement::~DialogGererDemenagement()
{
    delete ui;
}
