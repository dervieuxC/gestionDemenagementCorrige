#ifndef DEMENAGEUR_H
#define DEMENAGEUR_H
#include "salarie.h"
#include "permis.h"

class Demenageur : public Salarie
{
public:
     Demenageur();
     Demenageur(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, bool leChef);

     void optenirPermis(int lId);

     Permis *getLepermis() const;
     void setLepermis(Permis *value);

     bool getChef() const;
     void setChef(bool value);

private:
     bool chef;
     Permis* lePermis;
};

#endif // DEMENAGEUR_H
