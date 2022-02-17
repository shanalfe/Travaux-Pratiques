/*Programme qui affiche la première lettre de chacun de ses arguments.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
	int i;

	for (i=0; i<argc; i++){
		printf("%.1s ", argv[i]);
	}printf("\n");
return EXIT_SUCCESS;
}