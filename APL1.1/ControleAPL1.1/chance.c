#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){

	srand(time(NULL));

	int a, b, c, i = 0, choix, result, d;

	printf("Bienvenue au jeu 421 \n");


		while (choix !=1 ){

			for (i=0;i<3; i++){

				a = rand()%7;
				b = rand()%7;
				c = rand()%7;
				//a=2;b=4;c=1;

				printf("[%d] [%d] [%d] \n",a,b,c );
				printf("Relancer ? (1/0)\n");
				result = scanf("%d", &choix);
				d= a + b + c;
				if(d==7){
			printf("Bravo, tu as gagné !!\n");
			return EXIT_FAILURE;
		
			}
		
		
		}

		if(result == 1){
			printf("Tu as utilisé tes 3 chances, Tu as perdu, Au revoir\n");
			return EXIT_FAILURE;
	}

	}

return EXIT_SUCCESS;
}