#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	  //  int tab[2][2] = { { 1, 2 }, { 3, 4 } };

    /*printf("tab[0][0] = %d\n", tab[0][0]);
    printf("tab[0][1] = %d\n", tab[0][1]);
    printf("tab[1][0] = %d\n", tab[1][0]);
    printf("tab[1][1] = %d\n", tab[1][1]);*/


    int tab [2][5] = {
    	{1,2,3,4,5},
    	{1,2,3,4,5}
    };

    int i,j;

    printf("\t t1\n\n");

    for (i=0; i<2; i++){
    	for (j=0; j<5; j++){
    		printf("%3d", tab[i][j] );

    	} printf("\n");
    }


	return EXIT_SUCCESS;
}