#include <stdio.h>
#include <stdlib.h>


void Tableau (double tab[], int i){

	if (i > 0){

		Tableau (tab, i-1);
		putchar (',');
		printf(" %.2lf", tab [i] );

	}else {
		printf("%.2lf", tab [0] );
	}

}


int main(int argc, char const *argv[]){

	double tab [5]= { 1.25, 47.80, 77.01, 54.23, 895.14 };

	Tableau (tab, 4);
	printf("\n");

return EXIT_SUCCESS;
}