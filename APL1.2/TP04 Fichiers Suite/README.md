1. **Compteur.** Écrivez un programme qui affiche le nombre de fois qu'il a été exécuté.

   

   ```
   bob@box:~$ ./a.out
   14
   bob@box:~$ ./a.out
   15
   bob@box:~$ ./a.out
   16
   ```

   

2. **Image.** Le fichier [image.bin](http://www.iut-fbleau.fr/sitebp/apl12/fichiers2/image.bin) contient une image dans un format exotique. On y trouve :

   - un `int` représentant la largeur de l'image en pixels,
   - un `int` représentant la hauteur de l'image en pixels,
   - la `couleur` du pixel supérieur gauche de l'image,
   - la `couleur` du pixel immédiatement en dessous,
   - et ainsi de suite, de haut en bas puis colonne par colonne.

   

   Écrivez un programme qui affiche l'image dans une fenêtre graphique.

3. **Hexadécimal.** La commande `hexdump` permet l'affichage d'un fichier à la console, dans le cas où le fichier ne contient pas que du texte. Chaque ligne contient les valeurs de 16 octets du fichier affichés en notation hexadécimale.

   Écrivez un programme qui donne le même résultat que hexdump (sans option).

4.  **Listes.** Dans le cadre de cet exercice, une liste est un fichier contenant un ou plusieurs réels au format `double` little-endian.

   Écrivez un programme qui crée une liste en demandant une par une les valeurs à inclure à l'utilisateur.

   Écrivez un programme qui affiche une liste.

   Écrivez un programme qui vérifie si une liste est croissante.

5.  **Fusion.** Écrivez un programme qui prend deux listes croissantes (au sens de l'exercice précédent) et qui crée une troisième liste croissante formée de l'union des éléments de chaque liste.