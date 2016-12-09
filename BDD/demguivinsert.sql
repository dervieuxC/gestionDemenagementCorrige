INSERT INTO garage VALUES 
('','Poizot','chemin des sauterelle', 'Saint-Firmin', '05800', '0425685978'),
('','Vulco','Z.A du sud', 'Gap', '05000', '0492500899'),
('','Garage Renault','Z.A des Baraque', 'la Fare', '05500', '0492511899');

INSERT INTO motif_conge VALUES 
('','Vacance'),
('','Enfant'),
('','Jeux-vidéo');

INSERT INTO agence VALUES
('','Rue de la tulipe','Gap','05000','0425689754','agence1@mail.fr','Agence1','0526354578'),
('','Rue du 11 novembre','Saint-Bonnet','05500','0425489454','agence2@mail.fr','Agence2','0544354578');


INSERT INTO permis VALUES
('','B1'),
('','B'),
('','C1'),
('','C'),
('','C1E'),
('','CE');


INSERT INTO salarie VALUES 
('','1992-11-13','1962-03-14','Rue des coquelicot','La Chapelle','05800','Forestier','Pierre','D',0,'A',1,'pforestier','ini01','V', '0613594376'),
('','1998-02-14','1975-01-12','Impasse des 3 chemins','Gap','05000','DesChamps','Francois','D',0,'B',1,'fdeschamps','ini01','V','0664872195'),
('','2000-05-20','1970-03-21','Rue du bidet','Gap', '05000','Pascal','Pascalle','C',0,'A',1,'ppascalle','ini01','V','0664225346'),
('','1991-06-09','1961-10-05','Avenu Doloress','Saint-Bonnet', '05500','Sécurithé','Jacques','D',1,NULL,1,'sjacques','ini01','V', '0654667221');

INSERT INTO obtention VALUES
('1992-09-12',2,2),
('1991-02-12',1,1),
('1999-05-25',3,4),
('1997-03-30',2,3);

INSERT INTO conge VALUES
('','2012-12-12', '2012-12-20', '2012-12-10', 'ATT', 2, 3),
('','2015-10-12', '2015-10-20', '2015-10-10', 'ATT', 3, 2);

INSERT INTO arret_maladie VALUES
('','2015-02-10','2015-06-05','malade',2);

INSERT INTO commercial VALUES 
('A',3);

INSERT INTO demenageur VALUES
(1,'B',1),
(0,'C1',2),
(0,'B1',4);

INSERT INTO vehicule VALUES
('22-AYU-56','gros camion', 1, 'V',6),
('35-DER-69','petit camion', 1, 'V',3),
('15-CEZ-36','elevateur', 1, 'V',4);

INSERT INTO immobilisation VALUES
('','O','2016-11-30',NULL,1,'22-AYU-56'),
('','X','1996-04-30','1996-05-15',1,'15-CEZ-36');

INSERT INTO dossier_demenagement VALUES
('','2 rue des alouettes', 'Gap', '05000', '1 place de la poutre','Gap','05000', '2016-12-28', '2016-12-20', '2016-12-27','2016-12-06', 'en cours', '2' , '5', 15, 1, 3, 1);

INSERT INTO participer VALUES
(1,1),
(2,1);

INSERT INTO utiliser VALUES
(1,'22-AYU-56'),
(1,'35-DER-69');


