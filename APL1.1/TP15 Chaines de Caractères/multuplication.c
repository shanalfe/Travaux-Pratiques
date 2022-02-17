/*Écrivez un programme qui affiche le produit de ses deux premiers arguments (on suppose que ce sont des entiers).*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	long a = 0,b = 0;
	char* positionA;
	char* positionB;


  //prend la 1er chaine de caractère en argument
	a = strtol(argv[1], &positionA, 10);

  //prend la 2e chaine de caractère en argument
  	b = strtol(argv[2] , &positionB, 10);

  	printf("%ld \n",a*b); // car type long int
	
	return EXIT_SUCCESS;
}