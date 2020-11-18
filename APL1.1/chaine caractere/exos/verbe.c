/*ui lit un verbe régulier en "er" au clavier et qui en affiche la conjugaison au présent de l'indicatif de ce verbe. 
Contrôlez s'il s'agit bien d'un verbe en "er" avant de conjuguer*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

	char tab [50], tab2 [50];
	int i =0, t;

	puts ("Entrez votre verbe :");
	fgets (tab, 50, stdin);

	t = strlen (tab);

	if ( (tab[t-3] != 'e') || (tab [t-2]!= 'r') ){
		puts ("Ce n'est pas un verbe du premier groupe.");
		return EXIT_FAILURE;
	}else {
		tab[t-2]= '\0';

		tab2 [0]= '\0';
		strcat (tab2, "je ");
		strcat (tab2, tab);
		strcat (tab, "e");
		puts (tab2);

		tab2 [0]= '\0';
		strcat (tab2, "tu ");
		strcat (tab2, tab);
		strcat (tab, "s");
		puts (tab2);

		tab2 [0]= '\0';
		strcat (tab2, "il/elle  ");
		strcat (tab2, tab);
		strcat (tab, "");
		puts (tab2);

		tab2 [0]= '\0';
		strcat (tab2, "nous ");
		strcat (tab2, tab);
		strcat (tab, "ons");
		puts (tab2);

		tab2 [0]= '\0';
		strcat (tab2, "vous ");
		strcat (tab2, tab);
		strcat (tab, "z");
		puts (tab2);

		tab2 [0]= '\0';
		strcat (tab2, "ils/elles ");
		strcat (tab2, tab);
		strcat (tab, "nt");
		puts (tab2);

	}

return EXIT_SUCCESS;
}