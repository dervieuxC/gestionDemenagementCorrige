#include "conge.h"

Conge::Conge()
{
}
Conge::Conge(int lId, QDate laDateDebut, QDate laDateFin, QDate laDateDemande, QString lEtatDemande, QDate laDateReponse)
{
    id = lId;
    dateDebut = laDateDebut;
    dateFin = laDateFin;
    etatDemande=lEtatDemande;
    dateDemande = laDateDemande;
    dateReponse = laDateReponse;
}
int Conge::getid() const
{
    return id;
}

void Conge::setid(int value)
{
    id = value;
}
QDate Conge::getdate_debut() const
{
    return dateDebut;
}

void Conge::setdate_debut(const QDate &value)
{
    dateDebut = value;
}
QDate Conge::getdate_fin() const
{
    return dateFin;
}

void Conge::setdate_fin(const QDate &value)
{
    dateFin = value;
}
QDate Conge::getdate_demande() const
{
    return dateDemande;
}

void Conge::setdate_demande(const QDate &value)
{
    dateDemande = value;
}
QString Conge::getetat_demande() const
{
    return etatDemande;
}

void Conge::setetat_demande(const QString &value)
{
    etatDemande = value;
}
QDate Conge::getdate_reponse() const
{
    return dateReponse;
}

void Conge::setdate_reponse(const QDate &value)
{
    dateReponse = value;
}





