#include "demenageur.h"

Demenageur::Demenageur() :Salarie(){}
Demenageur::Demenageur(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, bool leChef): Salarie(leId,lePrenom, leNom, lAdresse, laDateNaissance, laDateEmbauche){
    chef = leChef;
}
bool Demenageur::getChef() const
{
    return chef;
}
void Demenageur::setChef(bool value)
{
    chef = value;
}



/*void Demenageur::optenirPermis(Obtention*)
{
    lePermis=&vectPermisTemp[idPerm];
}*/


