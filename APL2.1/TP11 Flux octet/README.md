1. **Image.** Le fichier [image.bin](http://www.iut-fbleau.fr/sitebp/apl21/octets1/image.bin) représente une image de 768 pixels de large par 1024 pixels de haut, dans un format non standard. Chaque pixel de cette image est décrit par trois octets successifs : rouge, vert puis bleu. Les pixels sont décrits les uns à la suite des autres, de gauche à droite puis de haut en bas.

   Écrivez une application qui lit ce fichier puis ouvre une fenêtre de la taille adéquate dans laquelle apparaît l'image correspondante.

   **Remarque** La méthode `getImage` vue précédemment n'est pas compatible avec le format employé ici ; vous devrez donc inventer votre propre méthode pour la remplacer. Le stockage de l'image dans l'application peut prendre la forme d'un objet de la classe [`BufferedImage`](http://www.iut-fbleau.fr/docs/java/api/java/awt/image/BufferedImage.html)(une classe dérivée de [`Image`](http://www.iut-fbleau.fr/docs/java/api/java/awt/Image.html)).

2. **Mémoire.** Reprenez le premier exercice du [premier sujet sur les évènements](http://www.iut-fbleau.fr/sitebp/apl21/evenements1/) et faites en sorte qu'à chaque démarrage de l'application, la fenêtre reprenne la position et les dimensions qu'elle possédait à la fin de l'exécution précédente.

3. **Coloriage.** Écrivez une application qui prend une couleur sur la ligne de commande et génère un fichier image au format décrit au premier exercice et dont tous les pixels sont de la couleur donnée.

   ```
   bob@box:~$ java Coloriage #88E900
   ```

   Modifiez ensuite cette application pour que l'on puisse lui passer une seconde couleur en ligne de commande, auquel cas le fichier généré contiendra un damier de huit lignes et huit colonnes alternant les deux couleurs.

4.  **Palette.** Les images générées par l'application de l'exercice précédent sont énormes pour pas grand chose. Nous n'allons pas nous attaquer à un algorithme de compression mais simplement profiter de la notion de *palette* pour améliorer notre format de fichier.

   La palette est l'ensemble des couleurs employées dans une image. Dans le cas où la palette ne contient pas plus de 256 couleurs, il est judicieux d'adopter un nouveau format :

   - le premier octet donne la taille de la palette,
   - les octets suivants, par groupe de 3, décrivent les couleurs de la palette,
   - chaque octet suivant représente un pixel de l'image, de gauche à droite puis de bas en haut, non pas en tant que couleur mais simplement en tant qu'indice dans la palette.

   

   Adaptez à ce nouveau format aussi bien l'application de génération des fichiers que l'application de visualisation des images.