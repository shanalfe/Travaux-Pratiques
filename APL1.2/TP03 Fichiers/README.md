1. **Records.** Le fichier [top10](http://www.iut-fbleau.fr/sitebp/apl12/fichiers1/top10) contient la liste des dix meilleurs scores d'un jeu video ainsi que le sigle des joueurs qui les ont obtenus. Les scores sont des entiers au format `int` little-endian. Les sigles sont formés de trois caractères ASCII tous imprimables. Dans le fichier il y a d'abord le score du meilleur joueur, puis son sigle, puis le score du second meilleur joueur, puis son sigle, et ainsi de suite.

   Écrivez un programme qui lit ce fichier puis affiche le «Hall of Fame».

   

   ```
   bob@box:~$ ./a.out
   004867123 BOB
   004854739 <O>
   002587684 \o/
   002483729 KIX
   001982491 :-)
   001444726 ALF
   000758162 LOL
   000758161 T_T
   000048214  GG
   000000001 @_@
   ```

   

2. **Challenger.** Écrivez un programme qui prend en argument sur la ligne de commande un score et un nom et qui met à jour le fichier `top10` de l'exercice précédent.

   

   ```
   bob@box:~$ ./a.out 1581427 '>_>'
   004867123 BOB
   004854739 <O>
   002587684 \o/
   002483729 KIX
   001982491 :-)
   001581427 >_>
   001444726 ALF
   000758162 LOL
   000758161 T_T
   000048214  GG
   ```

   

3.  **Copie.** Écrivez un programme qui copie un fichier sur le modèle de la commande `cp`.

   

   ```
   bob@box:~$ ./a.out cute_overload.gif chaton.gif
   ```

   

   Cette commande doit créer un nouveau fichier nommé `chaton.gif` dont le contenu soit identique à celui de `cute_overload.gif`.

   

   ```
   bob@box:~$ ./a.out -a part2.txt part1.txt
   ```

   

   Cette commande doit ajouter le contenu du fichier `part2.txt` à la fin du contenu préexistant dans le fichier `part1.txt`.

4.  **Chiffrement.** Écrivez un programme qui permette de chiffrer/déchiffrer un fichier par la méthode suivante :

   - les octets de rang pair sont complémentés à 1,
   - les octets de rang impair sont remplacés par leur `xor` avec l'octet précédent.

   

5.  **Rectangles.** Récupérez les fonctions du cinquième exercice du [sujet sur les structures](http://www.iut-fbleau.fr/sitebp/apl12/structures) et écrivez avec un programme qui permet à son utilisateur de dessiner autant de rectangles qu'il le souhaite, les uns par dessus les autres. En appuyant sur une touche, on termine le programme, mais à la prochaine exécution, tous les rectangles dessinés précédemment devront être encore là.