#ifndef DOSSIERDEMENAGEMENT_H
#define DOSSIERDEMENAGEMENT_H
#include <QString>
#include <QDate>
#include <QVector>
#include "demenageur.h"
#include "commercial.h"
#include "vehicule.h"

class DossierDemenagement
{
public:
    DossierDemenagement();
    DossierDemenagement(int leId, QDate laDateOuverture, QDate laDateDebutDem, QDate laDateFinDem, int leVolume, int leNombreKm, QString lAdresseChargement, QString lAdresseLivraison, QString lEtatDossier, int leNbDemenageurs);

    int getid() const;
    void setid(int value);

    QDate getdateOuverture() const;
    void setdateOuverture(const QDate &value);

    QDate getdateDebutDem() const;
    void setdateDebutDem(const QDate &value);

    QDate getdateFinDem() const;
    void setdateFinDem(const QDate &value);

    int getvolume() const;
    void setvolume(int value);

    int getnombreKm() const;
    void setnombreKm(int value);

    QString getadresseChargement() const;
    void setadresseChargement(const QString &value);

    QString getadresseLivraison() const;
    void setadresseLivraison(const QString &value);

    QString getetatDossier() const;
    void setetatDossier(const QString &value);

    int getnbDemenageurs() const;
    void setnbDemenageurs(int value);

private:
    int id;
    QDate dateOuverture;
    QDate dateDebutDem;
    QDate dateFinDem;
    int volume;
    int nombreKm;
    QString adresseChargement;
    QString adresseLivraison;
    QString etatDossier;
    int nbDemenageurs;
    QVector<Demenageur> vectDemenageursDossier;
    Commercial* leCommercialDossier;
    QVector<Vehicule*> vectVehiculesDossier;
};

#endif // DOSSIERDEMENAGEMENT_H
