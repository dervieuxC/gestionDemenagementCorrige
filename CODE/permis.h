#ifndef PERMIS_H
#define PERMIS_H
#include <QString>

class Permis
{
public:
    Permis();
    Permis(int lId, QString leLibelle);
    int getid() const;
    void setid(int value);

    QString getlibelle() const;
    void setlibelle(const QString &value);

private:
    int id;
    QString libelle;
};

#endif // PERMIS_H
