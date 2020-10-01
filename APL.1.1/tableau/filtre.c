#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
	
	int tab[10], i;
	int aleatoire;
	srand(time(NULL));

	int j;
	int tab2[10];

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



	
	for (i = 0; i < 10; ++i)
	{
		if (tab[i]>=0)
		{
			tab2[j]=tab[i];
			j++;
		}
	}

	printf("+");
	for (i = 0; i < j; ++i)
	{
		printf("-----+");
	}
	printf("\n");
	printf("|");
	for (i = 0; i < j; ++i)
	{
		printf("%5d|",tab2[i]);	
	}
	printf("\n+");
	for (i = 0; i < j; ++i)
	{
		printf("-----+");
	}
	printf("\n");

	return EXIT_SUCCESS;
}
