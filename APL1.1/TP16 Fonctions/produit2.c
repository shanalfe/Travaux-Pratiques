#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Entiers (long n, char* argv[], char argc){
    int i;
    char *p;
    for (i=1; i<argc; i++){
         n *= strtol(argv[i], &p, 10);
         if ( (n==0) && (p == argv[i])){
             puts("Entrez des arguments");
             break;
         }else if ( (*p != '\0')){
             puts ("Problème");
             break;
         }
    }printf("%lo\n", n);
}

void main(int argc, char* argv[], char* p){
Entiers(1, argv, argc );
}
