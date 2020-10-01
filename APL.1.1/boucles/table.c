#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
	/*déclaration des variables*/
	int entier;
	int a=0; /*variable qui multiplie*/
	int resultat; /* variable résultat d'une multiplication*/

	/*données rentrées par l'utilisateur*/
	printf("entrez un entier pour avoir sa table de multiplication :\n");
	scanf("%d", &entier);

	/*boucle qui répète la multiplication*/
	while(a<10){
		a++;
		resultat=entier*a;
		/* affichage du résultat*/
		printf("%d x %d = %d\n", entier, a, resultat );
	}

	return 0;
}