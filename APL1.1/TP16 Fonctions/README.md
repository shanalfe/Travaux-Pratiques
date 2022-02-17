1. **Découpage.** Reprenez le programme du deuxième exercice du [troisième sujet sur les boucles](http://www.iut-fbleau.fr/sitebp/apl11/boucles3/). Définissez une fonction qui affiche un triangle, une fonction qui affiche un carré, et une fonction qui affiche le menu et renvoie le choix obtenu. Modifiez la fonction principale pour qu'elle utilise ces trois fonctions.

2. **Miroir.** Reprenez le programme du quatrième exercice du [sujet sur les tableaux](http://www.iut-fbleau.fr/sitebp/apl11/tableaux1/). Définissez une fonction qui affiche le tableau, une fonction qui le remplit de valeurs aléatoires, et une fonction qui inverse le tableau. Modifiez la fonction principale pour qu'elle utilise ces trois fonctions.

3. **Zéro.** Voici une fonction qui met une variable à zéro, dans un programme qui illustre son usage :

   

   ```
   void zero(double a) {
     a = 0.0;
   }
    
   int main(void) {
     double x=37.5;
     printf("avant : %f\n", x);
     zero(x);
     printf("après : %f\n", x);
     return EXIT_SUCCESS;
   }
   ```

   

   Testez cet exemple. Est-ce que la fonction fait son travail ? Pouvez-vous expliquer pourquoi ? Modifiez la définition de la fonction et son appel pour que cela marche comme prévu.

4.  **Échange.** Écrivez une fonction qui intervertit les valeurs de deux variables. Servez-vous en pour simplifier la fonction d'inversion du deuxième exercice.

5.  **Produit.** Écrivez un programme qui prend un nombre quelconque d'entiers sur la ligne de commande et affiche leur produit. On souhaite que les arguments qui ne sont pas des entiers soient ignorés. Lisez la page manuelle de la fonction `strtol` et servez-vous en pour repérer les arguments inutilisables.