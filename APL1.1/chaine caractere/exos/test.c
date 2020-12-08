#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 26

int main(int argc, char const *argv[]){
    
    if (argc > 1){
        char str [100];
        strcpy (str, argv [1]);
        printf ("%s", str);

    } else {
        puts ("Erreur");
        return EXIT_FAILURE;
    }


    return 0;
}