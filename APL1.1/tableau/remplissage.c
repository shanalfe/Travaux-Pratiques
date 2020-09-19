#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
	
	int tab[10], i;
	int aleatoire;
	srand(time(NULL));

	/*affichage */
	for (i = 0; i<=10; i++){
		printf("+");
		printf("-----");
	}
	printf("+ \n");
	printf("|");


	for (i=0; i<=10;i++){
		aleatoire = (rand()%101-50);
		tab [i] = aleatoire;
	}

	for (i=0; i<=10; i++){
		printf("%5d|", tab[i] ); // %5 permet de faire les espaces
	}
	printf("\n");

	for (i = 0; i<=10; i++){
		printf("+");
		printf("-----");
	}
	printf("+ \n");
	printf("|");


	return EXIT_SUCCESS;
}
