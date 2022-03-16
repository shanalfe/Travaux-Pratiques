1. **Fraction.** *(10 points)* On souhaite écrire un programme qui prend des arguments sur sa ligne de commande et qui affiche seulement les arguments entiers (en préservant leur ordre), revient à la ligne, puis affiche les autres arguments (toujours en respectant l'ordre d'origine).

   

   ```
   bob@box:~$ java Fraction -r -1 27 x2 8
   -1 27 8
   -r x2
   ```

   

   Il va évidemment falloir tester chaque argument pour savoir s'il s'agit d'un entier, mais on ne veut pas faire ce test plusieurs fois. Choisissez une structure de données adaptée pour se souvenir des arguments qui apparaîtront sur la deuxième ligne. Vous justifierez votre choix sous la forme d'un commentaire dans votre code.

   Dans un deuxième temps, on veut éviter que les arguments commençant par un tiret apparaissent sur la deuxième ligne. Utilisez (obligatoirement) la méthode `removeIf` de votre structure de données pour éliminer les indésirables.

   **Attention** Lorsque vous réalisez une interface, il n'est pas nécessaire de redéfinir les méthodes qualifiées de `static` ou `default`.

2. **Complétion.** *(10 points)* Un *arbre de complétion* est un arbre dont tous les noeuds (sauf la racine) contiennent un caractère et un booléen. Il sert à représenter un ensemble de mots sans redondance et de manière à faciliter des opérations telles que l'autocomplétion.

   ![img](http://www.iut-fbleau.fr/sitebp/apl31/controle2021/completion.svg)

   On considère qu'un mot «appartient» à l'arbre si un fils de la racine contient la première lettre du mot, un fils de celui-ci contient la deuxième lettre du mot, et ainsi de suite jusqu'à trouver le nœud qui contient la dernière lettre du mot et qui doit obligatoirement contenir également `vrai` dans son champ booléen. L'arbre dessiné ci-dessus contient donc les mots «à», «bar», «bal» et «balle», mais pas «ball».

   Écrivez les définitions des classes nécessaires pour représenter un tel arbre de complétion en incluant une méthode qui permet d'ajouter un mot et une méthode qui affiche tous les mots contenus dans l'arbre et qui commencent par un préfixe donné.

   Écrivez un programme qui crée un arbre vide, le remplit avec les mots de [ce fichier texte](http://www.iut-fbleau.fr/sitebp/apl31/controle2021/mots.txt), et enfin affiche seulement les mots qui correspondent au préfixe donné sur la ligne de commande.

   

   ```
   bob@box:bob_apl31_bis$ java Question2 int
   intéresse
   interfaces
   ```