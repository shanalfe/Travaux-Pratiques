1 Sirocco. 
En vous inspirant de l'exemple donné, écrivez un programme qui ouvre une fenêtre de 500 pixels de large, 300 pixels de haut, collée dans le coin supérieur gauche de l'écran. Cette fenêtre devra contenir le texte «Sirocco» dans son coin inférieur droit.

2 Boutons. 
Écrivez un programme qui ouvre une fenêtre contenant cinq boutons. Testez ce programme et observez ce qui se passe quand on redimensionne la fenêtre. Choisissez ensuite un texte très long (20 caractères environ) pour l'un des boutons. Comment la disposition en est-elle affectée ? Faites le test avec chaque bouton successivement.

3 Saisie. 
Écrivez une application qui ouvre une fenetre contenant un champ de texte le long du bord inférieur, et une zone de texte occupant le reste de l'espace. La zone contiendra du texte vert sur fond noir, et le champ du texte vert sur fond gris.

La classe Color sert à représenter une couleur. Son constructeur réclame trois entiers compris entre 0 et 255 qui donnent respectivement la quantité de rouge, de vert et de bleu qui la composent. Un objet de cette classe peut ensuite servir d'argument à la méthode setForeground ou à la méthode setBackground qui sont définies aussi bien dans JTextArea que dans JTextField.

4 Choix. 

Écrivez un programme qui ouvre une fenêtre contenant trois boutons radio les uns au-dessus des autres, nommés «Gryffondor», «Serdaigle» et «Serpentard». Vous pourrez constater que les boutons peuvent être sélectionnés ou déselectionnés à volonté.

En général on utilise les boutons radio pour proposer des options mutuellement exclusives, ce qui veut dire qu'il devrait être impossible de sélectionner plus d'un bouton à la fois. La classe ButtonGroup sert à représenter un ensemble de boutons radios qui doivent se coordonner entre eux. Son constructeur ne prend pas d'argument. Elle contient une méthode add qui prend un JRadioButton en argument et sert à lui faire rejoindre le groupe.

5 Contingences. 

Reprenez le programme de l'exercice 3. Lorsque l'on tape trop de texte dans la zone de texte, il devient difficile de tout voir. On souhaite que les lignes trop longues se poursuivent automatiquement sur la ligne suivante. La classe JTextArea possède une méthode setLineWrap qui prend un booléen en argument et qui contrôle ce comportement.

Lorsqu'il y a trop de lignes, le problème est plus grave. La solution consiste à ne pas montrer toute la zone de texte mais seulement une portion assez réduite pour rentrer dans la fenêtre. Il faudra ensuite donner à l'utilisateur l'opportunité de choisir quelle portion il veut voir, à l'aide d'un ascenceur. La classe JScrollPane est un composant capable de contenir un autre composant dont il ne montre qu'une partie. Son constructeur prend en argument le composant à afficher partiellement. On peut choisir quand faire apparaître un ascenceur vertical à l'aide de la méthode setVerticalScrollBarPolicy qui prend en argument une valeur parmi :

VERTICAL_SCROLLBAR_AS_NEEDED
VERTICAL_SCROLLBAR_NEVER
VERTICAL_SCROLLBAR_ALWAYS
La présence d'un ascenceur horizontal est contrôlée de la même manière.
