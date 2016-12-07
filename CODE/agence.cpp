#include "agence.h"

Agence::Agence()
{
}
Agence::Agence(int lId, QString leNom, QString lAdresse, int leTelephone, int leFax, QString leMail)
{
    id=lId;
    nom=leNom;
    adresse=lAdresse;
    telephone=leTelephone;
    fax=leFax;
    mail=leMail;
}
