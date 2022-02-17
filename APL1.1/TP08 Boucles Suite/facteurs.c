#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	int n, q, pgcd;
	int i;
	//int v1 = 2, v2 = 3, v3 = 5, v4 = 7, v5 = 11, v6 = 13;

	printf("Entrez un entier naturel : ");
	scanf("%d", &n);

	printf("%d =", n);


    for (i=0; i<=n; i++){
	n = n/2;
	printf(" %d \n", n);
    }

	return EXIT_SUCCESS;
}
