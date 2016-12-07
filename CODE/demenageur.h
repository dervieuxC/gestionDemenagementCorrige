#ifndef DEMENAGEUR_H
#define DEMENAGEUR_H
#include "salarie.h"

class Demenageur : public Salarie
{
public:
     Demenageur();
     Demenageur(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, bool leChef);

private:
     bool chef;
};

#endif // DEMENAGEUR_H
