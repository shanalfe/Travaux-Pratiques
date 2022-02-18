Vous trouverez [ici](http://www.iut-fbleau.fr/sitebp/doc_make/) tout ce que vous devez savoir avant de vous lancer dans les exercices.

1. **En-tête.** Allez lire le fichier d'en-tête de la bibliothèque graphique (`/usr/include/graph.h`). Trouvez-y un exemple de chaque catégorie d'éléments que l'on peut trouver dans un tel fichier.

2. **Tâtonnements.** Téléchargez [exo1.tar.gz](http://www.iut-fbleau.fr/sitebp/apl11/make/exo1.tar.gz) sur votre compte. Désarchivez-le et vous y trouverez des fichiers constituant un projet de répertoire téléphonique.

   

   - Lancez `make` et notez les commandes invoquées. Leur ordre correspond-il à l'ordre des règles dans le `Makefile` ?

   - Lancez `make` à nouveau. Observez-vous les mêmes commandes ? Pourquoi ?

   - Ajoutez une ligne blanche à la fin de `repertoire.c` et lancez `make` encore une fois. Les commandes exécutées sont-elles celles que vous auriez prédites ?

   - Lancez la commande ci-desous. Quel résultat obtenez-vous ? À quoi cela peut-il servir ?

     ```
     bob@box:~$ gcc -MM main.c
     ```

   

3. **Schisme.** Dans le même projet que pour l'exercice précédent , on souhaite placer la fonction `saisir_option` (initialement dans `main.c`) dans son propre fichier. Créez un fichier `options.c` et placez-y le code nécessaire. Créez ensuite le fichier `options.h` correspondant. Modifiez ensuite le `Makefile` pour que les nouveaux fichiers soient compilés et/ou inclus lorsque c'est nécessaire.

   **Remarque** Dans un projet réel, on ne créerait pas un fichier pour une seule fonction !

4.  **Ventilation.** Téléchargez [exo2.tar.gz](http://www.iut-fbleau.fr/sitebp/apl11/make/exo2.tar.gz) sur votre compte. Désarchivez-le et vous y trouverez un unique fichier constituant un projet de file d'attente.

   Imaginez un découpage rationnel des fonctions en plusieurs parties relativement indépendantes et créez un fichier pour chacune de ces parties. Déplacez les fonctions et définitions dans les fichiers appropriés. Écrivez les fichiers d'en-tête correspondants puis vérifiez que la compilation produit toujours un résultat en état de marche.

5.  **Configuration.** Reprenez l'exercice précédent et écrivez un `Makefile` pour en assurer la compilation.