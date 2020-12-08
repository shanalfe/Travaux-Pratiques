#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	FILE* f;
	f = fopen ("liste.txt", r);

	if (f){
		perror ("Fichier completé");
		exit (EXIT_FAILURE);
	} else if (! f) {
		f = fopen ("liste.txt", "w");

	}



return EXIT_SUCCESS;
}