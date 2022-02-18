#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]){
    char string[300];
    FILE* fic;
    char* res;
    int n = 1;
    int ok = 0;
    int i ;
    if (argc < 2) {
        printf("Usage : %s <file>", argv[0]);
        return EXIT_FAILURE;
    }
    fic = fopen(argv[1], "r");

    do {
        res = fgets(string, 300, fic);
        for (i=0; i<300 && ok == 0; i++) {
            if (string[i] == '\n') {
                ok = 1;
                string[i] = '\0';
            }
        }
        printf("\033[92m%3d\033[m %s\n", n, string);
        n++;
        ok = 0;
    } while (res != NULL);
    fclose(fic);
    return EXIT_SUCCESS;
}