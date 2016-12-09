#ifndef SALARIE_H
#define SALARIE_H
#include <QString>
#include <QDate>
#include <QVector>
#include "conge.h"
#include "arretmaladie.h"

class Salarie
{
public:
 Salarie(int leId, QString lePrenom, QString leNom,QString lAdresse,QDate laDateNaissance, QDate laDateEmbauche);
 Salarie();
 void demandeConge(int lId, QDate laDateDebut, QDate laDateFin, QDate laDateDemande, QString lEtatDemande, QDate laDateReponse);
<<<<<<< HEAD
 void demandeArreMaladie();

=======
>>>>>>> 7e6620e70209ee335f6fae19bfb38c8d743dd835

 int getId() const;
 void setId(int value);

 QString getPrenom() const;
 void setPrenom(const QString &value);

 QString getNom() const;
 void setNom(const QString &value);

 QString getAdresse() const;
 void setAdresse(const QString &value);

 QDate getDateNaissance() const;
 void setDateNaissance(const QDate &value);

 QDate getDateEmbauche() const;
 void setDateEmbauche(const QDate &value);

 QString getEtat() const;
 void setEtat(const QString &value);

private:
 int id;
 QString prenom;
 QString nom;
 QString adresse;
 QDate dateNaissance;
 QDate dateEmbauche;
 QVector<Conge> vectConges;
 QVector<ArretMaladie> vectArretMaladies;
 QString etat;
};

#endif // SALARIE_H
