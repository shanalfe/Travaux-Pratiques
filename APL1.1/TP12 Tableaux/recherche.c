#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	
	int tab[10], i;
	int aleatoire;
	srand(time(NULL));

	int valeur = 0, booleen = 1;
	int place = -1; // si la condition n'est pas vérifiée, place vaut -1 par défaut

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
		printf("%5d|", tab[i] ); // %5 permet de faire les
	}
	printf("\n");

	for (i = 0; i<=10; i++){
		printf("+");
		printf("-----");
	}
	printf("+ \n");


	printf("Entrez une valeur : \n");
	scanf("%d", &valeur);



	for (i = 0; i < 10; ++i)
	{
		if (tab[i] == valeur)
		{
			if (booleen == 1)
			{
				place = i+1;			
			}
		}
	}

	printf("Your choice is here: %d\n",place );
	return EXIT_SUCCESS;
}
