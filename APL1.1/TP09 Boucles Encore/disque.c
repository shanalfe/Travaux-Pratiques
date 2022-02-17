#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	int rayon;
	int i;

	printf("Rayon ? ");
	scanf ("%d", &rayon);
	
	for (i=0; i<rayon-1; i++){
		printf("*");
	}
	printf("\n");



	return EXIT_SUCCESS;
}