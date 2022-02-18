1. **Numérotation.** Écrivez un programme qui lit un fichier contenant uniquement du texte dont le nom et le chemin seront donnés en argument sur la ligne de commande puis affiche le contenu du fichier sur sa sortie standard en numérotant chaque ligne.

   Pour les esthètes, faites en sorte d'afficher les numéros dans une couleur différente (en utilisant un [code d'échappement](http://en.wikipedia.org/wiki/ANSI_escape_code)).

2. **Tableur.** Un fichier au format CSV sert à décrire un tableau de valeurs à deux dimensions. Les valeurs sont séparées par des virgules (ou parfois des points-virgule en configuration française) et forment ainsi des lignes. Les lignes sont bien sûr séparées par des sauts de ligne.

   Reprenez le programme du premier exercice sur les [tableaux multidimensionnels](http://www.iut-fbleau.fr/sitebp/apl11/tableaux2/) et sauvegardez les tableaux dans des fichiers nommés `t1.csv`, `t2.csv`, et `t3.csv`. Si vous respectez bien le format, vous devriez pouvoir ouvrir ces fichiers à l'aide d'un tableur.

3. **Dénomination.** Le fichier [`rgb.txt`](http://www.iut-fbleau.fr/sitebp/apl12/fichiers3/rgb.txt) est parfois utilisé pour représenter les correspondances entre les noms des couleurs et leurs composantes RVB. Écrivez un programme qui prend sur la ligne de commande trois composantes et qui affiche tous les noms qui correspondent.

4.  **Décomposition.** Sur le même principe que l'exercice précédent, écrivez un programme qui prend un nom de couleur sur la ligne de commande et qui affiche les composantes correspondantes (si elles sont dans le fichier).

5.  **Gomoku.** Écrivez un programme permettant à deux joueurs de s'affronter au [Gomoku](http://fr.wikipedia.org/wiki/Gomoku). Le programme devra demander à un joueur où il souhaite placer sa pierre, puis il affichera le tablier mis à jour. Il passera ensuite à l'autre joueur, et ainsi de suite jusqu'à ce que le tablier soit rempli (ce qui donne un match nul).

   Pour simplifier l'exercice, on ne contrôlera pas la légalité des coups et on ne testera pas les conditions de victoire. Par contre, les joueurs auront l'option d'interrompre la partie et de la sauvegarder pour plus tard. Le fichier de sauvegarde devra utiliser un format texte permettant de facilement visualiser l'état de la partie.