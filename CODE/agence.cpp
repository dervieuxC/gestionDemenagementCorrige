#include "agence.h"

Agence::Agence()
{
}
Agence::Agence(int lId, QString leNom, QString lAdresse, int leTelephone, int leFax, QString leMail)
{
    id=lId;
    nom=leNom;
    adresse=lAdresse;
    telephone=leTelephone;
    fax=leFax;
    mail=leMail;
}
void Agence::acheterVehicule(int lImmat, int leKm, QString leModele, Permis lePermis )
{
     int lId=0;//l'id dans la base+1
     Vehicule nouveauVehicule(lId, lImmat);
     nouveauVehicule.setEtat("en marche");
     nouveauVehicule.setKm(leKm);
     nouveauVehicule.setModele(leModele);
     vectVehiculesAgence.push_back(nouveauVehicule);
}
void Agence::vendreVehicule(int lId)
{
    int idVeh=0;
    while(vectVehiculesAgence[idVeh].getid()!=lId)
    {
        idVeh++;
        if (vectVehiculesAgence[idVeh].getid()!=lId)
        {
            vectVehiculesAgence.remove(lId,1);
        }
    }
}
int Agence::getId() const
{
    return id;
}

void Agence::setId(int value)
{
    id = value;
}
QString Agence::getNom() const
{
    return nom;
}

void Agence::setNom(const QString &value)
{
    nom = value;
}
QString Agence::getAdresse() const
{
    return adresse;
}

void Agence::setAdresse(const QString &value)
{
    adresse = value;
}
int Agence::getTelephone() const
{
    return telephone;
}

void Agence::setTelephone(int value)
{
    telephone = value;
}
int Agence::getFax() const
{
    return fax;
}

void Agence::setFax(int value)
{
    fax = value;
}
QString Agence::getMail() const
{
    return mail;
}

void Agence::setMail(const QString &value)
{
    mail = value;
}
QVector<Salarie> Agence::getVectSalariesAgence() const
{
    return vectSalariesAgence;
}

void Agence::setVectSalariesAgence(const QVector<Salarie> &value)
{
    vectSalariesAgence = value;
}
QVector<Vehicule> Agence::getVectVehiculesAgence() const
{
    return vectVehiculesAgence;
}

void Agence::setVectVehiculesAgence(const QVector<Vehicule> &value)
{
    vectVehiculesAgence = value;
}
QVector<DossierDemenagement> Agence::getVectDossiersDemenagement() const
{
    return vectDossiersDemenagement;
}

void Agence::setVectDossiersDemenagement(const QVector<DossierDemenagement> &value)
{
    vectDossiersDemenagement = value;
}
QVector<Obtention> Agence::getVectObtentions() const
{
    return vectObtentions;
}

void Agence::setVectObtentions(const QVector<Obtention> &value)
{
    vectObtentions = value;
}
QVector<Immobilisation> Agence::getVectImmobilisations() const
{
    return vectImmobilisations;
}

void Agence::setVectImmobilisations(const QVector<Immobilisation> &value)
{
    vectImmobilisations = value;
}











