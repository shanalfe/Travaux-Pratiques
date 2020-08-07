#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char const *argv[])
{
  float sommeClient;

  printf("Vous devez 5,49 euros. Quelle est le montant de votre somme ?\n");  
  scanf("%lf", &sommeClient);

  printf(" somme donnée : %lf\n", sommeClient );
    
    return EXIT_SUCCESS;
}
