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
    return ui->comboBoxEtat->value();
}


/**
 * @brief DialogGererDemenagement::on_pushButtonAnnuler_clicked
 * Action qui ferme la fenetre
 */
void DialogGererDemenagement::on_pushButtonAnnuler_clicked()
{
    //demander la confirmation par une question.
    int ret = (QMessageBox::question(this, tr("gestion_demenagement"), tr("Etes vous sûr de vouloir quitter ?"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes));

    //Si la réponse à la question est positive, sortir de l'application
    if (ret == QMessageBox::Yes)
        close();
}//fin de la méthode on_pushButtonAnnuler_clicked()

