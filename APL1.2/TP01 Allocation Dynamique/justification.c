#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]){

        char* chaine;
        int compt;

        chaine = malloc(sizeof(char*));

        if(chaine == NULL){
                fprintf(stderr, "Erreur");
                exit (1);
        }
        printf("Entrez votre chaine de carractere\n");
        compt = scanf("%s", chaine);


        chaine = realloc(chaine, sizeof(char*) * strlen(chaine));

        
        printf("%s\n", chaine);

        free(chaine);

        return EXIT_SUCCESS;
}