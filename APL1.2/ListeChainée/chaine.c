
#include <stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{


typedef struct Element Element;

struct Element
{
	 char caractere;
	 struct Element* suivant;
	
};



/* Affiche la pile */
View(Element);
puts("------");








	
	return EXIT_SUCCESS;
}
