#include "immobilisation.h"

Immobilisation::Immobilisation()
{
}

Immobilisation::Immobilisation(int lId, QString leType, QDate laDateDebut, QDate laDateFin, int leKm, QString lInfoSupp, QString leResultat)
{
    id = lId;
    type = leType;
    dateDebut = laDateDebut;
    dateFin = laDateFin;
    km = leKm;
    infoSupp = lInfoSupp;
    resultat = leResultat;
}
int Immobilisation::getid() const
{
    return id;
}

void Immobilisation::setid(int value)
{
    id = value;
}
QString Immobilisation::gettype() const
{
    return type;
}

void Immobilisation::settype(const QString &value)
{
    type = value;
}
QDate Immobilisation::getdateDebut() const
{
    return dateDebut;
}

void Immobilisation::setdateDebut(const QDate &value)
{
    dateDebut = value;
}
QDate Immobilisation::getdateFin() const
{
    return dateFin;
}

void Immobilisation::setdateFin(const QDate &value)
{
    dateFin = value;
}
int Immobilisation::getkm() const
{
    return km;
}

void Immobilisation::setkm(int value)
{
    km = value;
}
QString Immobilisation::getinfoSupp() const
{
    return infoSupp;
}

void Immobilisation::setinfoSupp(const QString &value)
{
    infoSupp = value;
}
QString Immobilisation::getresultat() const
{
    return resultat;
}

void Immobilisation::setresultat(const QString &value)
{
    resultat = value;
}







