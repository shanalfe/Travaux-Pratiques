#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
	 
	  int i, j, d;
	  char tab[50];

	if (argc > 1) {

		
		for (i=1; i<argc; i++){
			tab[i] = argc;
			printf("%1s\n", argv[i]);			
		}


		
		
  } else {
    	puts("Erreur, pas d'argument entré.");
    	EXIT_FAILURE;
  }


  


return EXIT_SUCCESS;
}