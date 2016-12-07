#ifndef MOTIF_CONGE_H
#define MOTIF_CONGE_H
#include <QString>

class MotifConge
{
public:
    MotifConge();
    MotifConge(int lId, QString leLibelle);

    int getid() const;
    void setid(int value);

    QString getlibelle() const;
    void setlibelle(const QString &value);

private:
    int id;
    QString libelle;
};

#endif // MOTIF_CONGE_H
