#include <unistd.h>
#include <fcntl.h>

#include <stdio.h>
#include <stdlib.h>

#define TRANCHE 250

int main(int argc, char const *argv[]){

	char tampon [TRANCHE];
	int descripteur, i, valeur;
	ssize_t lus, ecrit;
	char *fin;
	
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

			valeur = (int) strtol (tampon, &fin, 10);
			if (*fin != '\n'){
				printf("This is not an integer\n");
			}else {
				ecrit = write (descripteur, &valeur, sizeof (int));
				
				if (ecrit == -1){
					perror ("Error");
					exit (EXIT_FAILURE);
				}
			}

		}
	printf("\n");
	}while (lus);

	close (descripteur);

	return EXIT_SUCCESS;
}
