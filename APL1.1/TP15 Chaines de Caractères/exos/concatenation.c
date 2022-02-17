#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]){

	char tab [25], tab2 [25];
	int i,j;

	puts ("Premiere chaine :");
	fgets (tab, 25, stdin);

	puts ("Deuxieme chaine :");
	fgets (tab2, 25, stdin);

	/*avec strcat*/

	strcat (tab, tab2);
	printf("Apres concaténation : %s\n", tab);

	/*sans strcat*/
/*
	for (i=0; tab[i] != '\0'; i++)//itération de la chaine du début a la fin

	for (j=0; tab2 [j] != '\0'; j++){
		tab[i]=tab2[j];
	}
	tab[i]='\0';
	printf("Apres concaténation : %s\n", tab);
*/
return EXIT_SUCCESS;
}