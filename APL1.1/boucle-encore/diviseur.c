#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	    int a, b, p, i;
  
    printf("Entrez deux entiers: ");
    scanf("%d %d", &a, &b);
  
    for(i=1; (i <= a) && (i <= b); ++i)
    {
        if( (a%i==0) && (b%i==0) ){ //PGCD: diviser 2 nombres sans reste
            p = i;
        }
    }
  
    printf("Le PGCD de %d et %d = %d \n", a, b, p);

    return EXIT_SUCCESS;
}