#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char * argv [] )
{
    double reel = 0.0;
    char carac;
    int i;

    printf("Entrez un réel : \n");
    scanf("%lf", &reel);

    printf("Notation scientifque du réel est : %2.2lE \n", reel);

    printf("Saisissez un caractere : \n");

    scanf("%c", &carac);
    for ( i=0; i<=5;i++){
        printf("%c \n", carac);
    }

   EXIT_SUCCESS;
}
