1.Listes. 
La classe ArrayList<E> utilise un tableau redimensionnable pour stocker une liste d'éléments.

a. Construisez une liste de Integer, une liste de Float et une liste de Number. Ajoutez-leur des éléments à l'aide de la méthode add. Quelles listes peuvent recevoir des Integer ? Quelles listes peuvent recevoir des Float ? Quelles listes peuvent recevoir des Long ?
b. La méthode addAll permet de transvaser une liste dans une autre. Examinez sa définition. Pouvez-vous prédire quelle liste peut être transvasée dans quelle autre ? Faites le test.

2.Tableaux. 
La classe Arrays contient de nombreuses méthodes facilitant la manipulation des tableaux.

a. Écrivez un programme qui affiche à la console tous les arguments de sa ligne de commande. Plutôt qu'une boucle, utilisez pour cela une des méthodes toString de la classe Arrays.
b. Affichez seulement les cinq premiers arguments de la ligne de commande ; appuyez-vous sur une des méthodes copyOf de la classe Arrays.
c. On souhaite maintenant afficher les arguments dans l'ordre du dictionnaire. La classe Arrays offre une fois encore une méthode adaptée : sort. Malheureusement, comparer deux String n'est pas le même travail que comparer deux Integer, donc la méthode sort a besoin d'un objet qui se charge de cette tâche : un Comparator<T>. Pouvez-vous expliquer le rôle du mot-clé super dans la définition de la méthode sort ?
Remarque Comparator<T> est en fait une interface, vous devrez donc trouver dans la documentation une classe qui la concrétise.

3. Fréquence. 
On souhaite concevoir une méthode qui prend un tableau en argument et renvoie l'élément qui s'y répète le plus. En cas d'égalité, l'élément d'indice le plus faible sera privilégié. Cette méthode devra marcher pour des tableaux contenant tous types d'objet.

4. Association. La méthode de l'exercice précédent ne donne pas toutes les informations que l'on pourrait désirer. Pour lui permettre de renvoyer à la fois l'élément le plus répété et sa fréquence (le nombre de répétition), on va construire une classe Association contenant un élément (de type variable) et une fréquence (de type entier). Il faudra prévoir des accesseurs pour chaque attribut, un constructeur et une surcharge de la méthode toString. Dans un diagramme de classe, ça se représenterait ainsi :

 	 	 	 	E
 	 	Association	 
 	 	 	 	 
- element : E
- frequence : entier	 
+ getElement() : E
+ setElement(in elt : E)
+ getFrequence() : entier
+ setFrequence(in f : entier)
+ toString() : String	 

5. Fréquences. 

On peut encore améliorer les résultats de la méthode de l'exercice précédent : on souhaite à présent obtenir la liste de tous les éléments du tableau, avec la fréquence de chacun d'entre eux.

Transformez la classe Association en lui ajoutant un champ suivant pour en faire une liste chaînée.
Définissez une classe Liste qui contient l'adresse du premier maillon de la liste, et qui possède une surcharge de la méthode toString pour afficher le contenu de toute la liste.
Donnez à la classe Liste une méthode ajouter qui prend un élément en argument. Si l'argument est déjà présent dans la liste, sa fréquence doit être augmentée de 1. Dans le cas contraire, un nouveau maillon contenant l'élément et une fréquence de 1 est ajouté à la liste.
Modifiez la méthode de l'exercice précédent pour qu'elle renvoie un objet de la classe Liste qui contient les fréquences de tous les éléments présents dans le tableau.
Pour les plus courageux, enlevez toutes les boucles de cet exercice en vous appuyant sur la récursivité.

