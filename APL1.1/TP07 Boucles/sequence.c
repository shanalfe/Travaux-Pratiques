#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{

	/* déclaration des variables*/
	int a, b;
	int x,y;

	/*demande à l'utilisateur*/
	printf("entrez un premier entier :\n");
	scanf("%d", &a);

	printf("entrez un second entier :\n");
	scanf("%d", &b);

	/* afficher tout les entiers coomprit entre a et b */ 
	while(x!=b){
		x=a++;
		/* affichage des entiers*/
		printf("%d\n",x );
	}

	return 0;
}