1. Vote. 

Représentez les données de ce tableau dans votre base de données personnelle.

Compétiteur	Votants	Points
Pays-Bas	Italie	5
Pays-Bas	Russie	5
Italie	Pays-Bas	16
Italie	Russie	1
Russie	Pays-Bas	5
Russie	Italie	8

Écrivez en Java un programme qui prend en argument le pays d’un compétiteur et qui affiche la liste des points obtenus dans chaque autre pays, ainsi que le total. Ce programme doit marcher même si on ajoute des données dans vos tables.

bob@box:~$ java -cp "/export/documents/mariadb-client.jar:." Vote Italie
  Pays-Bas  16
  Russie     1
           ---
  Total     17
Remarque Prenez soin des ressources communes : dans tous les cas où vous avez ouvert une connexion avec le serveur MariaDB, vous devez impérativement la fermer proprement.

2 Victoire. 
Écrivez une application qui affiche le pays ayant le plus de points cumulés, ainsi que son score. Le bouton permet de rafraîchir l’affichage pour refléter les changements de la base de données.

![image](https://user-images.githubusercontent.com/69315804/152997825-ad1ac506-5f2d-4efc-9606-9b9ba30b74c9.png)

