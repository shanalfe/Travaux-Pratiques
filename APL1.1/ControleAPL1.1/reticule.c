#include <stdio.h>
 #include <stdlib.h>
int main(int argc, char const *argv[]){
	
	int n, i;

	printf("Choisissez le nombre de carrés : ");
	scanf("%d", &n);



	printf("+");
	for(i =0; i<2; i++){
		printf("--");
	}
	printf("+");

	printf("|");



	printf("\n");
	return EXIT_SUCCESS;
}
