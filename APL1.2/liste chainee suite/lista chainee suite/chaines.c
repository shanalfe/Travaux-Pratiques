#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct mail {
	char c;
	struct mail suivant;
}


typedef struct mail maillon;

maillon* ajouter_debut ( maillon * premier, char nouveau){
	maillon* p = (maillon*) malloc (sizeof(maillon));

	if (p){
		p -> suivant;
		p -> c = nouveau;
	}

	return p;
}



int main(int argc, char const *argv[]){

	maillon liste = NULL;

	liste = ajouter_debut (liste, 'i');
	liste = ajouter_debut (liste, 'h');



return EXIT_SUCCESS;
}