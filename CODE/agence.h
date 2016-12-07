#ifndef AGENCE_H
#define AGENCE_H
#include <QString>
#include <QVector>
#include "salarie.h"
#include "vehicule.h"
#include "dossierdemenagement.h"
#include "obtention.h"
#include "immobilisation.h"

class Agence
{
public:
    Agence();
    Agence(int lId, QString leNom, QString lAdresse, int leTelephone, int leFax, QString leMail);
private:
int id;
QString nom;
QString adresse;
int telephone;
int fax;
QString mail;
QVector<Salarie> vectSalariesAgence;
QVector<Vehicule> vectVehiculesAgence;
QVector<DossierDemenagement> vectDossiersDemenagement;
QVector<Obtention> vectObtentions;
QVector<Immobilisation> vectImmobilisations;
};


#endif // AGENCE_H
