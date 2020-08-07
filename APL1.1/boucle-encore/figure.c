#include<stdio.h>
#include<stdlib.h>




int main(int argc, char const *argv[])
{

	// déclaration des variables
	int choix;

		//variables triangle
		int hauteurtriangle;
		int i,j;

	
		//variables carré
		int hauteurcarre;
		int k,l;
		

		//variable menu
		int a,b; 


	
	//boucle répétition du menu
	for(a=0; a<b; a++){

	//choix
	printf("Choissisez parmi les propositions suivantes :\n");
	printf("1) Triangle\n 2) Carré \n 3) quitter \n");
	scanf("%d", &choix);


	// triangle 
	if(choix==1){
		printf("Hauteur ?\n");
		scanf("%d", &hauteurtriangle);

			//boucle hauteur 
			for(i=0; i<hauteurtriangle; i++){
				// boucle ligne 
				for(j=0; j<hauteurtriangle; j++){
					printf("*");
				}

				printf("\n");

			}
	}



	//carré
	if(choix == 2){
		printf("Hauteur ?\n");
		scanf("%d", &hauteurcarre);

			for(k=0; k<=hauteurcarre; k++){
				printf("*");

				for(l=0; l<hauteurcarre-1; l++){
					printf("*");					
				}
				printf("\n");
			}



	printf("\n");
	}




	//quitter
	if(choix ==3){
		printf("Au revoir\n");
		return EXIT_SUCCESS; // fin du programme
	}

}

	return EXIT_SUCCESS;
}
