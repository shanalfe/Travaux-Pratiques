/*Écrivez un programme qui lit une ligne de texte (ne dépassant pas 200 caractères)
et la stocke dans une chaîne de caractères, puis affiche :
le nombre de 'e' qu'elle contient,
le nombre de caractères différents qu'elle contient.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

	char tab [200];
	int i, j, t = 0, n = 0;

	puts ("Entrez votre texte");
	fgets (tab, 200, stdin);

	for (i=0; i<200; i++){
		if (tab[i]== 'e'){
			t = t+1;
		}
	}
	printf("Il y a %d \"e\"\n",t );

	for (i = 0; i<200; i++){
		if (tab[i] == '\0'){
			break;
		}
		for(j=0; j<i; j++){
			if (tab[i]==tab[j]){
				break;
			} else if (i == j+1){
				n++;
			}
		}
	}
	if (n>1){
		printf("Il y a %d de caractères différents\n",n );
	}else {
		printf("Il y a un seul caractère différent\n");		
	}


return EXIT_SUCCESS;
}