#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	int n,i ;
	int v1 = 0, v2 = 0, v3 = 0, v4 = 0;

	printf("Entrez un entier :");
	scanf("%d", &n);

	for (i=1; (i*i)<=n; i++){
		v1 = i*i;
	}

	printf("%d = %d +", n, v1);
		n = n - v1;

	for(i=1; (i*i)<=n; i++){
		v2 = (i*i);
	}

	printf(" %d +", v2);
		n = n - v2;

	for(i=1; (i*i)<=n; i++){
		v3 = (i*i);
	}

	printf(" %d +", v3);
	n = n - v3;

	for(i=1; (i*i)<=n; i++){
		v4 = (i*i);
	}
	n = n - v4;
	printf(" %d \n", v4);



	return 0;
}
