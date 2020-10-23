#include <stdio.h>
 #include <stdlib.h>
int main(int argc, char const *argv[]){

	unsigned int a = 6UL;
	unsigned int b = 0x6;
	double c = 6.0;
	char d = '\66';

	printf("%lu\n", a );
	printf("%x\n", b);
	printf("%f\n", c);
	printf("%c\n", d );

	return EXIT_SUCCESS;
}
