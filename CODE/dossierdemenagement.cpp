#include "dossierdemenagement.h"

DossierDemenagement::DossierDemenagement()
{
}
DossierDemenagement::DossierDemenagement(int leId, QDate laDateOuverture, QDate laDateDebutDem, QDate laDateFinDem, int leVolume, int leNombreKm, QString lAdresseChargement, QString lAdresseLivraison, QString lEtatDossier, int leNbDemenageurs)
{
id=leId;
dateOuverture=laDateOuverture;
dateDebutDem=laDateDebutDem;
dateFinDem=laDateFinDem;
volume=leVolume;
nombreKm=leNombreKm;
adresseChargement=lAdresseChargement;
adresseLivraison=lAdresseLivraison;
etatDossier=lEtatDossier;
nbDemenageurs=leNbDemenageurs;
}
int DossierDemenagement::getid() const
{
    return id;
}

void DossierDemenagement::setid(int value)
{
    id = value;
}
QDate DossierDemenagement::getdateOuverture() const
{
    return dateOuverture;
}

void DossierDemenagement::setdateOuverture(const QDate &value)
{
    dateOuverture = value;
}
QDate DossierDemenagement::getdateDebutDem() const
{
    return dateDebutDem;
}

void DossierDemenagement::setdateDebutDem(const QDate &value)
{
    dateDebutDem = value;
}
QDate DossierDemenagement::getdateFinDem() const
{
    return dateFinDem;
}

void DossierDemenagement::setdateFinDem(const QDate &value)
{
    dateFinDem = value;
}
int DossierDemenagement::getvolume() const
{
    return volume;
}

void DossierDemenagement::setvolume(int value)
{
    volume = value;
}
int DossierDemenagement::getnombreKm() const
{
    return nombreKm;
}

void DossierDemenagement::setnombreKm(int value)
{
    nombreKm = value;
}
QString DossierDemenagement::getadresseChargement() const
{
    return adresseChargement;
}

void DossierDemenagement::setadresseChargement(const QString &value)
{
    adresseChargement = value;
}
QString DossierDemenagement::getadresseLivraison() const
{
    return adresseLivraison;
}

void DossierDemenagement::setadresseLivraison(const QString &value)
{
    adresseLivraison = value;
}
QString DossierDemenagement::getetatDossier() const
{
    return etatDossier;
}

void DossierDemenagement::setetatDossier(const QString &value)
{
    etatDossier = value;
}
int DossierDemenagement::getnbDemenageurs() const
{
    return nbDemenageurs;
}

void DossierDemenagement::setnbDemenageurs(int value)
{
    nbDemenageurs = value;
}

















