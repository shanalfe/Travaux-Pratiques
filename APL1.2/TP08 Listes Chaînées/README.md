1. **Chaînes.** En C, les chaînes de caractères ne sont pas des listes chaînées, étrangement. Mais nous pouvons arranger ça : écrivez les définitions nécessaires pour représenter une chaîne de caractères comme une liste chaînée où chaque maillon contient un unique caractère.

   Écrivez ensuite une fonction qui transforme une chaîne tableau en une chaîne liste, et une fonction qui fait l'inverse. Testez-les.

2. **Extensions.** Si nous souhaitons utiliser les chaînes définies à l'exercice précédent, il faut pouvoir remplacer complètement les anciennes chaînes. Écrivez donc des fonctions qui procurent pour les nouvelles chaînes les fonctionnalités de `puts` et `fgets`.

3. **Raffinements.** Les nouvelles chaînes introduites à l'exercice 1 n'ont pas encore à leur disposition toutes les opérations disponibles avec les chaînes traditionnelles. Ajoutez des fonctions qui remplacent `strlen`, `strcpy`, `strcat` et `strcmp`.

4.  **Flocon.** Le [Flocon de Koch](http://fr.wikipedia.org/wiki/Flocon_de_Koch) est une figure fractale dont on s'approche par une série de polygones. Le flocon de l'ordre 0 est un simple triangle équilatéral. Le flocon de l'ordre 1 est une étoile à 6 branches, etc. On passe d'un ordre à un autre en «brisant» chaque segment en quatre parties pour former une pointe.

   ![img](http://www.iut-fbleau.fr/sitebp/apl12/listes2/koch.gif)

   

   On va représenter un flocon par une liste chaînée où chaque maillon contient les coordonnées d'un point. Écrivez une fonction qui crée un flocon de l'ordre 0, et une fonction qui affiche un flocon. Vérifiez que ces fonctions marchent, puis ajoutez une fonction qui prend un flocon d'ordre *n* et qui renvoie un flocon d'ordre *n+1*. Servez-vous-en pour afficher un flocon d'ordre 10.

5.  **Crible.** Le *Crible d'Euler* est une variante du [Crible d'Ératosthène](http://fr.wikipedia.org/wiki/Crible_d'Ératosthène). On souhaite afficher la liste de tous les nombres premiers jusqu'à 1000. Pour cela, on crée une liste de tous les entiers entre 2 et 1000.

   Le premier élément est forcément premier et on peut l'afficher. En multipliant cet élément par tous les éléments de la liste (y compris lui-même), on identifie des maillons à retirer de la liste. Une fois la liste purgée, le premier élément est forcément le prochain nombre premier, et on peut donc recommencer. Et ainsi de suite jusqu'à vider entièrement la liste.

   Écrivez un programme qui met en oeuvre cet algorithme.