1. **Arithmétique.** La notation postfixe, ou notation polonaise inversée, est une façon d'écrire les expressions arithmétiques destinée à simplifier le fonctionnement des calculatrices (elle est encore utilisée aujourd'hui par Texas Instruments).

   Dans cette notation, on place tout simplement l'opérateur après ses opérandes. Cela permet de faire disparaître les parenthèses car l'ordre des opérations n'est alors plus ambigu. Par exemple, l'expression `(12 + 64) × 35` en notation usuelle s'écrit `12 64 + 35 ×` en notation postfixe.

   Pour évaluer une telle expression, on a recours à une pile. On lit l'expression de gauche à droite. Si on rencontre une valeur, on l'ajoute sur la pile. Si on rencontre un opérateur, on dépile les deux opérandes, on effectue l'opération et on empile le résultat. À la fin de la lecture, le résultat de l'évaluation de l'expression se trouve au sommet de la pile.

   Écrivez une application qui accepte une expression arithmétique (en notation polonaise inversée) sur la ligne de commande et affiche le résultat de son évaluation. On supposera pour simplifier que l'expression ne contient que des entiers naturels et des opérateurs parmi : addition, soustraction, multiplication et division.

   ```
   bob@box:~$ java Arithmetique 18 6 1 2 + 9 + + / 8 x 7 -
   = 1
   ```

   

   **Remarque** Pour les opérations non commutatives, faites attention à l'ordre des opérandes : `3 4 -` doit donner `-1`.

2. **Chaîne.** Écrivez une interface `Pile<E>` qui puisse se substituer à la classe que vous avez employé pour représenter une pile dans l'exercice précédent.

   Écrivez ensuite une classe qui réalise cette interface et stocke ses éléments dans une liste chaînée. Modifiez le programme de l'exercice précédent pour remplacer la pile par votre version.

3. **Tableau.** Faites la même chose qu'à l'exercice précédent, avec la même interface, mais avec une classe qui stocke ses éléments dans un tableau.

4.  **Dérécursivation.** On souhaite un programme pour calculer les valeurs de la fonction suivante :

   ![img](http://www.iut-fbleau.fr/sitebp/apl31/piles/fonction.svg)

   Écrivez une première version employant simplement la récursivité.

   Écrivez ensuite une version non récursive qui utilise une `Pile<E>` pour stocker les étapes intermédiaires.
