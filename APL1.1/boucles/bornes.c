#include<stdio.h>
#include<stdlib.h>


int main(){

    int a;
    int result = 0 , petit, grand;

    printf("Entrez un premier entier naturel, \"-1\" pour stopper le programme. \n");
    result = scanf("%d", &a);

    //condition booleen
    if (result != 1){
        printf("Fin du programme.");
        return EXIT_FAILURE;
    }

    //initialisation
    petit = grand = a;

    while (a != -1){
        printf("Entrez un entier \n");
        result =  scanf("%d", &a);

            if (result != 1 ){
                return EXIT_FAILURE;
            }

            if(a != -1){
                if ( a > grand ){

                    grand = a;
                }

                if ( a < petit ){
                    petit = a;
                }
            }
    }
     printf("Le plus petit entier naturel est %d et le plus grand entier naturel est %d", petit, grand);


    return EXIT_SUCCESS;
}
