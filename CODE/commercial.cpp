#include "commercial.h"

Commercial::Commercial() :
    Salarie()
{
}

 Commercial::Commercial(int leId, QString lePrenom, QString leNom, QString lAdresse, QDate laDateNaissance, QDate laDateEmbauche, QString lExperience): Salarie(leId,lePrenom, leNom, lAdresse, laDateNaissance, laDateEmbauche){
experience=lExperience;
}

 Commercial::nouveauDossier(QDate laDateDebutDem, QDate laDateFinDem, int leVolume, int leNombreKm, QString lAdresseChargement, QString lAdresseLivraison)
 {
     int lId=;//l'id dans la base+1
     QDate laDateOuverture=;//date du jour
     QString lEtatDossier=;//ouvert
     int leNbDemenageurs=1;
     Commercial*=;//l'adresse du commercial
     DossierDemenagement nouveauDossier = new DossierDemenagement(lId, laDateOuverture, laDateDebutDem, laDateFinDem, leVolume,  leNombreKm,  lAdresseChargement,  lAdresseLivraison, lEtatDossier,  leNbDemenageurs);
     //fonction ajout dossier (nouveau dossier)
 }
