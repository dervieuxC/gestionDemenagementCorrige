#ifndef GARAGE_H
#define GARAGE_H
#include <QString>

class Garage
{
public:
    Garage();
    Garage(int  lId, QString leNom, QString lAdresse, int leTelephone);

    int getid() const;
    void setid(int value);

    QString getnom() const;
    void setnom(const QString &value);

    QString getadresse() const;
    void setadresse(const QString &value);

    int gettelephone() const;
    void settelephone(int value);

private:
    int id;
    QString nom;
    QString adresse;
    int telephone;
};

#endif // GARAGE_H
