#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){

    long long int n = 32217268732456802LL;
   // long long int m = 981111111511115114LL;  
    char tab [150];  
    
    printf("n en chaine de caractere : %s\n", &n);

    long c = strtol (tab, NULL, 2);

    printf("%lo\n", tab);

   // printf("n en hexadecimal : %x\n", &n); // affichage en hexadécimal

   //  printf("chaine de caractere : %s\n", &m);

 
     

   
    return EXIT_SUCCESS;
}

/*

ASCII : bonsoir
hexadécimal : 62 6f 6e 73 6f 69 72  (obtenu grace au tableau ascii)

98 111 110 115 111105 114
en binaire : 
0110 0010 0110 1111 0110 1110 0111 0011 0110 1111 0110 1001 0111 0010

6       2   6    f   6    




ASCII : bonjour

*/
