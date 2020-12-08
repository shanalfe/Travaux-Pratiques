#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int nbre_joueur = 0, i =0;
    int * liste_joueur;

    printf ("Nombre de joueur : ");
    scanf ("%d", &nbre_joueur);

    liste_joueur = malloc ( nbre_joueur * sizeof(int));

    /*traitement si echec de l'allocation*/
    if (liste_joueur = NULL){
        printf ("Erreur");
      return EXIT_FAILURE;
    }

    for (i = 0; i < nbre_joueur; i++){
        printf ("Joueur %d -> numéro %d \n", i +1, i*3);
        liste_joueur [i]= i*3;
    }

    for ( i=0; i< nbre_joueur; i++ ) {
       printf (" %d ", liste_joueur[i] );
    }
    
    return 0;
}
