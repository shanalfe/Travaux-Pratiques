#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

	char tab[27] = "shana";
	puts ("Entrez le mot de passe :");
	int t, i=0, bol1 = 1, a;

	//récupération du mot de pass
	while (( a = getchar () ) != '\n'){
		if (a == tab[i]){
			i++;
		}else{
			bol1 = 0;
			return EXIT_FAILURE;
		}
	}

	//vérification

	if ( (bol1 = 1) && (i == strlen(tab)) ){
		puts ("Authentification acceptée");
	} else {
		puts ("Echec");
	}

return EXIT_SUCCESS;
}