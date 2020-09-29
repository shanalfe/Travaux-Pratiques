#include <stdio.h>
#include<stdlib.h>

int main()
{

int nombre;
int c, d, u;

printf("Entrez un entier \n");
scanf("%d", &nombre);

c = nombre / 100;
d = (nombre - c *100) /10;
u = nombre - (c * 100 + d * 10);

printf("%d est la centaine, %d est la dizaine, %d est l'unité", c, d, u);

    return EXIT_SUCCESS;
}
