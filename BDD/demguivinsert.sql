INSERT INTO agence VALUES
('','Rue de la tulipe','Gap','05000','0425689754','agence1@mail.fr','Agence1','0526354578'),
('','Rue du 11 novembre','Saint-Bonnet','05500','0425489454','agence2@mail.fr','Agence2','0544354578');


INSERT INTO garage VALUES 
('','Poizot','chemin des sauterelle', 'Saint-Firmin', '05800', '0425685978'),
('','Vulco','Z.A du sud', 'Gap', '05000', '0492500899'),
('','Garage Renault','Z.A des Baraque', 'la Fare', '05500', '0492511899');


INSERT INTO permis VALUES
('','B1'),
('','B'),
('','C1'),
('','C'),
('','C1E'),
('','CE');


INSERT INTO motif_conge VALUES 
('','Enfant malade'),
('','Décés'),
('','Mariage'),
('','Congé parental'),
('','Congé');


INSERT INTO salarie VALUES

('','1960-01-13','1950-04-14','Impase de la pillule bleu','Gap','05000','Faure','Mickael','CE',1,'A','fmickael','ini01','V', '0613556428','0','30',1),
('','1970-01-13','1958-03-11','Impase des tulipe','Chorge','05750','Mickeal','Pierre','CA',1,'A','mpierre','ini02','V', '0613544466','0','30',1),
('','1970-02-12','1956-03-11','Impase des chat','Gap','05000','Henry','Pierre','CA',1,'A','Hpierre','ini03','R', '0612544262','0','30',1),
('','1981-01-13','1962-03-14','Rue des coquelicot','La Chapelle','05800','Forestier','Pierre','D',0,'A','pforestier','ini04','V', '0613594376','0','30',1),
('','1982-02-14','1975-01-12','Impasse des 3 chemins','Gap','05000','DesChamps','Francois','D',0,'B','fdeschamps','ini5','V','0664872195','0','30',1),
('','1984-05-09','1961-10-05','Avenu Doloress','Saint-Bonnet', '05500','Sécurithé','Jacques','D',1,NULL,'sjacques','ini06','R', '0654667221','0','30',1),
('','1990-01-20','1970-03-21','Rue du bidet','Gap', '05000','Pascal','Pascalle','C',0,'A','ppascalle','ini07','V','0664225346','0','30',1);
('','1990-02-25','1975-03-21','Rue du lavabot','Saint-Bonnet', '05500','Pierette','Pascalle','C',0,'A','ppascalle','ini08','L','0664225346','0','30',1);


INSERT INTO vehicule VALUES
('22-AYU-56','voiture',20,'V',1,1),
('35-DER-69','camionette',40,'V',1,2),
('15-CEZ-36','camion',80,'V',1,3),
('45-CCR-56','moyen camion',160,'V',1,4);
('95-CEC-96','gros camion',320,'V',1,5);
('12-CER-96','tres gros camion','640','V',1,6);
('20-AYU-56','voiture',20,'O',1,1),
('33-DER-69','camionette',40,'O',1,2),
('10-CEZ-36','camion',80,'X',1,3),
('95-COR-56','moyen camion',160,'X',1,4);
('99-OEC-96','gros camion',320,'X',1,5);
('12-CEO-96','tres gros camion','640','X',1,6);


INSERT INTO arret_maladie VALUES
('','2015-02-10','2015-06-05',	NULL,5);
('','2015-02-10','2015-06-05',	NULL,6);


INSERT INTO commercial VALUES 
('A',7);


INSERT INTO conge VALUES
('','2012-12-12', '2012-12-20', '2012-12-10', 'ATT', 2, 3),
('','2015-10-12', '2015-10-20', '2015-10-10', 'ATT', 3, 2);


INSERT INTO immobilisation VALUES
('','O','2016-11-30',NULL,1,'22-AYU-56'),
('','X','1996-04-30','1996-05-15',2,'15-CEZ-36');


INSERT INTO demenageur VALUES
(1,'CE',4),
(1,'C',5),
(0,'B1',6);


INSERT INTO obtention VALUES
('1992-09-12',2,1),
('1991-02-12',1,2),
('1999-05-25',3,3),
('1997-03-30',2,);


INSERT INTO dossier_demenagement VALUES
('','2 rue des alouettes', 'Gap', '05000', '1 place de la poutre','Gap','05000', '2016-12-28', '2016-12-20', '2016-12-27','2016-12-06', 'en cours', '2' , '5', 15, 1, 3, 1),
('','2 rue des peuples lieer', 'Gap', '05000', '3 place de la poutre','Saint-Bonnet','05500', '2015-12-28', '2015-12-20', '2015-12-27','2015-12-06', 'termine', '1' , '20', 100, 1, 7, 3);

INSERT INTO participer VALUES
(1,1),
(1,2),
(2,2);


INSERT INTO utiliser VALUES
(1,'22-AYU-56'),
(2,'35-DER-69');


