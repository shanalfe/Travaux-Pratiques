### Interface tactile

1. **Pois.** Écrivez une app qui ressemble à ceci :

   ![img](http://www.iut-fbleau.fr/sitebp/apl41/tactile/pois.svg)

   Chaque doigt posé sur l'écran sera indiqué par un disque de couleur. Les disques devront suivre leur doigt en cas de mouvement. Attention à ne pas changer les couleurs des disques lorsque l'on enlève ou ajoute un doigt !

2. **Grille.** Écrivez une app qui ressemble à ceci :

   ![img](http://www.iut-fbleau.fr/sitebp/apl41/tactile/grille.svg)

   Chacune des neufs cases changera de couleur en fonction de l'interaction qu'elle reçoit : un seul contact bref la colore en bleu, un contact long la colore en jaune, deux contacts brefs d'affilée la colore en violet, et enfin un «fling» lui donne la même couleur que le fond.

   **Remarque** Il n'est pas nécessaire dans cet exercice de créer une vue personnalisée. Vous pouvez simplement modifier la couleur de fond d'une vue basique avec la méthode `setBackgroundColor`.

3. **Dimensions.** Écrivez une app qui ressemble à ceci :

   ![img](http://www.iut-fbleau.fr/sitebp/apl41/tactile/dimensions.svg)

   Le rectangle devra changer de taille (tout en restant au centre de l'écran) en fonction des gestes «pinch open» et «pinch close» de l'utilisateur. Dans un premier temps, faites en sorte que la largeur et la hauteur puissent varier indépendamment (en fonction de la direction du geste).

   Une fois cette version accomplie, rajoutez une nouvelle option. Avec une double pression, l'utilisateur colore le rectangle de bleu en rouge et vice-versa. Lorsque le rectangle est rouge, le redimensionnement doit préserver ses proportions (c'est à dire le ratio largeur/hauteur).