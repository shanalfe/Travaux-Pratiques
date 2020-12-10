#include <stdio.h>
#include <stdlib.h>

	
	double SalaireB (int x, int b){

		double SalB;
		

		if ( (x>=0) && (x<=34) ) {
			SalB = b + ( b/34)* x ;
		} 

		if ( (x>34) && (x<=42) ) {
			SalB  = 2 * b ; 
		}
		return SalB;	
	}

	double * Remplissage (int b, int t){
		int i;
		double SalB;
		double * tab = NULL;
		tab = malloc (42*sizeof(double));

		for ( i=0; i<=42; i++){
			SalB = SalaireB (i, b);
			tab [i]= SalB;
		}

		return tab;
	}




int main(int argc, char const *argv[]){
	
	double SalB;
	int b,x;

	int tab [46];

	printf(" Salaire de base : ");
	scanf ("%d", &b);
	printf("Année de travail:  ");
	scanf ("%d", &x);

	SalB = SalaireB (x, b);
	printf("SalbX = %lf euros\n", SalB);


	double * tab = Remplissage (b);

	free (tab);


return EXIT_SUCCESS;
}