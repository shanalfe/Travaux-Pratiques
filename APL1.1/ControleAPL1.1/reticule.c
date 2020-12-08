#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]){

	int c, i, j, l;

	printf("Choisir le nombre de carrés : ");
	scanf("%d", &c);
	
	c = c-1; /*Pour avoir le bon nombre de carré*/

	/*Première partie du carré*/

	for (j=0; j<=c; j++) {
		
		for (l=0; l<j; l++) {
			printf("| ");
		}
		printf("+-");

		for (i=0; i<(c-j); i++) {
			printf("----");
		}
		printf("-+");
		for (l=0; l<j; l++) {
			printf(" |");
		}
		printf("\n");
	}

	for (j=0; j<=c; j++) {
		printf("| ");
	}
	for (j=0; j<=c; j++) {
		printf(" |");
	}
	printf("\n");


	/* Affichage de la deuxième partie du carré*/
	/*
	j=c;

	for (j; j>=0; j--) {
		for (l=0; l<j; l++) {
			printf("| ");
		}
		printf("+-");

		for (i=(c-j); i>0; i--) {
			printf("----");
		}
		printf("-+");

		for (l=0; l<j; l++) {
			printf(" |");
		}
		printf("\n");
	}
*/
	return EXIT_SUCCESS;
}