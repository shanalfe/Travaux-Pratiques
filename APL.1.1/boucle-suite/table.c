#include<stdlib.h>
#include<stdio.h>


int main(int argc, char const *argv[])
{
	
	/*déclaration de variable*/

	int taille;
	int a,b, i;
	int trait; //affichage trait tableau
	int resultat;


	//taille
	printf("Entrez la taille de la table désirées :\n");
	scanf("%d", &taille);


	printf(" X  | ");

	//affichage nombre horizontal
	for(a=0; a<=taille; a++){

		printf("%6d", a);

	}
	printf("\n");
	printf("----+");

	for(trait=0; trait<=taille; trait++){
		printf("------");
	}

	printf("\n");

	//affichage horizontal
	for(a=0; a<=taille; a++){
		printf("%3d | ",a );

		//boucle pour la multiplication
		for(b=0; b<=taille; b++){
			printf("%5
				d ", a*b);
		}

		printf("\n");
	}

		return EXIT_SUCCESS;
}