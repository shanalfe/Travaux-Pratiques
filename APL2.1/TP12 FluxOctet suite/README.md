1. **Mémoire.** Reprenez le deuxième exercice du [premier sujet sur les flux d'octets](http://www.iut-fbleau.fr/sitebp/apl21/octets1/) et faites en sorte que l'application mémorise également la couleur de fond choisie.

   **Remarque** On souhaite ici stocker dans un fichier à la fois une position (un objet de la classe [`Point`](http://www.iut-fbleau.fr/docs/java/api/java/awt/Point.html)), une taille (un objet de la classe [`Dimension`](http://www.iut-fbleau.fr/docs/java/api/java/awt/Dimension.html)), et une couleur (un objet de la classe [`Color`](http://www.iut-fbleau.fr/docs/java/api/java/awt/Color.html)).

2. **Polygone.** Le fichier [polygone.bin](http://www.iut-fbleau.fr/sitebp/apl21/octets2/polygone.bin) contient la liste des points formant un polygone. Pour chaque point, un `int` décrit d'abord l'abcisse, puis un autre `int` décrit l'ordonnée.

   Écrivez une application qui affiche ce polygone dans une fenêtre à l'aide de la méthode `fillPolygon`.

3. **Homothétie.** Le polygone de l'exercice précédent est un peu petit. Écrivez une application qui lit un fichier au format décrit plus haut et génère un nouveau fichier décrivant un polygone deux fois plus grand.

   En utilisant cette application deux fois de suite, obtient-on un polygone quatre fois plus gros ?

4.  **Traînée.** Un véhicule évolue dans une grille de 10 colonnes par 10 lignes. On souhaite visualiser à la fois sa position actuelle et les 7 dernières cases visitées. Le véhicule peut aller tout droit, à droite ou à gauche, et lorsqu'il est adjacent à un bord il peut «sortir» et se retrouve alors sur le bord opposé.

   ![img](http://www.iut-fbleau.fr/sitebp/apl21/octets2/maquette.svg)

   Écrivez une application dont l'apparence s'inspire de cette maquette et qui permet de déplacer le véhicule en cliquant sur la case de destination (les autres cases ne sont pas cliquables). L'état du déplacement sera sauvegardé d'une exécution à l'autre en sérialisant les objets du modèle.