1. **Curiosité.** Voici la fonction de MacCarthy :

   

   ```
   int f(int n) { 
     if (n>100)
       return n-10;
     else
       return f(f(n+11));
   }
   ```

   

   Quelles sont les valeurs prises par cette fonction ?

2. **Triangle.** Le [Triangle de Sierpiński](http://fr.wikipedia.org/wiki/Triangle_de_Sierpiński) est une fractale dont on s'approche par une suite de figures de complexité croissante.

   | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/triang0.png) | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/triang1.png) | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/triang2.png) |
   | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
   | *n = 0*                                                      | *n = 1*                                                      | *n = 2*                                                      |
   | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/triang3.png) | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/triang4.png) | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/triang8.png) |
   | *n = 3*                                                      | *n = 4*                                                      | *n = 8*                                                      |

   Écrivez un programme qui prend un entier naturel en argument sur la ligne de commande et trace la figure d'ordre correspondant en mode graphique.

   **Remarque** Il est utile de constater que toutes les figures à l'exception de l'ordre 0 sont composées de trois parties identiques.

3. **Mystère.** Que fait la fonction suivante ? Démontrez-le par récurrence. Pourrait-elle marcher avec des `int` ?

   

   ```
   unsigned int mystere(unsigned int a,unsigned int b) { 
     if (b==0)
       return 0;
     else
       return a*(b%2)+mystere(2*a,b/2);
   }
   ```

   

   Éliminez les opérateurs `*`, `/` et `%` sans changer le résultat de la fonction.

4.  **Dragon.** La [Courbe du Dragon](http://fr.wikipedia.org/wiki/Courbe_du_dragon) est une courbe fractale dont on s'approche par une suite de lignes brisées.

   | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/dragon1.png) | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/dragon2.png) | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/dragon3.png) |
   | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
   | *n = 1*                                                      | *n = 2*                                                      | *n = 3*                                                      |
   | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/dragon4.png) | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/dragon10.png) | ![img](http://www.iut-fbleau.fr/sitebp/apl12/recursivite2/dragon20.png) |
   | *n = 4*                                                      | *n = 10*                                                     | *n = 20*                                                     |

   Écrivez un programme qui prend un entier naturel en argument sur la ligne de commande et trace la figure d'ordre correspondant en mode graphique.

5.  **Flocon.** Reprenez le quatrième exercice du [second sujet sur les listes chaînées](http://www.iut-fbleau.fr/sitebp/apl12/listes2/) et écrivez un programme qui affiche un flocon de Koch à l'ordre 10. Les points de ce polygone ne seront pas stockés dans une liste chaînée, mais calculés en fonction des besoins par une fonction récursive comme dans l'exercice précédent.