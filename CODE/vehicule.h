#ifndef VEHICULE_H
#define VEHICULE_H
#include "permis.h"

class Vehicule
{
public:
    Vehicule();
    Vehicule(int leId, int lImmat);

    void tomberEnPanne();

    int getid() const;
    void setid(int value);

    int getimmat() const;
    void setimmat(int value);

    QString getEtat() const;
    void setEtat(const QString &value);

    int getKm() const;
    void setKm(int value);

    QString getModele() const;
    void setModele(const QString &value);

private:
    int id;
    int immat;
    int km;
    QString modele;
    Permis lePermis;
    QString etat;
};

#endif // VEHICULE_H
