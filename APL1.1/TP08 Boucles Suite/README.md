1. **Devinette.** Écrivez un programme qui donne cinq tentatives à l'utilisateur pour deviner un nombre entre 0 et 100. À chaque tentative infructueuse, le programme offrira un indice en affichant `+` ou `-`.

   Utilisez des constantes nommées pour représenter le nombre de tentatives et la valeur maximum.

2. **Primarité.** Écrivez un programme qui demande à l'utilisateur un entier naturel puis indique si cet entier est premier.

   **Remarque** Un entier est premier si et seulement si il admet exactement deux diviseurs stricts : 1 et lui-même.

3. **Table.** Écrivez un programme qui affiche la table de multiplication.

   ```
     X  |   0   1   2   3   4   5   6   7   8   9  10
   -----+--------------------------------------------
     0  |   0   0   0   0   0   0   0   0   0   0   0
     1  |   0   1   2   3   4   5   6   7   8   9  10
     2  |   0   2   4   6   8  10  12  14  16  18  20
     3  |   0   3   6   9  12  15  18  21  24  27  30
     4  |   0   4   8  12  16  20  24  28  32  36  40
     5  |   0   5  10  15  20  25  30  35  40  45  50
     6  |   0   6  12  18  24  30  36  42  48  54  60
     7  |   0   7  14  21  28  35  42  49  56  63  70
     8  |   0   8  16  24  32  40  48  56  64  72  80
     9  |   0   9  18  27  36  45  54  63  72  81  90
    10  |   0  10  20  30  40  50  60  70  80  90 100
   ```

   Utilisez dans votre programme une constante nommée pour représenter la taille de la table (10 dans l'exemple ci-dessus). Votre programme devra encore fonctionner si on choisit une taille différente en changeant la valeur de cette constante.

   

4. **Progression.** Ecrire un programme qui affiche le `n`ième terme de la suite de Fibonacci, définie par la relation de récurrence suivante :

   ![img](http://www.iut-fbleau.fr/sitebp/apl11/boucles2/fibonacci.svg)

5.  **Figures.** Un théorème dû à Lagrange affirme que tout entier naturel peut s'écrire comme la somme de quatre carrés. Par exemple :

   ```
   28=25+1+1+1
   28=16+4+4+4
   28=9+9+9+1
   ```

   Ou encore :

   ```
   10=9+1+0+0
   10=4+4+1+1
   ```

   Écrivez un programme qui demande un entier naturel, et affiche toutes ses décompositions sous la forme d'une somme de 4 carrés (attention, chaque décomposition ne doit apparaître qu'une seule fois).

   

6.  **Facteurs.** Écrivez un programme qui demande un entier naturel non nul, et affiche sa décomposition en facteurs premiers. Par exemple,

   ```
   Entrez un entier naturel non nul : 280
   280 = 2*2*2*5*7
   ```

   Remarque

    

   Pour tous les entiers naturels, le plus petit diviseur autre que 1 est nécessairement premier.

   