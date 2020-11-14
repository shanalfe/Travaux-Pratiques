#include <stdio.h>
#include <stdlib.h>

void Triangle (int t){
    int i =0, j=0;
    for (i=0; i < t; i++){
        for (j=0; j<i+1; j++){
            printf ("*");
        }printf ("\n");
    }
}

int main(int argc, char const *argv[]){
    int t;
    printf ("Taille : ");
    scanf ("%d", &t);
    Triangle (t);    
    return 0;
}
