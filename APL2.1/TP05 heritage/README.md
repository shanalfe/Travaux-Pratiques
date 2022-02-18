1. Documentation.

    

   La description de l'API Java est disponible en version local ou sur le site d'Oracle

   . Utilisez cette documentation pour répondre aux questions suivantes :

   - Dans quel package peut-on trouver la classe [`String`](http://www.iut-fbleau.fr/docs/java/api/java/lang/String.html) ? De quelle classe hérite-t-elle ? Combien de méthodes sont transmises par la classe mère ? Sur celles-ci, combien sont redéfinies ?
   - Écrivez un programme qui affiche tous les argument de sa ligne de commande, convertis en majuscules. Trouvez dans la classe [`String`](http://www.iut-fbleau.fr/docs/java/api/java/lang/String.html) de quoi vous simplifier le travail.
   - Écrivez un programme qui prend un entier *exprimé en base 8* sur la ligne de commande, puis affiche la même valeur en base 16. Trouvez dans la classe [`Integer`](http://www.iut-fbleau.fr/docs/java/api/java/lang/Integer.html) de quoi vous simplifier le travail.

2. **Grisaille.** Définissez une classe `Gris` qui dérive de la classe [`Color`](http://www.iut-fbleau.fr/docs/java/api/java/awt/Color.html) mais ne permet de créer que des gris (c'est à dire des couleurs où les trois composantes sont égales). Pouvez-vous utiliser un objet de la classe `Gris` avec la méthode `setBackground` pour choisir la couleur de fond d'un composant ?

3. **Métrique.** La classe [`Paper`](http://www.iut-fbleau.fr/docs/java/api/java/awt/print/Paper.html) sert à représenter la géométrie d'une feuille de papier (dans le but de faire des impressions). Malheureusement, cette classe utilise le système impérial obsolète pour toutes ses mesures.

   - Écrivez la définition d'une classe dérivée de [`Paper`](http://www.iut-fbleau.fr/docs/java/api/java/awt/print/Paper.html), dont le constructeur sans argument crée une feuille au format A4 avec une marge de 1,5cm de chaque coté.
   - Ajoutez une méthode `getMetric...` pour chaque méthode `get...`, utilisant les millimètres plutôt que les 1/72ème de pouce.
   - Idem pour les méthodes `set...`.
   - Testez votre travail à chaque étape par un court programme !

   

4.  **Nuancier.** On souhaite écrire une application qui se comporte comme un nuancier : elle permet de voir des couleurs côte à côte.

   Pour cela, nous allons commencer par définir un composant graphique spécialisé nommé `Nuance`. Celui-ci devra avoir une taille préférée de 100 pixels de large par 100 pixels de haut, et devra indiquer les composants RVB de sa couleur de fond dans sa partie haute. De quelle classe pouvez-vous hériter ?

   Écrivez une application qui prend une liste de couleurs sur la ligne de commande (au format `#RRVVBB`) et qui affiche ces couleurs horizontalement à l'aide du composant défini plus haut.

   ```
   bob@box:~$ java Nuancier "#88E900" "#0088E9" "#E90088"
   ```

   ![img](http://www.iut-fbleau.fr/sitebp/apl21/heritage/Nuancier.jpg)

   **Remarque** Pour que la fenêtre prenne une taille adaptée à son contenu plutôt qu'une taille arbitraire, utilisez la méthode `pack` à la place de la méthode `setSize`.
