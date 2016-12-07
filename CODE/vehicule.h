#ifndef VEHICULE_H
#define VEHICULE_H
#include "permis.h"

class Vehicule
{
public:
    Vehicule();
    Vehicule(int leId, int lImmat);
    int getid() const;
    void setid(int value);

    int getimmat() const;
    void setimmat(int value);

    QString getEtat() const;
    void setEtat(const QString &value);

private:
    int id;
    int immat;
    Permis lePermis;
    QString etat;
};

#endif // VEHICULE_H
