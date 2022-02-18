#include <stdio.h>
 #include <stdlib.h>

int main(int argc, char const *argv[]){
	int* s;
	char n [3];
	int i=0;


	FILE* flux;

	flux = fopen ("top10", "r");
	
	if (flux){
		for (i=0; i<10; i++){
			fread (&s, sizeof(int),1, flux );
			fread (&n, sizeof (char), 3, flux);	
			printf("%s : %09i \n",n, s );
		}

	fclose (flux);

	}else {
		perror ("Fichier non existant");
		return EXIT_FAILURE;
	}	
	
	return EXIT_SUCCESS;
}