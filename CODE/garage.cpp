#include "garage.h"

Garage::Garage()
{
}

Garage::Garage(int lId, QString leNom, QString lAdresse, int leTelephone)
{
    id = lId;
    nom = leNom;
    adresse = lAdresse;
    telephone = leTelephone;
}
int Garage::getid() const
{
    return id;
}

void Garage::setid(int value)
{
    id = value;
}
QString Garage::getnom() const
{
    return nom;
}

void Garage::setnom(const QString &value)
{
    nom = value;
}
QString Garage::getadresse() const
{
    return adresse;
}

void Garage::setadresse(const QString &value)
{
    adresse = value;
}
int Garage::gettelephone() const
{
    return telephone;
}

void Garage::settelephone(int value)
{
    telephone = value;
}




