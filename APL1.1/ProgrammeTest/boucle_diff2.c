#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
   
   int i =0;
   for (i=0; i<5; i++){
       printf ("  %d", i);
   }printf ("\n");

    int k=0;
   while (k<5){       
       printf ("  %d", k);
       ++k;
   }printf ("\n");

    int j=0;
   do {
       
       printf ("  %d", j);
       j++;
   } while (j<5);
   
    return 0;
}
