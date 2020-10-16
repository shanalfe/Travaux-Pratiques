
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){

	srand(time(NULL));
	int a, b, c, i = 0, choix, result;

	printf("Bienvenue au jeu 421 \n");

		while (choix !=1 ){

			for (i=0;i<3; i++){

				a = rand()% 6+1;
				b = rand()% 6+1;
				c = rand()% 6+1;
				//a=2;b=4;c=1;

				printf("[%d] [%d] [%d] \n",a,b,c );
				printf("Relancer ? (1/0)\n");
				result = scanf("%d", &choix);
				
				
					if( ((a==4)||(a==1)||(a==2)) && ( (b==4)||(b==1)||(b==2) ) && ((c==4)||(c==1)||(c==2)) ){
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
