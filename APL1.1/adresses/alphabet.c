#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	char min, maj;
  	char *p = NULL;
 
  	for(min = 'a', maj = 'A'; maj <= 'Z'; min++, maj++) {
    	p = (p == &min) ? &maj : &min;
    	putchar(*p);
  }
  	putchar('\n');
return EXIT_SUCCESS;
}