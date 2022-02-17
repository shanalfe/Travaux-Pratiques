1. **Poussières.** Testez ce programme :

   ```c
   int main(void) {
     printf("%f\n", 12345.678910111213);
     return EXIT_SUCCESS;
   }
   ```

   Vous ne devriez pas être surpris par le résultat.  Modifiez le format du `printf` pour qu'il affiche 12 chiffres après la virgule. Êtes-vous satisfaits du résultat ? Affichez maintenant 15 chiffres. Qu'avez-vous appris ?

    

   

2. **Extrémités.** Vous serez peut-être surpris de constater que ce programme, qui ne veut rien dire, est pourtant parfaitement fonctionnel. Pouvez-vous expliquer les résultats obtenus ?

   ```c
   int main(void) {
     printf("%f\n", +1.0/0.0);
     printf("%f\n", -1.0/0.0);
     printf("%f\n", -0.0/0.0);
     return EXIT_SUCCESS;
   }
   ```

   

3. **Téléscopage.** Écrivez un programme qui :

   - demande à l'utilisateur de saisir un réel,
   - affiche ce réel en notation scientifique,
   - demande à l'utilisateur de saisir un caractère,
   - affiche le caractère en question cinq fois de suite.

   Remarque

    

   La solution «naïve» donne un résultat surprenant. Déterminez-en la raison et adaptez votre programme en conséquence.

   

4. **Formules.** Écrivez un programme qui affiche le résultat de chacune de ces formules :

   ![image-20220218004238261](/home/shanou/snap/typora/49/.config/Typora/typora-user-images/image-20220218004238261.png)

   

5. **Distance.** Écrivez un programme qui demande à l'utilisateur de fournir les coordonnées de deux points du plan, et qui affiche ensuite la distance entre ces points.

6.  **Chiffres.** Écrivez un programme qui demande à l'utilisateur un réel, puis affiche le chiffre des unités et le chiffre des dixièmes uniquement.

   ```
   $ ./a.out
   Entrez un réel : 141.35
   chiffre des unités :   1
   chiffre des dixièmes : 3
   ```

   

   **Remarque** Pensez à la fonction `trunc` !

7.  **Durée de vol.** Écrivez un programme qui demande à l'utilisateur de lui fournir les paramètres d'un trajet aérien :

   - vitesse de l'avion en km/h,
   - vitesse du vent en km/h (positive pour un vent contraire, négative pour un vent arrière),
   - distance à parcourir en km.

   Une fois les informations obtenues, votre programme devra calculer puis afficher la durée du vol (en heures et en minutes).

   