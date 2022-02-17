#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
	 
	char str[100], rev[100];
    int t, i, j;

	if (argc > 1) {

		j = 0;
		t = strlen (argv[1]);

		 rev[t] = '\0'; 

    for (i = t - 1; i >= 0; i--){
      rev[j++] = str[i];
    }

    rev[i] = '\0';
 
    puts (rev);

		return EXIT_SUCCESS;
		
		
  } else {
    	puts("Erreur, pas d'argument entré.");
    	EXIT_FAILURE;
  }

return EXIT_SUCCESS;
}