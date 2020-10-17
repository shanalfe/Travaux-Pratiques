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
		if (tab[i] > g){
			g = tab[i];
			ig = i;
		}
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
	printf("^\n");	
	printf("le plus grand : %d \n", g);
	printf("la case : %d \n", ig);
	return EXIT_SUCCESS;
}
