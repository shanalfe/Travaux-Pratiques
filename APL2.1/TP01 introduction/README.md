1 Démarrage. 
Compilez le programme donné en exemple dans le premier rappel. Ouvrez le fichier obtenu et constatez ce qui reste lisible. Lancez le programme.

La méthode println est capable d'afficher n'importe quel type de données. Écrivez une application qui définit et initialise une variable de chaque type primitif, puis affiche à la console la valeur de chacune de ces variables. Vous pouvez substituer la méthode print à la méthode println si vous ne souhaitez pas revenir à la ligne.

2 Arguments. 

Le paramètre args de la méthode principale contient tous les arguments donnés à l'exécution du programme (après le nom de la classe). Écrivez une application qui reçoit sur sa ligne de commande une liste de noms et qui salue chacune des personnes citées.

bob@box:~$ java Bonjour Denis Luc Pierre
Bonjour Denis
Bonjour Luc
Bonjour Pierre

3 Somme. 
Écrivez une application qui prend une liste d'entiers sur la ligne de commande et affiche leur somme. Pour cela, il va falloir transformer les arguments (qui sont des objets de la classe String) en int. On utilise une méthode de classe (une méthode qui ne s'applique pas à un objet mais à la classe elle-même).

String nombre = "27";
int n = Integer.parseInt(nombre); // n vaut 27

4 Tri. 
Reprenez le programme de l'exercice précédent, et au lieu d'afficher la somme, affichez la liste des entiers en ordre croissant. Une autre méthode de classe va vous y aider : la méthode sort de la classe Arrays.

Arrays.sort(tab); // trie le tableau tab par ordre croissant
La classe Arrays fait partie d'une bibliothèque (en Java on dit un package) qu'il faut inclure. Il suffit pour cela d'ajouter au tout début du fichier source la ligne suivante :

import java.util.Arrays;

5 Grille. 
Écrivez un programme qui affiche une grille dont la taille est donnée sur la ligne de commande.

bob@box:~$ java Grille 2
+-+-+
| | |
+-+-+
| | |
+-+-+
