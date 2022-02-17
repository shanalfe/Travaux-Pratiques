#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char const *argv[])

{
    char str[100], rev[100];
    int t, i, j;
 
    puts (" Entrez une chaîne de caractère :  ");
    fgets(str, 100, stdin);
    
    j = 0;
    t = strlen(str);
 
    rev[t] = '\0'; //le dernier caractère doit toujours être égale à '\0'.
    for (i = t - 1; i >= 0; i--)
    {
      rev[j++] = str[i];
    }
    rev[i] = '\0';
 
    puts (rev);

    return EXIT_SUCCESS;
}