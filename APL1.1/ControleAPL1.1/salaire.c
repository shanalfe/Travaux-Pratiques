#include <stdio.h>
#include <stdlib.h>


	double SalaireB (int x, int b){

		double SalB;	
		int tab [46];

		if ( (x>=0) && (x<=34) ) {
			SalB = b + ( b/34)* x ;
		} 

		if ( (x>34) && (x<=42) ) {
			SalB  = 2 * b ; 
		}
		return SalB;	
	}



	int AfficherTab (int tab []) {
		int x, b;
		double SalB;

		if ( (x<=0) && (x<=42) ){

			for (x=0; x<=34; x++ )  {
				SalB = b + ( b/34)* x ;
				tab[x]= SalB;
				printf("%3d\n",tab [x] );
			} 
			
			for  (x=34; x<=42; x++)  {
				SalB  = 2 * b ; 
				tab [x] = SalB;
				printf("%3d\n", tab[x] );
			}

			
		}

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


	AfficherTab (tab);


return EXIT_SUCCESS;
}