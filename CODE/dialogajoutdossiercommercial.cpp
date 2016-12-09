#include "dialogajoutdossiercommercial.h"
#include "ui_dialogajoutdossiercommercial.h"

DialogAjoutDossierCommercial::DialogAjoutDossierCommercial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAjoutDossierCommercial)
{
    ui->setupUi(this);
}

DialogAjoutDossierCommercial::~DialogAjoutDossierCommercial()
{
    delete ui;
}

QString DialogAjoutDossierCommercial::getDateDebut()
{
    return ui->lineEditDateDebutCommercial->text();
}

QString DialogAjoutDossierCommercial::getDateFin()
{
    return ui->lineEditDateFinCommercial->text();
}

QString DialogAjoutDossierCommercial::getAdrChargement()
{
    return ui->lineEditChargementCommercial->text();
}

QString DialogAjoutDossierCommercial::getAdrLivraison()
{
    return ui->lineEditLivraisonCommercial->text();
}

QString DialogAjoutDossierCommercial::getChefEquipe()
{
    return ui->lineEditChefEquipeCommercial->text();
}

QString DialogAjoutDossierCommercial::getAgence()
{
    return ui->lineEditAgenceCommercial->text();
}
