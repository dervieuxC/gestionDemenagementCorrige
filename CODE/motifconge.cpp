#include "motifconge.h"

MotifConge::MotifConge()
{
}

MotifConge::MotifConge(int lId, QString leLibelle)
{
    id = lId;
    libelle = leLibelle;
}
QString MotifConge::getlibelle() const
{
    return libelle;
}

void MotifConge::setlibelle(const QString &value)
{
    libelle = value;
}

