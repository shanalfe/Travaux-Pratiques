#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{

	/*déclaration des variables*/
	double montant;
	double partassure;
	double assurance;
	double max, min, norm;

	/* données rentrées par l'utilisateur*/
	printf("entrez le montant total des réparations :\n");
	scanf("%lf", &montant);


	/*calcul de 10% du montant de réparation*/
	partassure= (10*montant)/100;
	


	/*condition si le montant est inférieur à 200 euros*/
	if(montant<200){
		printf("L'assurance ne prend pas en charge \n");
		printf("Vous devez payer %lf euros \n", montant );
	}

	/*condition si le montant est supérieur à 200 euros */
	if(montant>=200){
		
			/* le client ne peut pas se faire rembourser moins que 200 euros*/
			if(partassure<=200){
				printf("Vous devez payer 200 euros \n");
				min=montant-200;
				/* affichage*/
				printf("La part de l'assurance est de %lf euros \n", min);
			}

			/* part de la franchise comprise entre 200 et 800 euros*/
			if((200<partassure)&&(partassure<=800)){
				printf("la part a assurer est de %lf euros\n", partassure);
				norm=montant-partassure; /*calcul*/
				/* affichage*/
				printf("la part de l'assurance est de %lf euros\n", norm);

			}

			/* le client ne peut pas payer plus de 800 euros de franchise*/
			if(partassure>800){
				printf("La part à assurer est de 800 euros\n");
				max= montant-800;
				/* affichage*/
				printf("l'assurance payera %lf euros\n", max);
			}

	}


	return EXIT_SUCCESS;
}