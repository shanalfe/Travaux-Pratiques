#include <stdlib.h>
#include <stdio.h>

int  main(int argc, char const *argv[])
{
	int nombre;
	char nbre;
	
	printf("Entrez un entier :\n");
	scanf ("%d", &nombre);

	nbre = nombre;

	printf(" votre nombre est : %c\n",nbre );

	return EXIT_SUCCESS;
}