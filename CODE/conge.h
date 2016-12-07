#ifndef CONGE_H
#define CONGE_H
#include <QString>
#include <QDate>
#include "motifconge.h"

class Conge
{
public:
    Conge();
    Conge(int lId, QDate laDateDebut, QDate laDateFin, QDate laDateDemande, QString lEtatDemande, QDate laDateReponse );

    int getid() const;
    void setid(int value);

    QDate getdate_debut() const;
    void setdate_debut(const QDate &value);

    QDate getdate_fin() const;
    void setdate_fin(const QDate &value);

    QDate getdate_demande() const;
    void setdate_demande(const QDate &value);

    QString getetat_demande() const;
    void setetat_demande(const QString &value);

    QDate getdate_reponse() const;
    void setdate_reponse(const QDate &value);

private:
    int id;
    QDate dateDebut;
    QDate dateFin;
    QDate dateDemande;
    QString etatDemande;
    QDate dateReponse;
    MotifConge leMotifConge;
};
#endif // CONGE_H
