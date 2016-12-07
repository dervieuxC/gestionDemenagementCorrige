#include "demenageur.h"

Demenageur::Demenageur() :
    Salarie()
{
}

 Demenageur::Demenageur(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, bool leChef): Salarie(leId,lePrenom, leNom, lAdresse, laDateNaissance, laDateEmbauche){
 chef = leChef;
}
