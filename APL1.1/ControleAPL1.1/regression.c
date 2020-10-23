#include <stdio.h>
 #include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){

	double taille =0.00;
	long int lround(double taille);
	int po=0, pi=0, t=0;

	printf("Entrez votre taille : ");
	scanf("%lf", &taille);

	/*conversion de mètre en cm*/
	t = taille*100;

	/*récupération du nombre de pied*/
	for(pi=0; t - (12*2.56)>=0; ++pi){
		t= t-(12*2.56);
	}
	/*récupération du nombre de pouce*/
	for(po=0; t - 2.56>=0; ++po){
		t= t-2.56;
	}

	/*Affichage avec s ou sans s*/
	if(pi>1){
		printf("%d pieds",pi );
	} else  {
		printf("%d pied\n",pi );
	}
	if (po>1){
		printf(" et %d pouces\n",pi );
	} else {
		printf(" et %d pouce\n",po );
	}

	return EXIT_SUCCESS;
}
