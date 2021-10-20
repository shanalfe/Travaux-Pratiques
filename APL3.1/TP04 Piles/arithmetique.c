#include <stdio.h>
#include <stdlib.h>



int main (int argc, char * argv[]) {
	

	int i = 1;
	
	//Gestion des erreurs
	if (argc == 1 ) {
		printf ("Number of args invalid ! \n");
		return EXIT_FAILURE;
	}
	
	//Récupération des arguments
	for (i=1; i<argc; i++){
		printf("%s\n", argv[i]);
	}


	return EXIT_SUCCESS;
}
