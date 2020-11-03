#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char mp [26]= "cop";
	char tab [26];
	//char *gets(char *tab);


	puts ("Entrez le mot de passe :");
	//gets (tab);
	scanf("%25s", tab);
	//fgets (tab, 26, stdin); // pas correct car prend les espaces vides comme chaine de caractère

	printf("%s\n", tab);


	if ( strcmp (tab, mp) == 0){
		printf("Mot de passe correct\n");
	}else {
		printf("Mot de passe incorrect\n");
	}

return EXIT_SUCCESS;
}