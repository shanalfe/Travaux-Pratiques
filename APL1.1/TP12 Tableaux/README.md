1. **Remplissage.** Écrivez un programme qui déclare un tableau de 10 cases de type `int`, puis le remplit avec des valeurs choisies aléatoirement entre -50 et 50, et enfin affiche le contenu du tableau.

   ```
   bob@box:~$ ./a.out
   +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
   |  12 |   0 | -49 |  35 |   8 |  -2 |  50 |  33 | -40 |  -1 |
   +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
   ```

   **Remarque** Les fonctions nécessaires pour la génération pseudo-aléatoire sont décrites dans [le deuxième sujet sur les boucles](http://www.iut-fbleau.fr/sitebp/apl11/boucles2/).

2. **Maximum.** Modifiez le programme de l'exercice précédent pour qu'il identifie le plus grand élément du tableau.

   ```
   bob@box:~$ ./a.out
                              |
                              V
   +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
   |  27 | -33 | -12 | -37 |  48 |  -7 |   0 | -50 |  -3 | -13 |
   +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
   ```

3. **Recherche.** Modifiez le programme du premier exercice pour qu'après l'affichage du tableau, l'utilisateur puisse entrer une valeur. Le programme affichera alors le plus petit indice où on peut trouver cette valeur dans le tableau (ou `-1` si la valeur ne s'y trouve pas).

4. **Miroir.** Modifiez le programme du premier exercice pour qu'il inverse l'ordre des valeurs du tableau. Vous afficherez le tableau avant et après inversion pour vérifier votre travail.

5.  **Filtre.** Reprenez le programme du premier exercice. Après avoir affiché le tableau, retirez-en toutes les valeurs négatives (sans changer l'ordre des autres valeurs) puis affichez-le à nouveau.

6.  **Circulation.** Modifiez le programme du premier exercice pour qu'il avance les valeurs du tableau de 4 indices (les valeurs à la fin se retrouveront au début). Vous afficherez le tableau avant et après permutation pour vérifier votre travail.

   **Remarque** La valeur 4 est arbitraire. Faites-en une constante nommée et assurez-vous que le programme marche aussi pour d'autres valeurs de décalage.