#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define TRANCHE 250

int main(int argc, char const *argv[]){
	char tampon [TRANCHE];
	int descripteur, i;
	ssize_t lus, ecrit;
	
	if (argc != 2){
		printf("Usage : %s <file_name> \n", argv [0]);
		return EXIT_FAILURE;
	}
	descripteur = open (argv[1], O_WRONLY | O_CREAT | O_TRUNC,S_IRUSR | S_IWUSR);
	if ( descripteur == -1 ){
		perror ("Error oppening file :");
		return EXIT_FAILURE;
	}
	do {
		printf("Num --> ");
		fflush (stdout);
		i=0;
		do {
			lus = read (0, tampon+i,1);
			if (lus == -1){
				perror ("error reading from standart output");
				exit (EXIT_FAILURE);
			}
		i++;
		} while ( (lus) && (tampon [i-1] != '\n') ) ;
		if (lus){
			ecrit = write (descripteur, tampon, i);
				if (ecrit == -1){
					perror ("Error writing file");
					exit (EXIT_FAILURE);
				}
			}
	printf("\n");
	}while (lus);
	close (descripteur);
	return EXIT_SUCCESS;
}
