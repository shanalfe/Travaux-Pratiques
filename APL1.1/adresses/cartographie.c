#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	int a;
	float b;
	long double c;
	char d;
	short int e;
	long long unsigned int f;

	printf("%p\n", &a );
	printf("%p\n", &b );
	printf("%p\n", &c );
	printf("%p\n", &d );
	printf("%p\n", &e );
	printf("%p\n", &f );


return EXIT_SUCCESS;
}