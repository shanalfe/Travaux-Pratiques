1. **Séquence.** Écrivez un programme qui demande deux entiers puis affiche dans l'ordre croissant tous les entiers compris entre ces deux valeurs (au sens large).

   Faites trois versions de votre programme, et utilisez une forme de boucle différente pour chaque.

2. **Filtrage.** Reprenez le programme de l'exercice 4 du [sujet sur les conditions](http://www.iut-fbleau.fr/sitebp/apl11/conditions/). Modifiez-le pour que lorsque l'utilisateur rentre une note de bac qui n'est pas comprise entre `10` et `20`, on lui repose la question jusqu'à ce qu'il donne une note correcte.

3. **Table.** Écrivez un programme qui demande un entier, puis affiche la table de multiplication correspondante.

   ```
   entrez un entier : 5
     5 x  1 =    5
     5 x  2 =   10
     5 x  3 =   15
     5 x  4 =   20
     5 x  5 =   25
     5 x  6 =   30
     5 x  7 =   35
     5 x  8 =   40
     5 x  9 =   45
     5 x 10 =   50
   ```

   

   **Remarque** Notez l'alignement des colonnes. Dans la chaîne de format de printf, on peut ajouter une option de format pour indiquer un nombre minimum de caractères à insérer, et si nécessaire des espaces seront rajoutés à gauche.

   ```
   int i=17;
   printf("i=%12d\n", i);     /* affiche "i=          17\n" */
   ```

   

4. **Division.** Écrivez un programme qui demande à l'utilisateur une valeur entière positive ou nulle, puis une valeur entière strictement positive, et qui affiche ensuite le quotient et le reste de la division euclidienne de la première valeur par la deuxième, en utilisant dans vos calculs seulement des additions et des soustractions.

   ```
   Entrez une valeur >= 0 : 46
   Entrez une valeur > 0  : 7
   -->  46 = 6 x 7 + 4 
   ```

   

5.  **Tables.** Écrivez un programme qui affiche plusieurs tables de multiplication. Avant l'affichage de chaque table, le programme demandera à l'utilisateur sur quel entier baser la table. S'il répond `-1`, le programme s'arrêtera sans rien afficher de plus.

6.  **Bornes.** Écrivez un programme qui laisse l'utilisateur saisir autant d'entiers naturels qu'il le souhaite. Lorsque celui-ci saisit la valeur `-1`, cela signifie que la saisie est terminée. Le programme affiche alors seulement la plus petite et la plus grande des valeurs saisies.