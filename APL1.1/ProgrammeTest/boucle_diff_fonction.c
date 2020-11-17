#include <stdio.h>
#include <stdlib.h>


int Boucle ( int t[] ){
    int i=0;

    for (i=0; i<8; i=i+1){
        printf ("  %d", t[i]);
        i=i+1;
    }
}

int main(int argc, char const *argv[]){
    int t [8] = {1,3,5,7,11,13,17,19};
  int i;
   Boucle (t);
     return 0;
}
