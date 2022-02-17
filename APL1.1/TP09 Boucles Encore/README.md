1. **Sapin.** Écrivez le programme correspondant à la session suivante :

   ```
   Hauteur ? 6
   
        *
       ***
      ***** 
     *******
    *********
   ***********
   ```

   

2. **Figures.** Écrivez le programme correspondant à la session suivante :

   ```
   _______________
    t) Triangle
    c) Carré
    q) Quitter
   Votre choix ? t
   
   Hauteur ? 4
   
   *
   **
   ***
   ****
   _______________
    t) Triangle
    c) Carré
    q) Quitter
   Votre choix ? c
   
   Hauteur ? 5
   
   *****
   *   *
   *   *
   *   *
   *****
   _______________
    t) Triangle
    c) Carré
    q) Quitter
   Votre choix ? q
   
   Au revoir...
   ```

   

3. **Diviseur.** Écrivez un programme qui demande deux entiers naturels à l'utilisateur, puis affiche leur plus grand commun diviseur.

   L'*algorithme d'Euclide* nous donne un bon moyen de faire ce calcul :

   Si b = 0,
   Sinon,

   pgcd(a, b) = a
   pgcd(a, b) = pgcd(b, a mod b)

   

4.  **Comptes.** On souhaite s'inspirer de la commande Unix `wc`.

   - Écrivez un programme qui affiche le nombre de caractères obtenus sur l'entrée standard.
   - Modifiez ce programme pour qu'il affiche également le nombre de sauts de ligne obtenus sur l'entrée standard.
   - Ajoutez enfin l'affichage du nombre de mots obtenus sur l'entrée standard.

   

   **Remarque** Ce programme doit lire sur l'entrée standard jusqu'à en atteindre la fin. Si vous avez redirigé l'entrée standard du programme vers un fichier, la fin de l'entrée standard correspond tout simplement à la fin du fichier. Si l'entrée standard n'est pas redirigée, vous pouvez indiquer la fin en tapant **Contrôle D**.

   La fonction `scanf` renvoit `-1` lorsqu'elle atteint la fin de l'entrée standard.

5.  **Disque.** Écrivez un programme qui demande le rayon, puis affiche un disque formé d'étoiles.

   ```
   Rayon ? 10
                                             
               * * * * * * * * *             
             * * * * * * * * * * *           
         * * * * * * * * * * * * * * *       
         * * * * * * * * * * * * * * *       
       * * * * * * * * * * * * * * * * *     
     * * * * * * * * * * * * * * * * * * *   
     * * * * * * * * * * * * * * * * * * *   
     * * * * * * * * * * * * * * * * * * *   
     * * * * * * * * * * * * * * * * * * *   
     * * * * * * * * * * * * * * * * * * *   
     * * * * * * * * * * * * * * * * * * *   
     * * * * * * * * * * * * * * * * * * *   
     * * * * * * * * * * * * * * * * * * *   
     * * * * * * * * * * * * * * * * * * *   
       * * * * * * * * * * * * * * * * *     
         * * * * * * * * * * * * * * *       
         * * * * * * * * * * * * * * *       
             * * * * * * * * * * *           
               * * * * * * * * *             
                                             
   ```

   On se souviendra que les points d'un disque sont les points dont la distance au centre est inférieure au rayon.

   