#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

int i = 1, j;
int k = 1, l = 1;
int tab1 [2][5];
int tab2 [3][5];


	for (i = 0; i < 5; ++i)
	{
		tab1[0][i]=i;
		tab1[1][i]=i;
	}
printf("\t t1\n\n");
    for (k=0; k<2; k++){
    	for (l=0; l<5; l++){
    		printf("%3d", tab1[k][l] );
    	} printf("\n");
    }printf("\n");


for (i = 0; i < 5; ++i)
	{
		tab2[0][i]=i;
		tab2[1][i]=i;
		tab2[2][i]=i;
	}


printf("\t t2\n\n");
    for (k=0; k<3; k++){
    	for (l=0; l<5; l++){
    		printf("%3d", tab2[k][l] );
    	} printf("\n");
    }printf("\n");

	

return EXIT_SUCCESS;
}