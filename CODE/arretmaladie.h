#ifndef ARRETMALADIE_H
#define ARRETMALADIE_H
#include <QDate>

class ArretMaladie
{
public:
    ArretMaladie();
    ArretMaladie(int lId, QDate laDateDebut, QDate laDateFin);

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
