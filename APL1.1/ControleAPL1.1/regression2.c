#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){

    double t = 0.0;
    int po = 0, pi = 0;

    printf("Entrez votre taille : ");
    scanf("%lf", &t);

    t = (long int)lround(t*100);

    while (t >= (pi * (2.56 * 12))){
        pi++;
    }
    pi--;

    while (t >= (pi * (2.56 * 12)) + (po * 2.56)){
        po++;
    }
    po--;

  /*Affichage avec s ou sans s*/
    if(pi>1){
        printf("%ld pieds",lround(pi) );
    } else  {
        printf("%ld pied\n", lround(pi) );
    }
    if (po>1){
        printf(" et %ld pouces\n", lround(pi) );
    } else {
        printf(" et %ld pouce\n",lround(po) );
    }

    return EXIT_SUCCESS;
}