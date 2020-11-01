/*Érivez un programme qui demande deux entiers relatifs, puis affiche le signe de leur produit sans faire la multipliation*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

int a, b;

	printf("Entrez deux entiers : \n");
	printf("premier entier :\n");
	scanf("%d", &a);

	printf("le deuxième:\n");
	scanf("%d", &b);
	
	if (a == 0 || b== 0){
		printf("le produit est nul\n");
	}
	if (a<0 && b<0 || a>0 && b>0){
		printf("Le produit est positif\n");
	} 
 	if(a>0 && b<0 || a<0 && b>0){
		printf("Le produit est négartif\n");
	}

	return EXIT_SUCCESS;



}
