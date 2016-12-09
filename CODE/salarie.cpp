#include "salarie.h"

Salarie::Salarie()
{
}

Salarie::Salarie(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche)
{
    id=leId;
    prenom=lePrenom;
    nom=leNom;
    adresse=lAdresse;
    dateNaissance=laDateNaissance;
    dateEmbauche=laDateEmbauche;
}

int Salarie::getId() const
{
    return id;
}

void Salarie::setId(int value)
{
    id = value;
}
QString Salarie::getPrenom() const
{
    return prenom;
}

void Salarie::setPrenom(const QString &value)
{
    prenom = value;
}
QString Salarie::getNom() const
{
    return nom;
}

void Salarie::setNom(const QString &value)
{
    nom = value;
}
QString Salarie::getAdresse() const
{
    return adresse;
}

void Salarie::setAdresse(const QString &value)
{
    adresse = value;
}
QDate Salarie::getDateNaissance() const
{
    return dateNaissance;
}

void Salarie::setDateNaissance(const QDate &value)
{
    dateNaissance = value;
}
QDate Salarie::getDateEmbauche() const
{
    return dateEmbauche;
}

void Salarie::setDateEmbauche(const QDate &value)
{
    dateEmbauche = value;
}
QString Salarie::getEtat() const
{
    return etat;
}

void Salarie::setEtat(const QString &value)
{
    etat = value;
}

void Salarie::demandeConge(int lId, QDate laDateDebut, QDate laDateFin, QDate laDateDemande, QString lEtatDemande, QDate laDateReponse){
    Conge* unConge = new Conge(lId, laDateDebut, laDateFin, laDateDemande, lEtatDemande, laDateReponse);
    vectConges.push_back(unConge);
}

