#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
  char* p = (char*) malloc(6*sizeof(char));

  if (p) {
    char* q = NULL;
    strcpy(p, "Hello");
    puts(p);
    q = (char*) realloc(p, 11*sizeof(char));

    if (q) {
      strcat(q, " Dave");
      puts(q);
      free(q);
      return EXIT_SUCCESS;
    } else {
      free(p);
      puts("Espace mémoire insuffisant !");
      return EXIT_FAILURE;
    }
  } else {
    puts("Espace mémoire insuffisant !");
    return EXIT_FAILURE;
  }
}