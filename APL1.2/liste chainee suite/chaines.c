#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mail
{
    char character;
    struct mail* suivant;
};

typedef struct mail maillon;

maillon* ajouter_debut(maillon* premier, char nouveau)
{
    maillon* p = (maillon*) malloc(sizeof(maillon));

    if (p)
    {
        p->suivant = premier;
        p->character = nouveau;
    }

    return p;
}

void afficher(maillon* premier)
{
    maillon* p;
    for(p = premier; p != NULL; p = p->suivant)
    {
        printf("%c", p->character);
    }
}

int main(int argc, char const *argv[])
{
    maillon* liste = NULL;

    char* str = "Hello World !";
    int i = strlen(str);

    while(i >= 0)
    {
        liste = ajouter_debut(liste, str[i]);
        i--;
    }

    afficher(liste);
    printf("\n");

    return 0;
}