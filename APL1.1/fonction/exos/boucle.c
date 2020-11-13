#include <stdio.h>
#include <stdlib.h>

int n; //on le met en dehors de la fonction sinon n ne commence pas à 1

void fonction (){
	// int n=0; 	affichage : 1 // int n;  affichage n > nbre
	n++;
	printf("Le numérod %d\n", n);
	return;
}

int main(int argc, char const *argv[]){

	int i;

	for (i=0; i<5; i++){
		fonction();
	}

return EXIT_SUCCESS;
}