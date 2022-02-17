#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char * argv [] )
{
    double reel = 0.0;
    char c;
   
    printf("Entrez un réel : \n");
    scanf("%lf", &reel);

    printf("Notation scientifque du réel est : %2.2E \n", reel);

      printf("Saisissez un caractere : \n");
    scanf(" %c", &c); //on met un espace car sinon scanf n'est pas prit en compte
        
    
    for ( int i=0; i<=5;i++){
        printf("%c \n", c);
    }

  return EXIT_SUCCESS;
}
