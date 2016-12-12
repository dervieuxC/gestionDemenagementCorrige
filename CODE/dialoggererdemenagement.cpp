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


QString DialogGererDemenagement::getDateDebut()
{
    return ui->lineEditDateDebut->text();
}

QString DialogGererDemenagement::getDateFin()
{
    return ui->lineEditDateFin->text();
}

QString DialogGererDemenagement::getEtat()
{
    return ui->comboBoxEtat->currentText();
}





void DialogGererDemenagement::on_pushButtonAnnuler_clicked()
{

}
