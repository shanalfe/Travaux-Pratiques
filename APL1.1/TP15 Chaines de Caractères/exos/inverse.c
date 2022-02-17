/* lit deux chaînes de caractères et permute leurs 
contenus en utilisant les deux méthodes suivantes:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

	char tab1 [100], tab2 [100], a [100], b [100], c [100];
	int i;

	puts ("Donnez deux chaines de caractères :");
	fgets (tab1, 100, stdin);
	fgets (tab2, 100, stdin);

	/*avec strcpy*/
	//changement du contenu. 
	//strcpy (desitination, source)
	strcpy (a, tab1);
	strcpy (tab1, tab2);
	strcpy (tab2, a);

	puts (tab1);
	puts (tab2);

	/*sans strcpy*/
	/*strlen prend un chaîne en argument, renvoie le nombre de 
	caractères qui la composent (sans le '\0').*/
	
	for (i =0; i<strlen(tab1) || i<= strlen (tab2); i++){
		c [100]= tab1[i];
		tab1[i]= tab2 [i];
		tab2 [i]= c [100];
	}

	puts (tab1);
	puts (tab2);

return EXIT_SUCCESS;
}