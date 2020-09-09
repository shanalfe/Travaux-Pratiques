

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char const *argv[])
{
	int pieceA=0, pieceB=0, pieceC=0;

	double sommeClient = 0.00;
	
  printf("Vous devez 5,49 euros. Quelle est le montant de votre somme ?\n");  
  scanf("%lf", &sommeClient);


  sommeClient = sommeClient - 5,49;
      printf("On vous rend %lf euros\n", sommeClient );

  if (sommeClient<0)
  {
  	printf("Pas assez de sous...\n");
  }else if (sommeClient>0){
  	for (pieceA=0; sommeClient - 2 > 0; ++pieceA){
  		sommeClient= sommeClient-2;
  	}
  	for (pieceB = 0; sommeClient - 0.20 >=0; ++pieceB){
  		sommeClient= sommeClient-0.20;
  	}
  	for (pieceC = 0; sommeClient-0.01>=0; ++pieceC){
  		sommeClient=sommeClient-0.01;
  	}
  }

  printf("On vous a rendu %d pièce(s) de 2 euros, %d pièce(s) de 20 centimes et %d pièce(s) de 1 centime \n",pieceA, pieceB, pieceC );
    
    return EXIT_SUCCESS;
}
