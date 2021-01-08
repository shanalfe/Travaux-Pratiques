#include<stdio.h>
#include<stdlib.h>
#include<string.h>

unsigned long int nfib(unsigned n){
	unsigned long int fib;

	fib= n==1 ? 1UL : 0UL; 
	if(n>=2){

		fib =nfib(n-1)+nfib(n-2);

	return fib;
}
}

int main (int argc, char const *argv[]){
	printf("%Lu\n", nfib(20));


	return EXIT_SUCCESS;
}