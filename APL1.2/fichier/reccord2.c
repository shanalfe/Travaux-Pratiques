#include <stdio.h>
 #include <stdlib.h>

int main(int argc, char const *argv[]){
	int* s;
	char n [3];	
	FILE* flux;
	flux = fopen ("top10", "r");
	if (flux){	
		while (! feof (flux) ){		
			fread (&s, sizeof(int),1, flux );
			fread (&n, sizeof (char), 3, flux);	
			printf("%s : %09i \n",n, s );
		}
	fclose (flux);
	}else {
		perror ("The file doesn't exist !");
		return EXIT_FAILURE;
	}		
	return EXIT_SUCCESS;
}
