#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{

	/* Déclaration des variables*/
	int moy;

	/* données récoltées de l'utilisateur*/
   printf("entre ta moyenne de bac :\n");
    scanf("%d", &moy);

    /* boucle while qui redemande la moy si elle est inférieure à 10*/
    if(moy<10){
    	while(moy<10){
    		printf("Quelle est la note?\n");
    		scanf("%d", &moy);
    	}
    }

    /* mention donnée selon la moyenne */
  if ((10<=moy) && (moy<12)){
    printf("tu as le bac, c'est bien\n");

  }

  if ((12<=moy) && (moy<14)){
    printf("tu as le bac, avec mention assez bien, bien joué bg\n");

  }

  if ((14<=moy) && (moy<16)){
      printf("tu as le bac, mention bien, tu es un géni\n");
  }

  if ((16<=moy) && (moy<=20)){
    printf("Bravo, tu as le bac, mention très bien\n");

  }



	return EXIT_SUCCESS;
}