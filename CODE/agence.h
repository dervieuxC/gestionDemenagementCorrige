#ifndef AGENCE_H
#define AGENCE_H
#include <QString>
#include <QVector>
#include "salarie.h"
#include "vehicule.h"
#include "dossierdemenagement.h"
#include "obtention.h"
#include "immobilisation.h"
#include "permis.h"

class Agence
{
public:
    Agence();
    Agence(int lId, QString leNom, QString lAdresse, int leTelephone, int leFax, QString leMail);

    void acheterVehicule(int lImmat, int leKm, QString leModele, Permis lePermis);
    void vendreVehicule(int lId);
    void ajouterSalarieDemenageur(int lId, QString leNom, QString lePrenom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, bool leChef);
    void ajouterSalarieCommercial(int lId, QString leNom, QString lePrenom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, QString lExperience);
    void licencierSalarie(int lId);

    int getId() const;
    void setId(int value);

    QString getNom() const;
    void setNom(const QString &value);

    QString getAdresse() const;
    void setAdresse(const QString &value);

    int getTelephone() const;
    void setTelephone(int value);

    int getFax() const;
    void setFax(int value);

    QString getMail() const;
    void setMail(const QString &value);

    QVector<Salarie> getVectSalariesAgence() const;
    void setVectSalariesAgence(const QVector<Salarie> &value);

    QVector<Vehicule> getVectVehiculesAgence() const;
    void setVectVehiculesAgence(const QVector<Vehicule> &value);

    QVector<DossierDemenagement> getVectDossiersDemenagement() const;
    void setVectDossiersDemenagement(const QVector<DossierDemenagement> &value);

    QVector<Obtention> getVectObtentions() const;
    void setVectObtentions(const QVector<Obtention> &value);

    QVector<Immobilisation> getVectImmobilisations() const;
    void setVectImmobilisations(const QVector<Immobilisation> &value);
    Salarie* getChefAgence() const;
    void setChefAgence(const Salarie* &value);


private:
    int id;
    QString nom;
    QString adresse;
    int telephone;
    int fax;
    QString mail;
    QVector<Salarie> vectSalariesAgence;
    QVector<Vehicule> vectVehiculesAgence;
    QVector<DossierDemenagement> vectDossiersDemenagement;
    QVector<Obtention> vectObtentions;
    QVector<Immobilisation> vectImmobilisations;
    Salarie* chefAgence;
};


#endif // AGENCE_H
