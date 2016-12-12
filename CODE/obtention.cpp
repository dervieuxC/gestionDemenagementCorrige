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
Permis Obtention::getLePermis() const
{
    return lePermis;
}

void Obtention::setLePermis(const Permis &value)
{
    lePermis = value;
}



