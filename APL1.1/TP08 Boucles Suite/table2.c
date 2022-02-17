#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	
	//déclaration des variables
	int result=0,i=0,j=0,size=0;	
	
	printf("Choisi la taille: ");
	result = scanf("%d",&size);	
	
	if(result != 1){
		printf("FAILURE");
		return EXIT_FAILURE;
	}

	printf("  X  |");

	//affichage horizontal
	for(i=0;i<=size;i++){
		printf("%5d",i); // le 5 permet l'espacement entre
	}

	printf("\n");
	printf("-----+");

	//affichage des traits horizontaux
	for(i=0;i<=size;i++){
		printf("-----");
	}

	printf("\n");

	//calcul boucle colonne
	for(i=0;i<=size;i++){
		printf("%3d  |",i); //affichage 1er trait; 3 est la distance
		
		//boucle ligne 
		for(j=0;j<=size;j++){
			printf("%5d",j*i);
		}
		
		printf("\n");
	}

	return EXIT_SUCCESS;
}
