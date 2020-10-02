#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int main(int argc, char const *argv[])
{
	/* déclaration des variables*/
	int chance; /* 5 tentatives*/
	int x; /* nombre rentré par l'utilisateur*/
	srand(time(NULL)); //permet la regénération du nombre aléatoire 
	int nbre = rand()%101; /* nombre aléatoire de 0 à 100*/



	printf("Bonjour, trouver un nombre entre 0 et 100, vous avez 5 tentatives\n" );


	for(chance=0; chance <5; chance ++){
		
	/* nombre aléatoire*/
	scanf("%d", &x);
		
		if(x!=nbre){

			if(x>nbre){
				printf("-\n");
			}
			if(x<nbre){
				printf("+\n");
			}
		}else{
			printf("Bravo tu es un génie, le nombre qui était %d\n", nbre);
		}


	}

	printf("Tu as perdu, le nombre était %d\n", nbre);


	return EXIT_SUCCESS;
}



