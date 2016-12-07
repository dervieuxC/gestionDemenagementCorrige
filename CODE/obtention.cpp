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

