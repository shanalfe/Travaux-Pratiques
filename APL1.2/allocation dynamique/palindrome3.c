#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// strllen

#define TAILLE 256

int Inverse (char * chaine) {
    int lg = strlen (chaine);
    char*  palindrome = (char* )malloc (sizeof(char) * (lg +1));
    if (palindrome) {
    }
    int j, i;  
    for (i = 0, j = lg -1; i < lg ; i ++, j --) {
        palindrome [i] = chaine [j];
    }
    if (!strcmp (palindrome, chaine)) {
        printf ("la chaine:%s est un palindrome \n", chaine);
    }
    else {
        printf ("la chaine:%s n'est pas un palindrome \n", chaine);
    }
    free (palindrome);
}


int main(int argc, char const *argv[])
{
    char* radar[TAILLE];
    Inverse("radar");
    return 0;
}