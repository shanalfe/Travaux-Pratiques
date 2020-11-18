#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int t [8]= {1,3,5,7,11,13,17,19};
    /*avec la boucle for*/
   
    for (int i=0; i<8; i=i+1){
        printf ("  %d", t[i]);
        i=i+1;
    }

    printf("\n");

  
    for (int i=0; i<8; i=i){
        printf ("A la position %d, on a %d \n", i, t[i]);
        i=i+1;
    }

    printf("\n");

    /*avec la boucle while*/
   int j =0;
    while (j<8){        
            printf ("  %d", t[j]);
             j=j+2;         
    }printf ("\n");

    /*avec la boucle do while*/
    int k = 0;
    do {
        printf ("  %d", t [k]);
        k=k+2;
    } while ( k<8 );
    printf ("\n");

    return 0;
}
