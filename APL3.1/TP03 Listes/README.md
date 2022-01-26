1. Luminance. Écrivez une application qui ouvre une fenêtre montrant une série de 10 parallélogrammes de couleurs choisies aléatoirement. L'utilisateur peut cliquer sur une zone colorée pour la faire disparaître (les parallélogrammes restants se regroupent). On affichera la luminance de la couleur supprimée dans la console, le but pour l'utilisateur etant de sélectionner les couleurs par ordre décroissant de luminance.

![image](https://user-images.githubusercontent.com/69315804/151236766-cfcf4c50-bd07-4ca6-a0f1-fb620287965a.png)


Le calcul de la luminance d'une couleur utilisera la formule 21×R + 72×V + 7×B.

Remarque Incluez dans votre code au moins une boucle énumérative sur une liste (qui ait une véritable utilité).

2. Chaîne. Écrivez une classe qui puisse se substituer à la classe que vous avez employé pour représenter une liste dans l'exercice précédent.

Cette classe devra stocker ses éléments dans une liste chaînée. Elle contiendra les mêmes méthodes que celles dont vous avez eu besoin dans l'exercice précédent, de sorte qu'il suffise de changer seulement la déclaration et l'initialisation de la liste dans les fichiers du premier exercice pour qu'il fonctionne avec votre nouvelle classe.

3. Tableau. Faites la même chose qu'à l'exercice précédent, mais avec une classe qui stocke ses éléments dans un tableau.

4. Récursivité. Dans les classes des deux précédents exercices, faites disparaître toute trace de boucle.

5. Réalisation. En temps normal, quand on substitue une liste par une autre, il n'est pas nécessaire de changer la déclaration de la liste car elle devrait être de type List<E>. Les classes du deuxième et troisième exercices n'héritent pas de List<E>, cependant, car nous n'avons pas redéfini assez de méthodes.

Ajoutez à la classe du deuxième exercice toutes les méthodes nécessaires pour qu'elle puisse complètement réaliser List<E>.

