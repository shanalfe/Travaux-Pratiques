#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	int i,j;
    int tab1 [2][5] = {
    	{1,2,3,4,5},
    	{1,2,3,4,5}
    };

     int tab2 [3][5] = {
    	{1,2,3,4,5},
    	{6,7,8,9,10},
    	{11,12,13,14,15}
    };

     int tab3 [5][5] = {
    	{0,0,0,0,0},
    	{1,0,0,0,0},
    	{1,2,0,0,0},
    	{1,2,3,0,0},
    	{1,2,3,4,0}
    };

    
    printf("\t t1\n\n");
    for (i=0; i<2; i++){
    	for (j=0; j<5; j++){
    		printf("%3d", tab1[i][j] );
    	} printf("\n");
    }printf("\n");

     printf("\t t2\n\n");
    for (i=0; i<3; i++){
    	for (j=0; j<5; j++){
    		printf("%3d", tab2[i][j] );
    	} printf("\n");
    } printf("\n");

    printf("\t t3\n\n");
    for (i=0; i<5; i++){
    	for (j=0; j<5; j++){
    		printf("%3d", tab3[i][j] );
    	} printf("\n");
    }



	return EXIT_SUCCESS;
}