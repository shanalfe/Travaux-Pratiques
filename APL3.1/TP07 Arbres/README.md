Répertoires. Écrivez une application qui prend sur la ligne de commande le nom d'un répertoire, puis construit un arbre homogène représentant ce répertoire et son contenu (fichiers, sous-répertoires et leur contenu, etc...) en stockant le nom de chaque élément. L'application devra ensuite afficher l'arbre obtenu en s'inspirant de la commande tree (en plus simple).

bob@box:~$ java Repertoires toto
toto
  sous1
    fichier1
    fichier2
  sous2
    fichier3
  fichier4
Le constructeur et la méthode d'affichage devront être récursifs. L'exploration de l'arborescence des répertoires est possible grâce à la méthode listFiles de la classe File.

Préfixe. Reprenez le premier exercice du sujet sur les piles, et remplacez l'affichage du résultat par un affichage de l'expression en notation polonaise (non inversée).

bob@box:~$ java Prefixe 8 6 1 2 + 9 + + / 5 x 7 -
= - x / 8 + 6 + + 1 2 9 5 7
Remarque Pour cela vous devez transformer l'expression arithmétique en un arbre de syntaxe abstraite, hétérogène et binaire. On employera la même pile que dans l'exercice d'origine pour y parvenir, mais on y stockera des nœuds plutôt que des entiers.

 Infixe. Reprenez l'exercice précédent, en affichant le résultat en notation classique (avec un maximum de parenthèses pour ne pas avoir à se soucier des priorités).

bob@box:~$ java Infixe 8 6 1 2 + 9 + + / 5 x 7 -
= (((8/(6+((1+2)+9)))x5)-7)
 Variables. Reprenez l'exercice précédent, en permettant l'utilisation de variables (une lettre majuscule) dans les expressions.

bob@box:~$ java Variables U 6 1 2 + V + + / V x 7 -
= (((U/(6+((1+2)+V)))xV)-7)
Remarque On ne stocke généralement pas le nom des variables dans l'arbre mais seulement un numéro d'identification. C'est la table des symboles qui donne son numéro à chaque variable. Quelle est la structure de donnée la plus adaptée pour cette table ?

Ajoutez ensuite une deuxième phase où on demande à l'utilisateur la valeur de chaque variable, puis on évalue l'expression.

bob@box:~$ java Variables U 6 1 2 + V + + / V x 7 -
= (((U/(6+((1+2)+V)))xV)-7)
U ? 29
V ? 5
= 3
