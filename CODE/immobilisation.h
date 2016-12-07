#ifndef IMMOBILISATION_H
#define IMMOBILISATION_H
#include <QString>
#include <QDate>
#include "garage.h"
#include "vehicule.h"

class Immobilisation
{
public:
    Immobilisation();
    Immobilisation(int lId, QString leType, QDate laDateDebut, QDate laDateFin, int leKm, QString lInfoSupp, QString leResultat );

    int getid() const;
    void setid(int value);

    QString gettype() const;
    void settype(const QString &value);

    QDate getdateDebut() const;
    void setdateDebut(const QDate &value);

    QDate getdateFin() const;
    void setdateFin(const QDate &value);

    int getkm() const;
    void setkm(int value);

    QString getinfoSupp() const;
    void setinfoSupp(const QString &value);

    QString getresultat() const;
    void setresultat(const QString &value);

private:
    int id;
    QString type;
    QDate dateDebut;
    QDate dateFin;
    int km;
    QString infoSupp;
    QString resultat;
    Garage leGarage;
    Vehicule leVehicule;
};

#endif // IMMOBILISATION_H
