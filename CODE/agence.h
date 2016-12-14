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

    /**
     * @brief Constructeur vide.
     */
    Agence();
    /**
     * @brief Constructeur avec 6 paramètres.
     * @param int lId
     * @param QString leNom
     * @param QString lAdresse
     * @param int leTelephone
     * @param int leFax
     * @param QString leMail
     */
    Agence(int lId, QString leNom, QString lAdresse, int leTelephone, int leFax, QString leMail);

    /**
     * @brief Achat de véhicule.
     * Permet à l'agence d'acheter un véhicule et l'ajoute au vecteur de véhicule.
     * @param int lImmat
     * @param int leKm
     * @param QString leModele
     * @param Permis lePermis
     */
    void acheterVehicule(int lImmat, int leKm, QString leModele, Permis lePermis);
    /**
     * @brief Vente de véhicule.
     * Permet à l'agence de vendre un véhicule et le supprime du vecteur de véhicule.
     * @param int lId
     */
    void vendreVehicule(int lId);
    /**
     * @brief Ajout Déménageur.
     * Ajoute un salarié de type déménageur à l'agence et l'ajoute dans le vecteur de salarié.
     * @param int lId
     * @param QString leNom
     * @param QString lePrenom
     * @param QString lAdresse
     * @param QDate laDateNaissance
     * @param QDate laDateEmbauche
     * @param bool leChef
     */
    void ajouterSalarieDemenageur(int lId, QString leNom, QString lePrenom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, bool leChef);
    /**
     * @brief Ajout commercial.
     * Ajoute un salarié de type commercial à l'agence et l'ajoute dans le vecteur de salarié.
     * @param int lId
     * @param QString leNom
     * @param QString lePrenom
     * @param QString lAdresse
     * @param QDate laDateNaissance
     * @param QDate laDateEmbauche
     * @param QString lExperience
     */
    void ajouterSalarieCommercial(int lId, QString leNom, QString lePrenom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, QString lExperience);
    /**
     * @brief Licencier un salarié.
     * Permet de liciencier un salarié en modifiant son état.
     * @param int lId
     */
    void licencierSalarie(int lId);

    /**
     * @brief Récupère l'id de l'agence.
     * Permet de récupérer la valeur de l'id de l'agence courante.
     * @return la valeur de l'id de type int
     */
    int getId() const;
    /**
     * @brief Change l'id de l'agence.
     * Permet de changer la valeur de l'id de l'agence courante.
     * @param int value
     */
    void setId(int value);

    /**
     * @brief Récupère le nom de l'agence.
     * Permet de récupérer la valeur de nom de l'agence courante.
     * @return la valeur de nom de type QString
     */
    QString getNom() const;
    /**
     * @brief Change le nom de l'agence.
     * Permet de changer la valeur de nom de l'agence courante.
     * @param QString value
     */
    void setNom(const QString &value);

    /**
     * @brief Récupère l'adresse de l'agence.
     * Permet de récupérer la valeur d'adresse de l'agence courante.
     * @return la valeur d'adresse de type QString
     */
    QString getAdresse() const;
    /**
     * @brief Change l'adresse de l'agence.
     * Permet de changer la valeur d'adresse de l'agence courante.
     * @param QString value
     */
    void setAdresse(const QString &value);

    /**
     * @brief Récupère le n° de téléphone de l'agence.
     * Permet de récupérer la valeur de telephone de l'agence courante.
     * @return la valeur de telephone de type int
     */
    int getTelephone() const;
    /**
     * @brief Change le n° de téléphone de l'agence.
     * Permet de changer la valeur de telephone de l'agence courante.
     * @param int value
     */
    void setTelephone(int value);

    /**
     * @brief Récupère le n° de fax de l'agence.
     * Permet de récupérer la valeur de fax de l'agence courante.
     * @return la valeur de fax de type int
     */
    int getFax() const;
    /**
     * @brief Change le n° de fax de l'agence.
     * Permet de changer la valeur de fax de l'agence courante.
     * @param int value
     */
    void setFax(int value);

    /**
     * @brief Récupère l'adresse mail de l'agence.
     * Permet de récupérer la valeur de mail de l'agence courante.
     * @return la valeur de mail de type QString
     */
    QString getMail() const;
    /**
     * @brief Change l'adresse mail de l'agence.
     * Permet de changer la valeur de mail de l'agence courante.
     * @param QString value
     */
    void setMail(const QString &value);

    QString getVille();

    void setVille (QString value);

    int getCp();

    void setCp(int value);

    /**
     * @brief Récupère les salariés de l'agence.
     * Permet de récupérer le vecteur de salarié de l'agence courante.
     * @return le vecteur de salariés de type QVector<Salarie*>
     */
    QVector<Salarie *> getVectSalariesAgence() const;

    /**
     * @brief Récupère les véhicules de l'agence.
     * Permet de récupérer le vecteur de véhicule de l'agence courante.
     * @return le vecteur de véhicules de type QVector<Vehicule>
     */
    QVector<Vehicule> getVectVehiculesAgence() const;

    /**
     * @brief Récupère les dossiers de déménagement de l'agence.
     * Permet de récupérer le vecteur de dossiers de déménagement de l'agence courante.
     * @return le vecteur de dossiers de déménagement de type QVector<DossierDemenagement>
     */
    QVector<DossierDemenagement> getVectDossiersDemenagement() const;

    /**
     * @brief Récupère les permis des déménageurs de l'agence.
     * Permet de récupérer le vecteur d'obtentions(qui contient les permis des déménageurs) de l'agence courante.
     * @return le vecteur d'obtentions de type QVector<Obtention>
     */
    QVector<Obtention> getVectObtentions() const;

    /**
     * @brief Récupère les immobilisations de véhicule de l'agence.
     * Permet de récupérer le vecteur d'immobilisations de l'agence courante.
     * @return le vecteur d'immobilisations de type QVector<Immobilisation>
     */
    QVector<Immobilisation> getVectImmobilisations() const;

    /**
     * @brief Récupère le chef de l'agence.
     * Permet de récupérer le chef de l'agence courante et ses infos.
     * @return la valeur de chefAgence de type Salarie*
     */
    Salarie* getChefAgence() const;
    /**
     * @brief Change le chef de l'agence.
     * Permet de changer les infos du chef de l'agence courante.
     * @param Salarie* value
     */
    void setChefAgence(Salarie *value);

private:   
    // Attributs privés

    int id;
    QString nom;
    QString adresse;
    int telephone;
    int fax;
    int cp;
    QString ville;
    QString mail;
    QVector<Salarie*> vectSalariesAgence;
    QVector<Vehicule> vectVehiculesAgence;
    QVector<DossierDemenagement> vectDossiersDemenagement;
    QVector<Obtention> vectObtentions;
    QVector<Immobilisation> vectImmobilisations;
    Salarie* chefAgence;
};


#endif // AGENCE_H
