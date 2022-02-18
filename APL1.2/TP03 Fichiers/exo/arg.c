#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	
	FILE* file;
	file = fopen ("fichier.txt", "w");

	if (file){
		fwrite (argv[1], strlen (argv[1]), file);
		fclose (file);

}else {
	printf ("Aucun arguement.");
	return EXIT_FAILURE;
}

return EXIT_SUCCESS;
}