#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){

    ssize_t r;
    short int tab [8];
    int i;
    FILE* f;
    f = fopen (argv[1], "r");


    if (f) {
         do {
            r = fread (tab, 16, 1, f );
            for (i = 0; i < 8; i ++){
                if (tab [i] < 0x1000){
                    printf("%0x ", tab [i]);
                } else {
                    printf("%x ", tab [i]);
                }
            }
        } while (r == 1);
          fclose (f);
          printf("\n");
        
    }else {
        perror ("The  file doesn't exists !");
        exit (EXIT_FAILURE);
    } 
    return EXIT_SUCCESS;
}
