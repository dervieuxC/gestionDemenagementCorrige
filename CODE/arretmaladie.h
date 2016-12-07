#ifndef ARRETMALADIE_H
#define ARRETMALADIE_H
#include <QDate>

class ArretMaladie
{
public:
    ArretMaladie();
    ArretMaladie(int lId, QDate laDateDebut, QDate laDateFin);

private:
    int id;
    QDate dateDebut;
    QDate dateFin;
};

#endif // ARRETMALADIE_H
