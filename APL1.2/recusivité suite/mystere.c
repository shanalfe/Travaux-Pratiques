#include <stdio.h>
#include <stdlib.h>



unsigned int mystere(unsigned int a,unsigned int b) { 
  if (b==0)
    return 0;
  else
    return a*(b%2)+mystere(2*a,b/2);
}




int main(int argc, char const *argv[]){



return EXIT_SUCCESS;
}