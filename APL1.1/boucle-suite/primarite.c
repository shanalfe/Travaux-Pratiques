#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(int argc, char * argv[]){


	int n;
	srand(time(NULL));
	int rep = rand()%101;



	printf("Entrez un nombre, vous avez 5 chances : \n");
	
	
	for ( int i=0; i<=4; i++){
	scanf("%d", &n);	
		if(n>rep) {
				printf("-\n");

	}if(n<rep) {
		printf("+\n");

	}
	if (n== rep){
		printf("Vous avez gagnez!!! \n");
	}	
	}

	return EXIT_SUCCESS;



}
