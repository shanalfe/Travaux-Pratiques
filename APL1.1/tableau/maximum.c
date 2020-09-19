#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char * argv[]){
	int tab[10];
	int aleatoire,i,max=-50;
	srand(time(NULL));


	/*affichage */
	for (i = 0; i<=10; i++){
		printf("+");
		printf("-----");
	}
	printf("+ \n");
	printf("|");

	for (i = 0; i < 10; ++i)
	{
		aleatoire = (rand()%101)-50;
		tab[i]= aleatoire;
		if (tab[i] > max)
		{
			max = tab[i];
			
		}
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
	printf("|");

	printf("Le plus grand est %d.\n", max);

	return EXIT_SUCCESS;
}
