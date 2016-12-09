#include "arretmaladie.h"

ArretMaladie::ArretMaladie(){}
ArretMaladie::ArretMaladie(int lId, QDate laDateDebut, QDate laDateFin){
    id=lId;
    dateDebut=laDateDebut;
    dateFin=laDateFin;
}
int ArretMaladie::getId() const
{
    return id;
}

void ArretMaladie::setId(int value)
{
    id = value;
}
QDate ArretMaladie::getDateDebut() const
{
    return dateDebut;
}

void ArretMaladie::setDateDebut(const QDate &value)
{
    dateDebut = value;
}
QDate ArretMaladie::getDateFin() const
{
    return dateFin;
}

void ArretMaladie::setDateFin(const QDate &value)
{
    dateFin = value;
}



