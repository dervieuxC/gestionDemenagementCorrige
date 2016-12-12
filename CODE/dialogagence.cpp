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

/**QString DialogAgence::getNomAgence()
{
    return ui->lineEditNomAgence->text();
}

QString DialogAgence::getAdresseAgence()
{
    return ui->lineEditAdresseAgence->text();
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
}*/
