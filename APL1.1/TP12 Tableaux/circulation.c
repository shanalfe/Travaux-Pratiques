#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  A  4
int main(int argc, char const *argv[]){    
    int tab [10], i, a, tabc[10];
    srand(time(NULL));
    for (i=0; i<10; i++){
        a = rand()%101 -50;
        tab[i]= a;
    }
    for (i=0; i<10; i++){
        printf("+-----");
    }
    printf("+\n");
    printf("| ");
    for(i=0; i<10; i++){    
        printf("%3d | ", tab[i] );
    }
    printf("\n");
    for (i=0; i<10; i++){
        printf("+-----");
    }
    printf("+\n"); 
    // deuieme tableau
    for (i=0; i<10; i++){
        printf("+-----");
    }
    printf("+\n");
    printf("| ");    
    //circulation    
    for(i=0; i<10; i++){        
        tabc[(i+A)%10] = tab[i];
    }    
    for (i=0; i<10; i++){
        printf("%3d | ", tabc[i] );
    }    
    printf("\n");
    for (i=0; i<10; i++){
        printf("+-----");
    }
    printf("+\n");
    printf("|");
    return EXIT_SUCCESS;
}
