/* Écrivez un programme qui prend un nombre quelconque d'entiers 
sur la ligne de commande et affiche leur produit.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Entiers (long n, char* argv[], char argc){
    int i;
    for (i=1; i<argc; i++){

         n *= strtol(argv[i], NULL, 10);
    }printf("%lo\n", n);
}

void main(int argc, char* argv[]){
Entiers(1, argv, argc);
}