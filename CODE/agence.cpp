#include "agence.h"

Agence::Agence()
{
}
Agence::Agence(int lId, QString leNom, QString lAdresse, int leTelephone, int leFax, QString leMail)
{
    id=lId;
    nom=leNom;
    adresse=lAdresse;
    telephone=leTelephone;
    fax=leFax;
    mail=leMail;
}
void Agence::acheterVehicule(int lImmat, int leKm, QString leModele, Permis lePermis )
{
     int lId=0;//l'id dans la base+1
     Vehicule nouveauVehicule(lId, lImmat);
     nouveauVehicule.setEtat("en marche");
     nouveauVehicule.setKm(leKm);
     nouveauVehicule.setModele(leModele);
     vectVehiculesAgence.push_back(nouveauVehicule);
}
void Agence::vendreVehicule(int lId)
{
    int idVeh=0;
    while(vectVehiculesAgence[idVeh].getid()!=lId)
    {
        idVeh++;
        if (vectVehiculesAgence[idVeh].getid()!=lId)
        {
            vectVehiculesAgence.remove(lId,1);
        }
    }   
}
void Agence::ajouterSalarieDemenageur(int lId, QString leNom, QString lePrenom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, bool leChef){
    Demenageur* unDemenageur = new Demenageur(lId, lePrenom, leNom, lAdresse, laDateNaissance, laDateEmbauche, leChef);
    unDemenageur->setEtat("Employé");
    vectSalariesAgence.push_back(unDemenageur);
}

void Agence::ajouterSalarieCommercial(int lId, QString leNom, QString lePrenom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, QString lExperience){
    Commercial* unCommercial = new Commercial(lId, lePrenom, leNom, lAdresse, laDateNaissance, laDateEmbauche, lExperience);
    unCommercial->setEtat("Emplyé");
    vectSalariesAgence.push_back(unCommercial);
}

void Agence::licencierSalarie(int lId){
    int lesSalaries = vectSalariesAgence.size();
    int salarieChoisis = 0;
    while(!(lesSalaries == salarieChoisis || vectSalariesAgence[lId]->getId() == vectSalariesAgence[salarieChoisis]->getId())){
        salarieChoisis ++;
    }
    if(lesSalaries != salarieChoisis && !(lesSalaries > salarieChoisis)){
        vectSalariesAgence[lId]->setEtat("Licencié");
    }
}

int Agence::getId() const
{
    return id;
}

void Agence::setId(int value)
{
    id = value;
}
QString Agence::getNom() const
{
    return nom;
}

void Agence::setNom(const QString &value)
{
    nom = value;
}
QString Agence::getAdresse() const
{
    return adresse;
}

void Agence::setAdresse(const QString &value)
{
    adresse = value;
}
int Agence::getTelephone() const
{
    return telephone;
}

void Agence::setTelephone(int value)
{
    telephone = value;
}
int Agence::getFax() const
{
    return fax;
}

void Agence::setFax(int value)
{
    fax = value;
}
QString Agence::getMail() const
{
    return mail;
}

void Agence::setMail(const QString &value)
{
    mail = value;
}

QString Agence::getVille()
{
    return ville;
}

void Agence::setVille(QString value)
{
    ville = value;
}

int Agence::getCp()
{
    return cp;
}

void Agence::setCp(int value)
{
    cp = value;
}

QVector<Salarie*> Agence::getVectSalariesAgence() const
{
    return vectSalariesAgence;
}


QVector<Vehicule> Agence::getVectVehiculesAgence() const
{
    return vectVehiculesAgence;
}


QVector<DossierDemenagement> Agence::getVectDossiersDemenagement() const
{
    return vectDossiersDemenagement;
}


QVector<Obtention> Agence::getVectObtentions() const
{
    return vectObtentions;
}


QVector<Immobilisation> Agence::getVectImmobilisations() const
{
    return vectImmobilisations;
}


Salarie *Agence::getChefAgence() const
{
    return chefAgence;
}

void Agence::setChefAgence(Salarie* value)
{
    chefAgence = value;
}











