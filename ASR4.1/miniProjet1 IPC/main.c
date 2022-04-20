/*
	Main : créer les archivites et les journalistes.
	journaliste : segment de mémoire partagée de taille bornée

	archiviste : file de message

*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <signal.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>

#include "type.h"

/*Déclaration des variables*/
int id_file;


/*Nettoyage*/
void arret(int s){	
	msgctl(id_file, IPC_RMID, NULL);
}

/*Reception signal arrêter programme*/
int set_signal_handler(int signo, void (*handler)(int)) {
	struct sigaction sa;
	sa.sa_handler = handler;    
	sigemptyset(&sa.sa_mask);  
	sa.sa_flags = 0 ;          
	return sigaction(signo, &sa, NULL);
}





int main(int argc, char const *argv[]){


	/*Déclaration des variables*/
	int nb_archivistes = 0,
		nb_themes = 0,
		i= 1; 
	key_t cle_fichier;
	pid_t pid = getpid();
	pid_t p;
	ssize_t nb_lus;


	cle_fichier = ftok(FICHIER_CLE, 'a'); //calcul de la clé de la fe
	assert(cle_fichier != -1);

	/*Condition arguments ligne de commande*/
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
			assert(set_signal_handler(SIGINT, arret) == 0);

			/*Création archivistes et journalistes*/
			for (i = 1; i<= nb_archivistes; i ++) {
				p = fork();
				assert(p != -1);
				if (p == 0)  {
					snprintf(nb_archivistes,sizeof(nb_archivistes),"%d",i);
				execl("archiviste","archiviste",buf,NULL);
				assert(0);
				}
			}
			
		}
	}
	
	return EXIT_SUCCESS;
}