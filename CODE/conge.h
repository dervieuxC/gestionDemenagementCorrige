#ifndef CONGE_H
#define CONGE_H
#include <QString>
#include <QDate>
#include "motifconge.h"

class Conge
{
public:
    /**
     * @brief Constructeur vide
     */
    Conge();
    /**
     * @brief Constructeur avec 6 paramètres
     * @param int lId
     * @param QDate laDateDebut
     * @param QDate laDateFin
     * @param QDate laDateDemande
     * @param QString lEtatDemande
     * @param QDate laDateReponse
     */
    Conge(int lId, QDate laDateDebut, QDate laDateFin, QDate laDateDemande, QString lEtatDemande, QDate laDateReponse );

    /**
     * @brief Récupère l'id du congé.
     * Permet de récupérer l'id du congé.
     * @return la valeur de id de type int
     */
    int getid() const;
    /**
     * @brief Change l'id du congé.
     * Permet de changer l'id du congé.
     * @param int value
     */
    void setid(int value);

    /**
     * @brief Récupère la date de début du congé.
     * Permet de récupérer la date à laquelle commence le congé.
     * @return la valeur de dateDebut de type QDate
     */
    QDate getdate_debut() const;
    /**
     * @brief Change la date de début du congé.
     * Permet de modifer la date à laquelle commence le congé.
     * @param QDate value
     */
    void setdate_debut(const QDate &value);

    /**
     * @brief Récupère la date de fin du congé.
     * Permet de récupérer la date à laquelle se termine le congé.
     * @return la valeur de dateFin de type QDate
     */
    QDate getdate_fin() const;
    /**
     * @brief Change la date de fin du congé.
     * Permet de modifier la date à laquelle se termine le congé.
     * @param QDate value
     */
    void setdate_fin(const QDate &value);

    /**
     * @brief Récupère la date de demande du congé.
     * Permet de récupérer la date à laquelle le congé a été demandé.
     * @return la valeur de dateDemande
     */
    QDate getdate_demande() const;
    /**
     * @brief Change la date de demande du congé.
     * Permet de modifier la date à laquelle le congé a été demandé.
     * @param QDate value
     */
    void setdate_demande(const QDate &value);

    /**
     * @brief Récupère l'état de la demande.
     * Permet de récupérer l'état de la demande de congé (par exemple: "Accepté").
     * @return la valeur de dateDemande de type QDate
     */
    QString getetat_demande() const;
    /**
     * @brief Change l'état de la demande.
     * Permet de modifier l'état de la demande de congé.
     * @param QString value
     */
    void setetat_demande(const QString &value);

    /**
     * @brief Récupère la date de réponse.
     * Permet de récupérer la date à laquelle la réponse pour le congé a été donné.
     * @return la valeur de dateReponse de type QDate
     */
    QDate getdate_reponse() const;
    /**
     * @brief Change la date de réponse.
     * Permet de changer la date à laquelle la réponse pour le congé a été donné.
     * @param QDate value
     */
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
