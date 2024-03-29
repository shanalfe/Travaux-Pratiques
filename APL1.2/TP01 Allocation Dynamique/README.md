1. **Singletons.** Écrivez un programme qui reçoit une liste de réels et affiche uniquement les valeurs présentes une seule fois dans la liste.

   Le programme demandera d'abord à l'utilisateur combien de réels il souhaite rentrer, puis il demandera un à un tous les réels. Il affichera ensuite, sur une seule ligne, les valeurs qui n'ont pas été répétées.

2. **Palindromes.** Écrivez un programme qui teste si les arguments passés sur sa ligne de commande sont des palindromes. Vous vous appuierez sur la fonction suivante :

   

   ```
   char* inverse(const char* s);
   ```

   

   Cette fonction, que vous devrez définir, doit créer et renvoyer une chaîne contenant les mêmes caractères que `s` mais en ordre inverse. Exemple de session :

   

   ```
   bob@box:~$ ./a.out laval denis luc radar
   laval est un palindrome,
   denis n'est pas un palindrome,
   luc n'est pas un palindrome,
   radar est un palindrome.
   ```

   

   **Remarque** Choisissez soigneusement l'endroit où placer l'appel à `free`.

3. **Précognition.** Reprenez le premier exercice et faites-le marcher sans demander au préalable le nombre de réels. L'utilisateur devra taper `q` pour quitter.

4.  **Premiers.** Écrivez un programme qui demande en boucle un nombre `n` strictement positif et affiche le `n`-ième nombre premier. Taper `0` permet de quitter le programme.

   Pour commencer, définissez une fonction qui détermine si un entier est premier ou pas.

   À l'aide de cette fonction, vous pourrez remplir un tableau avec tous les premiers nombres premiers en ordre croissant. Si le rang demandé est déjà connu, la réponse ne demande aucun calcul. Si le rang demandé n'a pas encore été obtenu, on remplit le tableau jusqu'à ce rang (si le rang demandé dépasse la capacité du tableau, il est redimensionné).

5.  **Justification.** Écrivez une fonction qui lit un mot à la console et le renvoie sous la forme d'une chaîne de caractères. Notez que cette fonction devra s'acquitter de sa tâche quelle que soit la longueur du mot. Si les premiers caractères lus sont des caractères blancs, ils seront ignorés et sautés.

   À l'aide de cette fonction, écrivez un programme qui lit à la console un paragraphe (terminé par un saut de ligne) et qui l'affiche ensuite en une colonne de texte justifié large de 50 caractères. Exemple de session :

   

   ```
   bob@box:~$ ./a.out
   Entrez votre texte : Lorem ipsum dolor sit amet, consectetur adipisici elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
   
   Lorem ipsum dolor sit amet, consectetur adipisici
   elit,  sed do eiusmod tempor incididunt ut labore
   et  dolore magna aliqua. Ut enim ad minim veniam,
   quis nostrud exercitation ullamco laboris nisi ut
   aliquip  ex ea commodo consequat. Duis aute irure
   dolor  in  reprehenderit  in voluptate velit esse
   cillum dolore eu fugiat nulla pariatur. Excepteur
   sint  occaecat  cupidatat  non  proident, sunt in
   culpa  qui  officia  deserunt  mollit anim id est
   laborum.
   ```

   