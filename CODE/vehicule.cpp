#include "vehicule.h"

Vehicule::Vehicule()
{
}
Vehicule::Vehicule(int leId, int lImmat)
{
    id=leId;
    immat=lImmat;
}
int Vehicule::getid() const
{
    return id;
}

void Vehicule::setid(int value)
{
    id = value;
}
int Vehicule::getimmat() const
{
    return immat;
}

void Vehicule::setimmat(int value)
{
    immat = value;
}
QString Vehicule::getEtat() const
{
    return etat;
}

void Vehicule::setEtat(const QString &value)
{
    etat = value;
}
void Vehicule::tomberEnPanne()
{
    int randomValue = qrand() % 100;
    if (randomValue<10){
        etat="en panne";
    }
}
int Vehicule::getKm() const
{
    return km;
}

void Vehicule::setKm(int value)
{
    km = value;
}
QString Vehicule::getModele() const
{
    return modele;
}

void Vehicule::setModele(const QString &value)
{
    modele = value;
}





