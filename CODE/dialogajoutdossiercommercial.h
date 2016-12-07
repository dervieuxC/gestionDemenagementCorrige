#ifndef DIALOGAJOUTDOSSIERCOMMERCIAL_H
#define DIALOGAJOUTDOSSIERCOMMERCIAL_H

#include <QDialog>

namespace Ui {
class DialogAjoutDossierCommercial;
}

class DialogAjoutDossierCommercial : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAjoutDossierCommercial(QWidget *parent = 0);
    QString getDateDebut();
    QString getDateFin();
    QString getAdrChargement();
    QString getAdrLivraison();
    int getNbDemenageur();
    QString getChefEquipe();
    QString getAgence();

    ~DialogAjoutDossierCommercial();

private:
    Ui::DialogAjoutDossierCommercial *ui;
};

#endif // DIALOGAJOUTDOSSIERCOMMERCIAL_H
