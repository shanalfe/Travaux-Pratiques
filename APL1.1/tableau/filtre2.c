 #include <stdio.h>
 #include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]){	
	int tab [10], i, a;
	srand(time(NULL));
	for (i=0; i<10; i++){
		a = rand()%101 -50;
		tab[i]= a;
	}
	for (i=0; i<10; i++){
		printf("+-----");
	}
	printf("+\n");
	printf("| ");
	for(i=0; i<10; i++){		
		printf("%3d | ", tab[i] );
	}
	printf("\n");
	for (i=0; i<10; i++){
		printf("+-----");
	}
	printf("+\n");
	//2e tableau
	for (i=0; i<10; i++){
		printf("+-----");
	}
	printf("+\n");
	printf("| ");
	for(i=0; i<10; i++){
		if (tab[i]<0){
			printf("     |");
		}else{
	  	printf("%3d | ", tab[i]);
  	}
	}
	printf("\n");
	for (i=0; i<10; i++){
		printf("+-----");
	}
	printf(" +\n");
	printf("|");
	return EXIT_SUCCESS;
}
