#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	FILE * f= NULL;
	int n =0;

	f = fopen ("compteur.dat", "r");

	if (! f){

		n = 1;
		f = fopen ("compteur.dat", "w");
		printf("%d \n", n);
		fwrite (&n, sizeof (int), 1, f);
		fclose (f);
		
	} else if (f){

		fread (&n, sizeof (int), 1, f);
		fclose (f);		
		f= fopen ("compteur.dat", "w");
		n++;
		printf("%d \n",n );
		fwrite (&n, sizeof (int), 1, f);
		fclose (f);
	}

return EXIT_SUCCESS;
}