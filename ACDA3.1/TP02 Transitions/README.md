## Exercice 1

<u>Galerie</u>. 

Écrivez une application qui affiche une image parmi une série. En cliquant dans la moitié droite de la fenêtre, on passe à l'image suivante. En cliquant dans la moitié gauche, on passe à l'image précédente. La dernière image et la première seront reliées pour former une boucle.

Aucune redéfinition de paintComponent n'est autorisée dans cette question : les images seront affichées dans des JLabel.

`image = new JLabel(new ImageIcon("cute_overload.gif"));`
Deux versions de cette application sont demandées :

- une version où la fenêtre contient un seul JLabel remplacé à chaque transition,
- une version où la fenêtre contient tous les JLabel, avec un CardLayout pour décider lequel est visible.

Le répertoire réponse se trouve [ici](https://github.com/shanalfe/Travaux-Pratiques/tree/master/ACDA3.1/TP02%20Transitions/Confirmation)

## Exercice 2

<u>Confirmation</u>. 

Modifiez le programme de la question précédente de façon à ce qu'un clic sur le bouton système de fermeture provoque l'apparition d'une fenêtre modale qui demande si l'utilisateur veut effectivment quitter le programme. En cas de réponse positive les deux fenêtres se ferment et le programme se termine. Dans le cas contraire, seule la fenêtre modale se ferme et on revient à la fenêtre principale.

La fenêtre modale devra être créée de toutes pièces par vos soins en partant de la classe JDialog.