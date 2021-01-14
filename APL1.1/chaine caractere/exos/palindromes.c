#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

    char s[100];
    int i, j,b;

    printf ("Chaine de caractère : ");
    scanf ("%s", s);

    b =1;

    for ( i = 0, j = strlen (s) - 1; i < j ; i++, j--){
        if (s[i] != s [j]){
             printf ("%s n'est pas un palindrome \n", s);
             return EXIT_FAILURE;
           
        } else if (s[i] == s[j]) {
             printf ("%s est un palindrome \n", s);
             return EXIT_SUCCESS;
        }
    }
    
    return 0;
}
