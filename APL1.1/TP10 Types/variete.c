#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	printf("%d\n",77 ); // int
	printf("%f\n", 77.0f); //float aff 77.00000
	printf("%lf\n", 77.0); // double aff 77.0000
	printf("%ld\n", 77L);  // long int
	printf("%1.0LF\n",77.0L );
	printf("%u\n", 77U); // unsigned int 
	printf("%lu\n", 77UL); // long int
	printf("%lld\n", 77LL ); // long long int
	printf("%llu\n",77ULL ); // unsigned long long int
	printf("%hhd\n", 77 ); // signed char
	printf("%hhu\n", 77 ); //unsigned char
//	printf("%c\n", ); // caractere affiche M


	return EXIT_SUCCESS;
}
