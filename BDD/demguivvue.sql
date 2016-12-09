-- VUES --
-- pouvoir participer à un dossier le salarié doit posseder le type "D"
delimiter |
CREATE VIEW dossierdemenageur_ok AS 
SELECT * FROM dossier_demenagement 
WHERE  dos_chefEquipe = (SELECT dem_sal FROM demenageur
	WHERE dem_sal = (SELECT sal_id FROM salarie
		WHERE sal_type = 'D';)) WITH CHECK OPTION;

end |
delimiter ;





