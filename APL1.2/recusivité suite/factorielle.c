#include <stdio.h>
#include <stdlib.h>


int Fact (int n){
	if (n ==0){
		return 1;
	}else {
		return n * Fact (n-1);
	}
}


int main(int argc, char const *argv[]){

	int n;
	printf("n = ");
	scanf("%d", &n);
	printf("%d = %d \n", n, Fact (n) );


return EXIT_SUCCESS;
}