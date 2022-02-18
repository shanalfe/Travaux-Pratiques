#include <stdio.h>
#include <stdlib.h>


void Tableau (double tab[], int i){

	if (i > 0){

		Tableau (tab, i-1); /*Récursivité, on remonte la "chaine" */
		putchar (',');
		printf(" %.2lf", tab [i] ); /*Affichage de chaque partie du tableau*/

	}else {
		printf("%.2lf", tab [0] );
	}

}


int main(int argc, char const *argv[]){

	/* Initialisation du tableau*/
	double tab [5]= { 1.25, 47.80, 77.01, 54.23, 895.14 };

	Tableau (tab, 4); /*appel du tableau et du nombre d'indice*/

	printf("\n");

return EXIT_SUCCESS;
}