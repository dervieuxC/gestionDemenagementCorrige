#include "dialogajouteremploye.h"
#include "ui_dialogajouteremploye.h"
#include <QRadioButton>

DialogAjouterEmploye::DialogAjouterEmploye(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAjouterEmploye)
{
    ui->setupUi(this);
}

DialogAjouterEmploye::~DialogAjouterEmploye()
{
    delete ui;
}


// modif apti
QString DialogAjouterEmploye::getNomEmploye()
{
    return ui->lineEditNomEmploye->text();
}

QString DialogAjouterEmploye::getPrenomEmploye()
{
    return ui->lineEditPrenomEmploye->text();
}

QString DialogAjouterEmploye::getRueEmploye()
{
    return ui->lineEditRueEmploye->text();
}

QString DialogAjouterEmploye::getVilleEmploye()
{
    return ui->lineEditVilleEmploye->text();
}

QString DialogAjouterEmploye::getCPEmploye()
{
    return ui->lineEditCPEmploye->text();
}

QString DialogAjouterEmploye::getTelEmploye()
{
    return ui->lineEditTelEmploye->text();
}

QString DialogAjouterEmploye::getDateEmploye()
{
    return ui->lineEditDateNaissanceEmploye->text();
}


QString DialogAjouterEmploye::getTypeEmploye()
{
    if(ui->radioButtonCommercial->isChecked())
    {
        return "commercial";
    }
    else
        return "demenageur";

}


QString DialogAjouterEmploye::getLoginEmploye()
{
    return ui->lineEditLoginEmploye->text();
}
