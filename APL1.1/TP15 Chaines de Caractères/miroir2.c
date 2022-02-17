#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
     
    char str[100], rev[100];
    int t, i, j;

    if (argc > 1) {

        j = 0;
        t = strlen (argv[1]);
        printf("%d\n",t);
      //   rev[t] = '\0'; inutile
        //jusqu'à là str est toujours vide.
        strcpy(str, argv[1]); /*Cette ligne te permet de récupérer l argument et le mettre dans une chaine de caractères, mais c est redondant tu peux directement travailler avec argv[1]*/
    for (i = t - 1; i >= 0; i--){
      rev[j++] = str[i];
    }
    printf("%d\n", i); //j'ai ajouté cet affichage pour que tu voies qu'à la fin de ta boucle i = -1
    rev[i] = '\0'; // plutôt rev[t] = '\0'
 
    puts (rev);

        return EXIT_SUCCESS;
        
        
  } else {
        puts("Erreur, pas d'argument entré.");
        EXIT_FAILURE;
  }

return EXIT_SUCCESS;
}
