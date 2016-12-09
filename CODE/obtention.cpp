#include "obtention.h"

Obtention::Obtention()
{
}

Obtention::Obtention(QDate laDateObtention)
{
    dateObtention = laDateObtention;
}
QDate Obtention::getdateObtention() const
{
    return dateObtention;
}

void Obtention::setdateObtention(const QDate &value)
{
    dateObtention = value;
}
Demenageur Obtention::getLeDemenageur() const
{
    return leDemenageur;
}

void Obtention::setLeDemenageur(const Demenageur &value)
{
    leDemenageur = value;
}
Permis Obtention::getLePermis() const
{
    return lePermis;
}

void Obtention::setLePermis(const Permis &value)
{
    lePermis = value;
}



