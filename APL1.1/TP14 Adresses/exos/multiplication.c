#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int a, b, r;
    int *pa, *pb, *pr;

    pa = &a;
    pb = &b;
    pr = &r;

    printf ("Deux entiers : ");
    scanf ("%d %d", pa, pb);

    *pr = (*pb) * (*pa);

    printf ("Resulat de la multiplication : %d \n", r);
    
    return 0;
}
