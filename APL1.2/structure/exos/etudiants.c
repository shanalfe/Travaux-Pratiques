#include <stdio.h>
#include <stdlib.h>
#include <string.h>


   struct Etudiant {
        char nom [25],  prenom [25];
        int note;
    };


int main(int argc, char const *argv[]){

    struct Etudiant tab [100];

    int n, i;

    printf ("Nombre d'étudiants : ");
    scanf ("%d", &n);

    if (n<0){
        printf ("Erreur\n");
        return EXIT_FAILURE;
    }

    if (n>0){
        for (i=0; i<n; i++){
            printf("Etudiant numéro %d \n", i+1);
            printf ("Nom, prenom, note \n");
            scanf ("%s %s %d", tab[i].nom, tab[i].prenom, &tab[i].note);
        }

        for(i=0;i<n;i++) {
            if(tab[i].note>=10)
                printf("%s %s\n",tab[i].nom, tab[i].prenom);
            }
    }
  
    
    return 0;
}
