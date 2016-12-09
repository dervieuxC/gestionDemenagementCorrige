#include "commercial.h"

Commercial::Commercial() :
    Salarie()
{
}

 Commercial::Commercial(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, QString lExperience): Salarie(leId,lePrenom, leNom, lAdresse, laDateNaissance, laDateEmbauche){
experience=lExperience;
}

 void Commercial::nouveauDossier(QDate laDateDebutDem, QDate laDateFinDem, int leVolume, int leNombreKm, QString lAdresseChargement, QString lAdresseLivraison)
 {
     int lId=0;//l'id dans la base+1
     QDate laDateOuverture=QDate::currentDate();//date du jour
     QString lEtatDossier="0";//ouvert
     int leNbDemenageurs=0;
     Commercial* leCommercial;//l'adresse du commercial
     DossierDemenagement nouveauDossier(lId, laDateOuverture, laDateDebutDem, laDateFinDem, leVolume, leNombreKm, lAdresseChargement, lAdresseLivraison, lEtatDossier, leNbDemenageurs);
     nouveauDossier.setLeCommercialDossier(leCommercial);
     //fonction ajout dossier (nouveau dossier)
 }
 QString Commercial::getExperience() const
 {
     return experience;
 }
 
 void Commercial::setExperience(const QString &value)
 {
     experience = value;
 }
 
 