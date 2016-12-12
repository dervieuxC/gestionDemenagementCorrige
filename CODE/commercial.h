#ifndef COMMERCIAL_H
#define COMMERCIAL_H
#include <QString>
#include <QDate>
#include "salarie.h"
#include "dossierdemenagement.h"

class Commercial : public Salarie
{
public:
    /**
     * @brief Constructeur vide
     */
    Commercial();
    /**
     * @brief Constructeur avec 7 paramètres.
     * @param int leId
     * @param QString lePrenom
     * @param QString leNom
     * @param QString lAdresse
     * @param QDate laDateNaissance
     * @param QDate laDateEmbauche
     * @param QString lExperience
     */
    Commercial(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, QString lExperience);

    /**
     * @brief Création nouveaux dossiers.
     * Permet a un commercial de créer un nouveau dossier de déménagement.
     * @param QDate laDateDebutDem
     * @param QDate laDateFinDem
     * @param int leVolume
     * @param int leNombreKm
     * @param QString lAdresseChargement
     * @param QString lAdresseLivraison
     */
    void nouveauDossier(QDate laDateDebutDem, QDate laDateFinDem, int leVolume, int leNombreKm, QString lAdresseChargement, QString lAdresseLivraison);

    /**
     * @brief Récupère l'expérience du commercial
     * Permet de récupérer l'expérience du commercial
     * @return la valeur de experience de type QString
     */
    QString getExperience() const;
    /**
     * @brief Change l'expérience du commercial
     * @param QString value
     */
    void setExperience(const QString &value);

public slots:
private:
    // Attributs privés
    QString experience;
};

#endif // COMMERCIAL_H
