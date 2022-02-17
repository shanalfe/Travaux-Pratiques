#include <stdio.h>
#include <stdlib.h>


void Figure (int la, int lo){
    int i = 0, j = 0;
    for (i=0; i<lo; i++){        
        for (j = 0; j < la; j++){
            printf ("*");
        }printf ("\n");
    }
}

int main(int argc, char const *argv[]){
    int lo, la;
    printf ("Longueur : ");
    scanf ("%d", &lo);
    printf ("Largeur : ");
    scanf ("%d", &la);
    printf ("\n");
    Figure ( la, lo); // appel de la fonction
    
    return 0;
}
