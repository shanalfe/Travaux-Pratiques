1. **Chaînée.** Nous allons avoir besoin de stocker des caractères dans une pile pour le troisième exercice. Afin de préparer le terrain, nous allons réaliser une telle pile à l'aide d'une liste chaînée et la tester.

   Écrivez la définition d'un maillon, et la définition de trois fonctions qui représentent les opérations **push**, **pop** et **empty**. *Dans un autre fichier,* écrivez un programme de test qui permet à son utilisateur de donner une suite d'ordres à une pile.

   ```
   bob@box:~$ ./a.out
   La pile attend vos ordres
   > +J
   Le caractère J a été ajouté
   > -
   Le caractère J a été supprimé
   > -
   La pile est vide !
   > +X
   Le caractère X a été ajouté
   > ++
   Le caractère + a été ajouté
   > -
   Le caractère + a été supprimé
   > q
   Au revoir
   ```

   

2. **Extras.** Certaines piles supportent deux opérations supplémentaires : **top** renvoie la donnée la plus récente mais ne la retire pas de la pile, tandis que **clear** retire toutes les données de la pile et ne renvoie rien. Ces opérations peuvent être vues comme des combinaisons des opérations basiques, mais en leur donnant leur propre codage on peut en améliorer les performances.

   Ajoutez au programme du premier exercice deux fonctions qui représentent ces opérations. Imaginez et réalisez de nouveaux ordres pour tester ces fonctions.

3. **Parenthèses.** Les fichiers sources en langage C contiennent trois formes de parenthèses : `{}`, `()` et `[]`. Un fichier source qui respecte la grammaire du C ne peut pas contenir ces symboles dans n'importe quel ordre : on dit qu'il est *bien parenthésé*.

   Nous allons nous substituer au compilateur et écrire un programme qui vérifie qu'un fichier source est bien parenthésé (mais nous ne nous préoccuperons pas des autres aspects de la grammaire du C).

   Les parenthèses vont par couple. Si on lit le fichier en ordre séquentiel, on trouvera en premier la parenthèse ouvrante. Il faut donc la mémoriser en attendant de trouver la parenthèse fermante qui lui correspond : nous avons besoin d'une structure de données. Nous avons de plus besoin de pouvoir ajouter des éléments un par un à cette structure.

   Lorsque nous lisons une parenthèse fermante, parmi toutes les parenthèses ouvantes mémorisées, c'est forcément la plus récente qui doit lui être associée. Notre structure de données doit donc pouvoir nous fournir l'élément le plus récemment ajouté : c'est une pile !

   En vous basant sur ces idées et sur l'exemple de pile développé dans les deux exercices précédents, écrivez le programme demandé.

   **Remarque** Pour ne pas alourdir l'exercice, nous supposerons qu'aucun des symboles qui nous intéressent ne se trouvent dans une chaîne de caractères ou dans un commentaire du fichier source.

4. **Remplaçant.** Un programme qui a besoin d'une pile n'a pas nécessairement besoin d'une liste chaînée. Il existe plus d'une façon de coder une pile, et un tableau peut parfois faire l'affaire. Reprenez les fichiers du deuxième exercice. Recodez les fonctions qui représentent les cinq opérations sur une pile pour qu'elle utilisent un tableau (dynamique) à la place d'une liste chaînée.

   Idéalement, on ne devrait rien avoir à changer dans la fonction principale, mais il est probable que ça ne marche pas du premier coup. Si nécessaire, modifiez tous les fichiers de sorte que l'on puisse compiler le programme pour utiliser soit une liste chaînée, soit un tableau rien qu'en changeant la liste des fichiers sources dans le `Makefile`. Vous aurez sans doute besoin de prévoir un *constructeur* et un *destructeur* : des fonctions pour respectivement créer et détruire la pile.

5.  **Balises.** Dans un fichier au format HTML, on trouve un concept similaire à celui que l'on a exploré dans le troisième exercice. L'ordre dans lequel on y trouve des balises ouvrantes et fermantes suit les mêmes règles. Adaptez votre programme pour qu'il vérifie du HTML au lieu du C. Des exemples de fichiers HTML pour tester votre programme sont disponibles [ici](http://www.iut-fbleau.fr/sitebp/apl12/piles/exemples.tar.gz).

   **Remarque** Ici aussi on doit simplifier pour ne pas alourdir l'exercice : on prendra pour hypothèse que toutes les occurrences des symboles `<` et `>` dans le fichier HTML servent à délimiter une balise ouvrante ou fermante.