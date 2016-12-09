#ifndef OBTENTION_H
#define OBTENTION_H
#include <QDate>
#include "demenageur.h"
#include "permis.h"

class Obtention
{
public:
    Obtention();
    Obtention(QDate laDateObtention);

    QDate getdateObtention() const;
    void setdateObtention(const QDate &value);

    Demenageur getLeDemenageur() const;
    void setLeDemenageur(const Demenageur &value);

    Permis getLePermis() const;
    void setLePermis(const Permis &value);

private:
    QDate dateObtention;
    Demenageur leDemenageur;
    Permis lePermis;
};

#endif // OBTENTION_H
