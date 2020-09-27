#include <stdio.h>
#include <stdlib.h>


int main()
{
    int result, choix;
    int hauteur, i, j;

    while (choix != 3){
    printf("\n");
    printf("1)Triangle \n 2) Carré \n q) Quitter \n");
    result = scanf("%d", &choix);

    if (result == 3) {
        printf("Au revoir ! \n");
        return EXIT_FAILURE;
    }

    if (choix == 1){
        printf("hauteur ? \n");
        scanf("%d", &hauteur);
        printf("*");

        for(i= 0; i<=hauteur; i++){
            printf("*");
            printf("");
        }
    }

    if (choix == 2){
      for (i=0;i < hauteur;i++){
		for(j=0;j < hauteur-i;j++){
			printf(" ");
		}
		printf("*");
		for(j=0;j<i;j++){
			printf("**");
		}
		printf("\n");
	}
    }



    }


    return EXIT_SUCCESS;
}
