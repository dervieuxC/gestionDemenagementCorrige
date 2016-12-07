#include "permis.h"

Permis::Permis()
{
}
Permis::Permis(int lId, QString leLibelle)
{
    id=lId;
    libelle=leLibelle;
}

int Permis::getid() const
{
    return id;
}

void Permis::setid(int value)
{
    id = value;
}
QString Permis::getlibelle() const
{
    return libelle;
}

void Permis::setlibelle(const QString &value)
{
    libelle = value;
}


