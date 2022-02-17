#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	long long int n = 4614256656552045848LL;
  	double* p = (double*) &n;
  	printf("π = %f\n", *p);
 
  long long int m = 4614256656552045848LL;
  double* q = (double*) &m;

  *q *=2; // pointeur q, on muliplie par 2 l'adresse

  printf("π = %f\n", *q);

  return EXIT_SUCCESS;
}