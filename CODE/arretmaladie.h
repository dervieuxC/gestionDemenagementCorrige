#ifndef ARRETMALADIE_H
#define ARRETMALADIE_H
#include <QDate>

class ArretMaladie
{
public:

    /**
     * @brief Constructeur vide.
     */
    ArretMaladie();
    /**
     * @brief Constructeur avec 3 paramètres.
     * @param int lId
     * @param QDate laDateDebut
     * @param QDate laDateFin
     */
    ArretMaladie(int lId, QDate laDateDebut, QDate laDateFin);

    /**
     * @brief Récupère l'id de l'arrêt maladie.
     * Permet de récupérer l'id de l'arrêt maladie.
     * @return la valeur de l'Id de type int
     */
    int getId() const;
    /**
     * @brief Change l'id de l'arrêt maaldie.
     * Permet de changer l'id de l'arrêt maladie.
     * @param int value
     */
    void setId(int value);

    /**
     * @brief Récupère la date de début de l'arrêt maladie.
     * Permet de récupérer la date de début de l'arrêt maladie.
     * @return la valeur de dateDebut de type QDate
     */
    QDate getDateDebut() const;
    /**
     * @brief Change la date de début de l'arrêt maladie.
     * Permet de changer la date de début de l'arrêt maladie.
     * @param QDate value
     */
    void setDateDebut(const QDate &value);

    /**
     * @brief Récupère la date de fin de l'arrêt maladie.
     * Permet de récupérer la date de fin de l'arrêt maladie.
     * @return la valeur de dateDebut de type QDate
     */
    QDate getDateFin() const;
    /**
     * @brief Change la date de fin de l'arrêt maladie.
     * Permet de changer la date de fin de l'arrêt maladie.
     * @param QDate value
     */
    void setDateFin(const QDate &value);

private:
    // Attributs privés

    int id;
    QDate dateDebut;
    QDate dateFin;
};

#endif // ARRETMALADIE_H
