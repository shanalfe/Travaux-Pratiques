#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int nb_lun, nb_mar, nb_mer, nb_jeu, nb_ven;
    int moy;

    printf("Bonjour à vous \n");
    printf("Merci de rentrer les valeurs de cette semaine. \n");

    printf("lundi :");
    scanf("%d", &nb_lun);

    printf("Mardi :");
    scanf("%d", &nb_mar);

    printf("Mercredi :");
    scanf("%d", &nb_mer);

    printf("Jeudi :");
    scanf("%d", &nb_jeu);

    printf("Vendredi :");
    scanf("%d", &nb_ven);


    moy= (nb_lun+nb_mar+nb_mer+nb_jeu+nb_ven)/5;


    printf("Les valeurs entrées sont: \n");
    printf( "lundi : %d \n", nb_lun); 
    printf("mardi : %d \n", nb_mar);
    printf("mercredi: %d \n", nb_mer);
    printf("jeudi:%d \n", nb_jeu);
    printf("vendredi:%d \n",nb_ven);


    printf("La moyenne de l'influence de cette semaine est de : %d personnes par jour. \n", moy);
    
    return EXIT_SUCCESS;
}
