#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	system("clear");

	int a;
	int i=0,gate=1;
	char motdepasse[26]="shana";

	puts("Veuillez taper un mot de passe : ");

	while( ( a=getchar() ) !='\n'){

		if (a==motdepasse[i])
		{	
			i++;
		} else {
			gate=0;
			break;
		}
	}

// Vérification si 

	if ((gate=1)&&(i==strlen(motdepasse))){
		puts("Mot de passe correct");
	} else {
		puts("Mot de passe incorrect");
	}

	return EXIT_SUCCESS;
}