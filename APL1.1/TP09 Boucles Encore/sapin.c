#include<stdio.h>
#include<stdlib.h>




int main(int argc, char const *argv[])
{

	//déclaration de variable
	int hauteur;
	int i; //colonne, hauteur 
	int j; //ligne 

	printf("Hauteur ?\n");
	scanf("%d", &hauteur);



	//boucle hauteur
	for(i=0; i<hauteur; i++){

		//création des espaces, décalage 
		for(j=0; j< hauteur-i; j++){
			printf(" ");
		}

		// affichage de la première étoile 
		printf("*");

		//boucle affichage +2 etoiles pour le décalage
		for(j=0; j<i; j++){
			printf("**");
		}

		//retour a la ligne pour la suite de la boucle
		printf("\n");

	}


	
	return EXIT_SUCCESS;
}



