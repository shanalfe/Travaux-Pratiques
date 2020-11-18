/* Écrivez un programme qui demande 5 entiers relatifs à l'utilisateur 
puis affiche les mêmes valeurs séparées par des virgules et dans l'ordre inverse de la saisie.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	int a,b,c,d,e;

	printf("Entiers n°1 :");
	scanf("%d", &a);
	printf("Entiers n°2 :");
	scanf("%d", &b);
	printf("Entiers n°3 :");
	scanf("%d", &c);
	printf("Entiers n°4 :");
	scanf("%d", &d);
	printf("Entiers n°5 :");
	scanf("%d", &e);

	printf("%d,%d,%d,%d,%d\n",e,d,c,b,a );

return EXIT_SUCCESS;
}