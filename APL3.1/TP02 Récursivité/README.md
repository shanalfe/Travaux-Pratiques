1. Appels. 

Écrivez une application contenant une méthode récursive factorielle, et une méthode principale qui affiche le résultat de factorielle sur un entier passé à la ligne de commande.

bob@box:~$ java Appels 4
4! = 24
Ajoutez ensuite un appel à la méthode dumpStack (de la classe Thread) dans le cas de base de la récursivité. Testez le résultat obtenu avec différentes valeurs.

Enlevez l’appel à dumpStack, et ajoutez à la méthode factorielle des affichages aux étapes suivantes :

au début de la méthode, affichez la valeur des arguments,
à la fin de la méthode, affichez la valeur renvoyée.
Ajoutez enfin à la méthode factorielle un paramètre indentation qui vaudra 0 lors de l’appel dans la méthode principale, et qui augmente de 1 à chaque appel récursif. Indentez les affichages de la version précédente d’autant de tabulations.

2. Tableaux. 
Écrivez sans employer de boucle une application qui prend une suite d’entiers relatifs sur la ligne de commande, les transforme en un tableau d’int, puis affiche le contenu du tableau à la console.

Ajoutez une méthode qui calcule le nombre d’entiers pairs dans ce tableau. La méthode principale devra afficher à la console le résultat de cette méthode.

Ajoutez une méthode qui calcule le plus grand entier de ce tableau. L’affichage du maximum devra également être fait dans la méthode principale.

Modifiez l'affichage du tableau afin que les éléments apparaîssent dans l'ordre inverse.

3. Fibonacci. La célèbre suite de Fibonacci est définie par les équations suivantes :

![image](https://user-images.githubusercontent.com/69315804/151236073-7b11978d-ed6c-4e8a-aeb9-9c402fe92c95.png)


Écrivez une méthode récursive fibonacci qui reflète ces équations directement pour calculer le terme voulu de cette suite. La méthode principale invoquera la méthode fibonacci pour calculer le i-ème terme de la suite, i étant un entier positif passé sur la ligne de commande.

Ajoutez ensuite à la méthode fibonacci des affichages similaires à ceux de la dernière version de factorielle. Observez l'arborescence des appels.

4. Parité. Écrivez un prédicat pair qui prend un entier naturel en argument et qui renvoie vrai si et seulement si cet entier est pair, et un prédicat impair sur le même principe.

Remarque Ces méthodes ne devront recourir ni aux boucles ni aux opérateurs binaires (à part ==).

5. Flocon. Le Flocon de Koch est une figure fractale dont on s'approche par une série de polygones. Le flocon de l'ordre 0 est un simple triangle équilatéral. Le flocon de l'ordre 1 est une étoile à 6 branches, etc. On passe d'un ordre à un autre en «brisant» chaque segment en quatre parties pour former une pointe.


![image](https://user-images.githubusercontent.com/69315804/151236196-0326c128-6d0b-41a5-bbba-79be989cf1be.png)


Écrivez une méthode récursive qui prend un entier n en argument en renvoie le flocon d'ordre n sous la forme d'un objet de la classe Polygon. Utilisez cette méthode dans une application qui prend un ordre sur la ligne de commande et ouvre une fenêtre contenant un flocon de cet ordre.
