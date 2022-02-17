#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

	char tab [50]= { 's', 'h', 'a', 'n', 'a'};
	printf("%s\n",tab);

	char text3[50] = "Salut";

						/* Copie d'une chaine dans une chaine vide */
	char text1 [50];
	strcpy (text1, tab);
	printf("%s\n", text1);
						/* Ajout d'une chaine à une chaine*/

	char text2 [50]= "bonjour ";
	strcat (text2, text1);
	printf("%s\n", text2 );

						/*Comparaisons*/

	/*chaines identiques*/

	if (strcmp (text1, text2)==0){
		printf("Chaine pas identique\n");
	}else {
		printf("Chaine identique\n");
	}

	/*Chaine1 avant (ordre lexico) chaine2*/
	if (strcmp (text1, text3)>0){
		printf(" \"shana\" après \"salut\"  \n");
	}else {
		printf(" \"shana\" avant \"salut\"\n");
	}

	/* Chaine2 avant (ordre lexico) chaine 1*/
	if (strcmp (text1, text3)<0){
		printf(" \"salut\" après \"shana\" \n");
	}else {
		printf(" \"salut\" avant \"shana\"\n");
	}


return EXIT_SUCCESS;
}