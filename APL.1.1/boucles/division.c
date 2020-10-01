#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	
	/* déclaration des variables*/
	int a; /* dividende*/ 
	int b; /*diviseur*/
	int y; /*quotient*/
	int z; /*reste*/

	/* données récoltées de l'utilisateur*/
	printf("entrez une valeur entière positive ou nulle (qui sera le diviseur) :\n");
	scanf("%d", &a);

	printf("entrez une valeur entière strictment positive (qui sera le dividende) :\n");
	scanf("%d", &b);

	/* condition si les valeurs ne sont pas respectées*/
	// if((a<-1) && (b<0)){
	// 	printf(" Conditions non respectées\n");
	// }

		/*calcul*/
		y=a/b; /*calcul pour avoir le quotient*/
		z=a%b; /*calcul pour avoir le reste, on utilise le pourcentage*/

		/*affichage du résultat*/
		printf("%d = %d x %d + %d \n", a, y, b, z );

	return EXIT_SUCCESS;
}