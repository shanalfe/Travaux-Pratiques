#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct assoc {
	char * ext;
	char * exe;
} assoc;



int main(int argc, char const *argv[]){


	assoc assocs [] = {
	{"pdf","/usr/bin/xpdf"},
	{"html","/usr/bin/firefox"},
	{"c","/usr/bin/vim"}
	/* etc */
};


	if (argc < 2){
		printf("Usage : %s <file>\n", argv[2]);
        return EXIT_FAILURE;
    }
	

	char * extension = strrchr (argv[1], '.') + 1; // pour récupérer la chaine suivant (+1)
	if (extension == NULL){
		printf ("Pas d'extensions \n");
	} else {
		printf ("extention : %s\n", extension);
	}

return EXIT_SUCCESS;

}
