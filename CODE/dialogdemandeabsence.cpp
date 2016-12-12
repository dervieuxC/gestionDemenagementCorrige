#include "dialogdemandeabsence.h"
#include "ui_dialogdemandeabsence.h"

DialogDemandeAbsence::DialogDemandeAbsence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDemandeAbsence)
{
    ui->setupUi(this);
}

DialogDemandeAbsence::~DialogDemandeAbsence()
{
    delete ui;
}
