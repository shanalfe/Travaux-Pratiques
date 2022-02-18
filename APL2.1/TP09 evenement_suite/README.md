1. **Volume.** Écrivez une application qui affiche une valeur comprise entre 0 et 10 sous la forme de dix disques alignés le long d'une ligne horizontale.

   ![img](http://www.iut-fbleau.fr/sitebp/apl21/evenements2/Volume.jpg)

   La valeur devra pouvoir être ajustée à l'aide la molette de la souris et l'affichage sera modifié en conséquence.

2. **Playlist.** Écrivez une application qui contient une dizaine d'étiquettes ([`JLabel`](http://www.iut-fbleau.fr/docs/java/api/javax/swing/JLabel.html)) empilées verticalement pour représenter une playlist (prenez votre album favori comme exemple).

   ![img](http://www.iut-fbleau.fr/sitebp/apl21/evenements2/Playlist.jpg)

   Chaque étiquette aura plusieurs modes indiqués par sa couleur de fond : en gris clair pour un morceau sélectionné, en cyan pour un morceau non sélectionné et survolé, en blanc sinon.

   Au départ de l'aplication aucun morceau n'est sélectionné. Par la suite, un morceau sera sélectionné en cliquant dessus (un seul morceau peut être sélectionné à la fois).

   **Remarque** La méthode `setBackground` n'a pas d'effet visible sur une étiquette à moins de la rendre opaque (par la méthode `setOpaque`).

3. **Rectangle.** Dans de nombreuses applications, vous avez l'habitude de délimiter une zone rectangulaire en «tirant» la souris d'un coin de la zone au coin opposé. Écrivez une application sur ce modèle qui permet à l'utilisateur de dessiner un rectangle bleu. Chaque nouveau rectangle devra remplacer le précédent.

4.  **Multiple.** On souhaite améliorer le deuxième exercice en permettant de sélectionner plusieurs morceaux à la fois. Si on clique sur un morceau en maintenant la touche «Contrôle» enfoncée, le morceau doit être ajouté à la sélection (ou retiré de la sélection s'il en fait déjà partie).

5.  **Balle.** Écrivez une application contenant [cette image](http://www.iut-fbleau.fr/sitebp/apl21/evenements2/terre.jpg) en fond et [cette image](http://www.iut-fbleau.fr/sitebp/apl21/evenements2/balle.png) par dessus. Faites en sorte que l'utilisateur puisse déplacer la balle comme il le ferait pour une icône.