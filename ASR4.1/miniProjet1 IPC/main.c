#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){


	/*Déclaration des variables*/
	int nb_archivistes = 0,
		nb_themes = 0;

	/*Condition arguments*/
	if (argc != 3) {
		printf("Erreur argument\n");
		return EXIT_FAILURE;
	
	} else {

		/*Conversion en int*/
		nb_archivistes = atoi(argv[1]);
		nb_themes = atoi(argv [2]); 

		/*Condition au moins 2*/
		if (nb_archivistes <= 2 || nb_themes<=2) {
			printf("Erreur nombre\n");
			return EXIT_FAILURE;
		} else {
			printf("nb_archivistes : %d, nb_themes :%d\n", nb_archivistes, nb_themes);

			
		}
	}
	
	return EXIT_SUCCESS;
}