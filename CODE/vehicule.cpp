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
<<<<<<< HEAD
void Vehicule::tomberEnPanne()
{
    int randomValue = qrand() % 100;
    if (randomValue)
}
=======

>>>>>>> a4e30c18c99b6d5594a34658c7890a4ffec2d4f2


