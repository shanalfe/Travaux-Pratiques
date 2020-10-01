#include<stdio.h>
#include<stdlib.h>




int main(int argc, char const *argv[])
{
	/*déclaration des variables*/
	int a, b, c;

	/*données rentrées par l'utlisateur*/
	printf("Entrez un premier entier :\n");
	scanf("%d", &a);

	printf("Entrez un deuxième entier :\n");
	scanf("%d", &b);

	printf("Entrez un dernier entier :\n");
	scanf("%d", &c);

	/*comparaison des différents nombres*/

	if((a>b) && (a>c) && (b>c)){
		printf(" le plus grand nombre est %d, puis %d et le plus petit nombre est %d\n",a,b,c );
	}

	if((a<b) && (a<c) && (b>c)){
		printf(" le plus grand nombre est %d, puis %d et le plus petit nombre est %d\n",b,c,a );
	}

	if((a>b) && (a<c) && (b<c)){
		printf(" le plus grand nombre est %d, puis %d et le plus petit nombre est %d\n",c,a,b );
	}
	
	return 0;
}