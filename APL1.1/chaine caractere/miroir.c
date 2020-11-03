#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
	  int i, j, temp;
	  char tab[50];

	if (argc > 1) {

		for (i=1; i<argc; i++){
			 while(argv[i][j] != '\0') {
            j++;
       		 }
       	i == strlen(tab);
       	puts (tab);
		}
		
		
  } else {
    	puts("Erreur, pas d'argument entré.");
    	EXIT_FAILURE;
  }

return EXIT_SUCCESS;
}