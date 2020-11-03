/*Écrivez un programme qui demande à l'utilisateur de taper un mot de passe
(ne faisant pas plus de 26 caractères) 
et indique ensuite si l'authentification a réussi.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	system ("clear");
	int a;
	int i=0, b =1;
	char tab[26]="shana";

	puts("Veuillez taper un mot de passe : ");

	while( ( a = getchar() ) != '\n'){
		if (a == tab[i]){	
			i++;
		} else {
			b = 0;
			return EXIT_FAILURE;
		}
	}

// Vérification
	if ( (b = 1) && (i == strlen(tab))){
		puts("Mot de passe correct");
	} else {
		puts("Echec");
	}
	return EXIT_SUCCESS;
}