1. **Phases.** Testez la fonction suivante dans `gdb` :

   

   ```
   void exemple(unsigned n) {
     if (n != 0) {
       putchar('>');
       exemple(n-1);
       putchar('<');
     } else
       putchar('O');
   }
   ```

   

   Placez un point d'arrêt sur les trois lignes qui contiennent `putchar`, lancez le programme, et à chaque fois qu'il atteint un point d'arrêt utlisez la commande `bt` pour voir la pile des appels. Pouvez-vous identifier les phases ascendantes et descendantes ?

2. **Fibonacci.** Écrivez une fonction qui calcule le `n`-ième terme de la suite de Fibonacci. Vous retrouverez sa définition dans l'énoncé du quatrième exercice du [deuxième sujet sur les boucles](http://www.iut-fbleau.fr/sitebp/apl11/boucles2/).

   Écrivez ensuite une fonction qui affiche les `m` premiers termes de la suite, et un programme qui exécute cette fonction avec `m` valant 15.

   **Remarque** Dans tout cet exercice, aucune forme de boucle n'est permise.

3. **Tableau.** Écrivez une fonction qui prend en argument un tableau de réels et affiche ses éléments séparés par une virgule. Employez la récursivité plutôt qu'une boucle.

   ```
   1.25, 47.80, 77.01, 54.23, 895.14
   ```

   

4.  **Hanoï.** Les *tours de Hanoï* sont un jeu de réflexion où `n` plateaux de tailles croissantes sont empilés les uns sur les autres pour former une tour. On souhaite déplacer la tour vers un nouveau site mais les plateaux sont trop lourds pour pouvoir en soulever plus d'un à la fois.

   On part du principe qu'il y a trois sites possibles pour poser les plateaux : le site de départ, le site d'arrivée, et un site intermédiaire. À chaque tour, on peut déplacer un unique plateau mais il faut obligatoirement prendre un plateau au somment d'une pile, on ne peut le poser qu'au sommet d'une autre pile, et on ne peut pas le poser par dessus un plateau plus petit.

   ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite1/hanoi.svg)

   

   Imaginez comment représenter en mémoire le contenu d'un site. Partant de là, écrivez et testez les fonctions suivantes :

   - initialisation des trois sites en configuration de départ,
   - affichage en mode graphique des trois sites,
   - déplacement (légal) d'un plateau,
   - détection de la configuration d'arrivée.

   

   Écrivez maintenant un programme qui permet de jouer aux tours de Hanoï. Le nombre de plateaux sera choisi sur la ligne de commande (entre 1 et 15).

5.  **Solution.** En vous basant sur les fonctions de l'exercice précédent, écrivez un programme qui prend en argument le nombre de plateaux (compris entre 1 et 15) et qui montre la solution pas à pas (1 déplacement par seconde).

   **Remarque** La solution est bien sûr une fonction récursive.