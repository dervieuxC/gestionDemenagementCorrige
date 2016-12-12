#ifndef ARRETMALADIE_H
#define ARRETMALADIE_H
#include <QDate>

class ArretMaladie
{
public:
    //Attributs public

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
    void setId(int value);

    QDate getDateDebut() const;
    void setDateDebut(const QDate &value);

    QDate getDateFin() const;
    void setDateFin(const QDate &value);

private:
    int id;
    QDate dateDebut;
    QDate dateFin;
};

#endif // ARRETMALADIE_H
