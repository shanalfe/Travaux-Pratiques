#include <stdio.h>
 #include <stdlib.h>

int main(int argc, char const *argv[]){

	int e, i = 0, j=0, r=1;
	float a;
	float *p = NULL;

	printf("Entrez le nombres d'entiers souahités : ");
	scanf ("%d", &e);

	if (e > 0){

		p = malloc( e * sizeof (float) );

		if (p == NULL){
			exit (0);
		}

		for (i =0; i<e; i++){
			scanf ("%f", &p[i]);
		}
		printf("\n");

		for (i=0; i<e; i++){

			for (j =0; j<e; j++){

				if ( (p[i] == p[j]) && (j != i) ){
					r = 0;
				} 

			} 
			if (r){
				printf("%f\n", p[i] );
			}

			r=1;
		}
		printf("\n");

	free (p);

	} else {
		printf("Erreur !\n");
		return EXIT_FAILURE;
	}	

	return EXIT_SUCCESS;
}