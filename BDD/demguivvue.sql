-- VUES --
-- pouvoir participer à un dossier le salarié doit posseder le type "D"

/*

CREATE VIEW dossierdemenageur_ok AS 
SELECT * FROM dossier_demenagement 
WHERE  dos_chefEquipe = (SELECT dem_sal FROM demenageur
	WHERE dem_sal = (SELECT sal_id FROM salarie
		WHERE sal_type = 'D';)) WITH CHECK OPTION;
*/


-- ----------------------------------------------------------------------------
-- Verifier si au moins un demenageur à le permis qui est adapté au vehicule --
-- ----------------------------------------------------------------------------
CREATE VIEW u

-- -------------------------------------------------------------------------------------
-- Verifier si le véhicule est adapté aux volumme à demenager et qu'il est disponible --
-- -------------------------------------------------------------------------------------
CREATE VIEW utiliser_vraie AS
SELECT * FROM utiliser
WHERE
(uti_dossier, uti_vehicule) IN (SELECT uti_dossier, uti_vehicule FROM vehicule 
INNER JOIN utiliser ON veh_immat=uti_vehicule 
INNER JOIN dossier_demenagement ON uti_dossier=dos_numero
WHERE veh_volume >= dos_volume AND veh_etat='V');


-- ---------------------------------------
-- Verifier si l'employer et disponible --
-- ---------------------------------------
CREATE VIEW participer_vraie AS
SELECT * FROM participer
WHERE
(par_demenageur, par_dossier) IN (SELECT par_demenageur, par_dossier FROM dossier_demenagement 
INNER JOIN participer ON dos_numero=par_dossier 
INNER JOIN demenageur ON par_demenageur=dem_sal
INNER JOIN salarie ON dem_sal=sal_id
WHERE sal_etat='V');

-- -----------------------------------------------------
-- Verifier si le vehicule est disponible --
-- -----------------------------------------------------
CREATE VIEW utiliser_vraie AS
SELECT * FROM utiliser
WHERE
(par_demenageur, par_dossier) IN (SELECT par_demenageur, par_dossier FROM vehicule 
INNER JOIN utiliser ON veh_id=uti_vehicule
INNER JOIN dossier_demenagement ON uti_dossier=dos_numero
WHERE veh_etat='V');
