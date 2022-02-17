#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]){	
	int tab [10], i, a, g = 0, ig = 0, j;
	srand(time(NULL));
	for (i=0; i<10; i++){
		printf("+-----");
	}
	printf("+\n");
	printf("| ");
	for(i=0; i<10; i++){
		a = rand()%101 -50;
		tab[i]= a;
		printf("%3d | ", tab[i] );		
	}
	printf("\n");
	for (i=0; i<10; i++){
		printf("+-----");
	}
	printf("+\n");
		printf("   ");
		for (j=0; j<ig; j++){
		printf("      ");
	}		
	printf("Entrez le nombre à chercher :");
	scanf("%d", &g);
	for (i=0; i<10; i++){
		if (tab[i] == g){
			ig = i;	
		}
	}	
	printf("la case : %d \n", ig);
	return EXIT_SUCCESS;
}
