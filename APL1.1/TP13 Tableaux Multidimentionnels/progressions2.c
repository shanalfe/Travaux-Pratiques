#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

int i = 0, j = 1;
int k = 1, l = 1, n=0;

int tab1 [2][5], tab2 [3][5], tab3 [5][5];


// tab1
for (i = 1; i<2; i++){
	for (j = 0; j < 5; j++){
		tab1[i][j]=j;
	}
}

printf("\t t1\n\n");
    for (i=0; i<5; i++){
    	for (j=1; j<=5; j++){
    		printf("%3d", tab1[i][j] );
    	} printf("\n");
    }printf("\n");


// tab2
 
 for(j=1; j<3; j++){
	for (i = 0; i < 5; ++i){
		tab2[j][i]=i;
	}
}	

printf("\t t2\n\n");
for (i=0; i<3; i++){
	for (l=0; l<5; l++){
    	printf("%3d", tab1[k][l] );
    	} printf("\n");
    
    }printf("\n");




return EXIT_SUCCESS;
}