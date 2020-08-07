#include<stdlib.h>
#include<stdio.h>


int main(int argc, char const *argv[])
{
	int entier, nbre;
	int multiple;
	
	printf("Entrez un entier naturel :\n");
	
	// resulat vaut l'entier rentré par l'utilisateur
	nbre = scanf("%d", &entier);


	if (nbre%3 == 3){
		printf("%d est un multiple de 3\n", entier );
	}else{
		if(nbre%3 == 1){
			multiple = entier - 1;
			printf("%d n'est pas un multiple de 3, mais %d est le nombre le plus proche\n",entier, multiple );

		}else{
			multiple= entier + 1;
			printf("%d n'est pas un multiple de 3, mais %d est le nombre le plus proche\n",entier, multiple );
		}
	}



	return EXIT_SUCCESS;
}