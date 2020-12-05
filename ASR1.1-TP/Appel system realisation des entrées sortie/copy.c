#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define TRANCHE 256

int main(int argc, char const *argv[]){
	char tampon [TRANCHE];
	int descripteur, destination;
	ssize_t lus, ecrit;
	if (argc !=3){
		printf("Usage : %s <file_name> \n", argv [0]);
		return EXIT_FAILURE;
	}
	descripteur = open (argv[1], O_RDONLY);
	/*Echec de l'ouverture*/
	if ( descripteur == -1 ){
		perror ("Error oppening file :");
		return EXIT_FAILURE;
	}
	destination = open (argv[2], O_WRONLY | O_CREAT | O_TRUNC,S_IRUSR | S_IWUSR); //drapeau droit
			if (destination ==-1){
				perror ("Error oppenning destination file");
				exit (EXIT_FAILURE);
			}
	do {
		lus = read (descripteur, tampon, TRANCHE);
		if (lus == -1){
			perror ("Error macking file :");
			exit (EXIT_FAILURE); /*Sort du programme en fermant le fichier*/
		}
		ecrit = write (destination, tampon, lus);
		if (ecrit == -1){
			perror ("Error writting to standart output");
			exit (EXIT_FAILURE);
		}
	} while (lus== TRANCHE);
	close(descripteur); // = exit (EXIT_SUCCESS);
	close (destination);
	return EXIT_SUCCESS;
}
