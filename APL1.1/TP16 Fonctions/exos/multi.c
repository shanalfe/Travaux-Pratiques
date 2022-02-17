#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, tot = 0;

    for (i=1; i<argc; i++) 
        tot *= atoi(argv[i]);
    printf("%d\n", tot);

    return 0;
}