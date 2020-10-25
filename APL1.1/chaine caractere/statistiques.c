#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	
if (argc > 1) {
    puts(argv[1]);
  } else {
    puts("aucun argument !");
  }

return EXIT_SUCCESS;
}