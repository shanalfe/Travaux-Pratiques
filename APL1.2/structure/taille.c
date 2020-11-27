#include <stdio.h>
#include <stdlib.h>


struct Size {
    char troisieme;
    char deuxieme;
    char premier;
};

/*création d'alias de la structure*/
typedef struct Size taille;


int main(int argc, char const *argv[]){

    printf ( "%ld est la taille en octet\n", sizeof(taille));
    
    return 0;
}
