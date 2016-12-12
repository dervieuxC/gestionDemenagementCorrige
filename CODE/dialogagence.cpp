#include "dialogagence.h"
#include "ui_dialogagence.h"

DialogAgence::DialogAgence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAgence)
{
    ui->setupUi(this);
}

DialogAgence::~DialogAgence()
{
    delete ui;
}

<<<<<<< HEAD
/*
=======
>>>>>>> ab116adad5ebde2583c631b59f39636352fef60e
QString DialogAgence::getNomAgence()
{
    return ui->lineEditNomAgence->text();
}

QString DialogAgence::getRueAgence()
{
    return ui->lineEditRueAgence->text();
}

QString DialogAgence::getVilleAgence()
{
    return ui->lineEditVilleAgence->text();
}

QString DialogAgence::getCPAgence()
{
    return ui->lineEditCPAgence->text();
}

int DialogAgence::getTelAgence()
{
    return ui->lineEditTelAgence->text().toInt();
}

int DialogAgence::getFaxAgence()
{
    return ui->lineEditFaxAgence->text().toInt();
}

QString DialogAgence::getMailAgence()
{
    return ui->lineEditMailAgence->text();
}
<<<<<<< HEAD
*/
=======
>>>>>>> ab116adad5ebde2583c631b59f39636352fef60e
