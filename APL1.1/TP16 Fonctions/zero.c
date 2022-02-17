#include <stdio.h>
#include <stdlib.h>

/*
 Voici une fonction qui met une variable à zéro, dans un programme qui illustre son usage :

void zero(double a) {
  a = 0.0;
}
 
int main(void) {
  double x=37.5;
  printf("avant : %f\n", x);
  zero(x);
  printf("après : %f\n", x);
  return EXIT_SUCCESS;
}


Affiche : 	37.5000000
			37.5000000

*/

double zero(double a) { /*on utilise double car correspond au type de sortie */
 	 a = 0.0;
 	 return a; /*retourne a*/
}
 
int main(void) {
  double x=37.5;
  printf("avant : %f\n", x);
  x = zero(x); /*on associe la valeur de a à x, soit 0.00*/
  printf("après : %f\n", x);
  return EXIT_SUCCESS;
}

/*

Affiche : 	37.5000000
			 0.5000000
*/