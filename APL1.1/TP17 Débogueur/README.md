1. **Tutoriel.** Compilez le programme suivant (sans le modifier) de façon à pouvoir le déboguer :

   

   ```
   #include <stdlib.h>
   #include <stdio.h>
    
   int somme(int n, int m) {
     return n+m;
   }
    
   int main(void) {
     int valeur;
     int* p = NULL;
     printf("Entrez un entier : ");
     scanf("%d", p);
    
     printf("Le double vaut %d\n", somme(*p, *p));
     return EXIT_SUCCESS;
   }
   ```

   

   Version téléchargable : [doubleur.c](http://www.iut-fbleau.fr/sitebp/apl11/debogueur_alt/doubleur.c)

   Pour commencer, testez ce programme en l'exécutant directement dans le terminal. Que constatez-vous ?

   À l'aide du débogueur, nous allons trouver plus d'informations sur le problème. Lancez `gdb` avec votre exécutable en argument. Une fois le débogueur démarré, passez-lui la commande suivante :

   ```
   (gdb) run
   ```

   Nous rencontrons la même erreur que précédemment, mais avec plus de détails. Cela dit, ils sont un peu cryptiques. Notez que l'exécution du programme n'est pas terminée. Nous pouvons donc en profiter pour examiner l'état de la machine au moment du crash. Observez la liste des fonctions en cours d'exécution avec la commande :

   ```
   (gdb) backtrace
   ```

   Pouvez-vous en déduire quelle ligne a provoqué l'erreur ? Pour en savoir plus, nous choisissons l'appel qui nous intéresse (ici, `main`) :

   ```
   (gdb) frame 2
   ```

   Et nous pouvons ensuite voir la valeur des variables correspondantes :

   ```
   (gdb) print p
   ```

   Comprenez-vous maintenant quelle erreur s'est produite ? Vous pouvez alors quitter `gdb`.

   ```
   (gdb) quit
   ```

   Modifiez **une seule ligne** du code source pour corriger l'erreur (pas forcément celle où le programme s'est arrêté). Testez votre solution.

2. **Tutoriel (suite).** Compilez le programme suivant (sans le modifier) de façon à pouvoir le déboguer :

   

   ```
   #include <stdlib.h>
   #include <stdio.h>
   #include <string.h>
    
   void envers(const char texte[]) {
     unsigned position;
     for(position = strlen(texte)-1; position >= 0; position--) {
       printf("%c", texte[position]);
     }
     printf("\n");
   }
    
   int main(int argc, char** argv) {
     if (argc < 2) {
       printf("usage : %s <texte>\n", argv[0]);
       return EXIT_FAILURE;
     }
     envers(argv[1]);
     return EXIT_SUCCESS;
   }
   ```

   

   Version téléchargable : [envers.c](http://www.iut-fbleau.fr/sitebp/apl11/debogueur_alt/envers.c)

   Pour analyser le problème, nous commencons par les mêmes étapes que dans l'exercice précédent :

   ```
   (gdb) run toto
   ...
   (gdb) backtrace
   ...
   (gdb) print position
   ...
   ```

   La valeur affichée n'a aucun sens ! Pour savoir comment la variable a évolué, nous allons suivre l'exécution de la boucle étape par étape.

   ```
   (gdb) break 8
   ...
   (gdb) run toto
   ...
   (gdb) print position
   ...
   (gdb) continue
   ...
   (gdb) print position
   ...
   (gdb) continue
   ...
   (gdb) print position
   ...
   ```

   On continue ainsi et on constate que `position` diminue correctement jusqu'à atteindre 0. Malheureusement, la boucle ne s'arrête pas et position change brutalement au tour suivant.

   Pour voir plus en détail quand le changement a lieu, on peut avancer pas à pas plutôt que de sauter de point d'arrêt en point d'arrêt.

   ```
   (gdb) break 8
   ...
   (gdb) run toto
   ...
   (gdb) next
   ...
   (gdb) next
   ...
   ```

   Modifiez **une seule ligne** du code source pour corriger l'erreur (pas forcément celle où le programme s'est arrêté). Testez votre solution.

3. **Étapes.** Reprenez le programme du cinquième exercice du [sujet sur les adresses](http://www.iut-fbleau.fr/sitebp/apl11/adresses/). Dans le débogueur, exécutez pas-à-pas ce programme et observez l'évolution de chacune des variables.

4. **Coefficients.** Récupérez le fichier [binomial.c](http://www.iut-fbleau.fr/sitebp/apl11/debogueur_alt/binomial.c) ; compilez-le et testez-le. Vous constaterez que le résultat promis n'est pas affiché. À l'aide du débogueur, trouvez dans la mémoire le résultat voulu et modifiez *uniquement* les arguments de `printf` dans la partie «affichage du résultat» du programme pour qu'il soit affiché.

5.  **Miroir.** Reprenez le programme du deuxième exercice du [sujet sur les fonctions](http://www.iut-fbleau.fr/sitebp/apl11/fonctions/). Dans le débogueur, exécutez pas-à-pas ce programme et observez l'évolution du contenu du tableau.