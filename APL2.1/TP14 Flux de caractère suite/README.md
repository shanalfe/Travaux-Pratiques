1. **Conversion.** Écrivez une application qui prend en argument sur la ligne de commande le nom d'un fichier contenant uniquement du texte encodé en UTF-8 et qui crée un autre fichier portant le même nom suivi de l'extension `.html`. Le fichier produit devra respecter le standard HTML 5 (au point de convaincre un [validateur](http://validator.w3.org/#validate_by_upload)) et permettre d'afficher dans un navigateur le texte d'origine.

2. **Couleurs.** Dans le système graphique X11R6 (mais pas dans son successeur moderne Xorg), les couleurs peuvent être désignées par leur nom, pourvu que celui-ci se trouve parmi une liste contenue dans le fichier `rgb.txt`. Trouvez ce fichier sur votre machine (si vous êtes sous Linux) ou sur Iluvatar (si vous êtes sous Windows).

   ![img](http://www.iut-fbleau.fr/sitebp/apl21/caracteres2/couleurs.png)

   Écrivez une application qui lit ce fichier et affiche deux des couleurs qu'il contient, accompagnées de leur nom. En manipulant la molette au dessus de chaque couleur, on avance ou on recule dans la liste.

   **Remarque** Pour isoler les données contenues dans le fichier, vous aurez sans doute besoin des méthodes `split` et `trim` de la classe [`String`](http://www.iut-fbleau.fr/docs/java/api/java/lang/String.html).

3. **Commentaires.** Écrivez une application qui prend en argument sur la ligne de commande le nom d'un fichier source java et qui retire de celui-ci tous les commentaires.

   **Remarque** Attention aux constantes littérales chaînes de caractères qui peuvent contenir les marqueurs de commentaire sans pour autant devoir être expurgées !

4.  **Échappement.** Reprenez l'application du premier exercice, et modifiez-là de façon à ne pas utiliser de balise `<pre>` dans le fichier résultat.