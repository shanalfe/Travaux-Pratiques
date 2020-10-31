/*Écrivez un programme qui affiche le produit de ses deux premiers arguments (on suppose que ce sont des entiers).*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	long a = 0,b = 0;
	char* positionA;
	char* positionB;

	if (argc > 3 || argc <= 2)
	{
		fprintf(stderr, "Pas le bon nombre d'arguments syntaxe = './mult int1 int2'\n");
		return EXIT_FAILURE;
	}

  //prend la 1er chaine de caractère en argument
	a = strtol(argv[1], &positionA, 10);

  	if ((a == 0) && (positionA==argv[1])){
    	puts("Ce texte n'est pas un entier naturel !");
    	return EXIT_FAILURE;
  	} else if (*positionA != '\0'){
    	puts("Conversion partielle !");
  	}


  //prend la 2e chaine de caractère en argument
  	b = strtol(argv[2] , &positionB, 10);
    
  	if ((b == 0) && (positionB==argv[2] )){
    	puts("Ce texte n'est pas un entier naturel !");
    	return EXIT_FAILURE;
  	} else if (*positionB != '\0'){
    	puts("Conversion partielle !");
  	}

  	printf("%ld \n",a*b);
	
	return EXIT_SUCCESS;
}