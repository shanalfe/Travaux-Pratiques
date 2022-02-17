1. **Fusion.** Il existe de nombreux algorithmes de tri, la plupart du temps destinés aux tableaux, mais l'un d'entre eux (parmi les plus performants) s'applique très bien aux files : il s'agit du *tri fusion* (merge sort).

   Ce tri tire son nom d'une technique très simple : si on dispose de deux files déjà triées, on peut les fusionner en une seule file triée comme on le ferait avec deux paquets de cartes.

   L'algorithme fonctionne en trois phases :

   - séparation de la file en deux moitiés égales,
   - tri de chaque moitié (par deux appels récursifs),
   - fusion des deux moitiés.

   

   Écrivez des méthodes `scinder` et `fusionner` représentant respectivement la première et la dernière phase puis une méthode `trier` rassemblant toutes les étapes.

   Testez votre tri dans un programme qui prend une liste de réels sur la ligne de commande, puis affiche les mêmes valeurs dans l'ordre croissant (utilisez une boucle énumérative pour cet affichage). Les files manipulées devront appartenir à l'une des classes de l'API Java.

   **Remarque** Pour trier, il faut nécessairement être capable de comparer deux éléments. Votre méthode de tri devra donc n'accepter que les files dont le type paramètre respecte [`Comparable`](http://www.iut-fbleau.fr/docs/java/api/java/lang/Comparable.html). Vous pouvez vous baser sur la signature de la méthode `sort` de la classe [`Collections`](http://www.iut-fbleau.fr/docs/java/api/java/util/Collections.html) qui fait un travail similaire.

2. **Chaîne.** Écrivez votre propre classe respectant [`Queue`](http://www.iut-fbleau.fr/docs/java/api/java/util/Queue.html) et stockant ses éléments dans une liste chaînée. Regardez dans la documentation de la classe [`AbstractQueue`](http://www.iut-fbleau.fr/docs/java/api/java/util/AbstractQueue.html) pour découvrir quelles méthodes vous devez concrétiser.

   Modifiez le programme de l'exercice précédent pour qu'il utilise votre version des files.

3. **Tableau.** Faites la même chose qu'à l'exercice précédent, mais avec une classe qui stocke ses éléments dans un tableau.

4.  **Serpent.** Écrivez une application qui permet de jouer au [Snake](http://fr.wikipedia.org/wiki/Snake_(jeu_vidéo)) sur une grille de 25x25 cases.

   ![img](http://www.iut-fbleau.fr/sitebp/apl31/files/snake.svg)

   Pour observer les touches du clavier, employez un [`KeyListener`](http://www.iut-fbleau.fr/docs/java/api/java/awt/event/KeyListener.html). Pour faire avancer le serpent à intervalles réguliers, utilisez un [`Timer`](http://www.iut-fbleau.fr/docs/java/api/java/util/Timer.html).

   **Remarque** Idéalement, votre application devrait employer deux files. Trouvez pourquoi avant de vous lancer dans le codage !
