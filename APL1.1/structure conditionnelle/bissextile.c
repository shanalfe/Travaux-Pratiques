#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int annee, x, y, z;


	printf("Entrez une année :\n");
	scanf("%d", &annee);

	x = annee%4;
	y= annee%100;
	z= annee%400;


	if(x == 0 && y != 0|| z == 0){
		printf("%d est une année bissextile.\n", annee );
	} else {
		printf("%d n'est pas une année bissextile. \n", annee);
	}

	return EXIT_SUCCESS;
}
