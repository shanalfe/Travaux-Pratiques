#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv []) {
    int i;
    int j;
     
    printf("Binaire : %s\n", argv[0]);
    for(i = 1; i < argc; i++) {
        printf("Option num %d : %s", i, argv[i]);
 
        j = 0;
        while(argv[i][j] != '\0') {
            j++;
        }
 
        printf(" (%d caracteres)\n", j);
    }
 
    return EXIT_SUCCESS;
}