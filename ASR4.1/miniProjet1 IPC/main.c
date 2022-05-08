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
#include <sys/shm.h>
#include <unistd.h>
#include <sys/types.h>

#include "type.h"

/*Déclaration des variables*/
int file_mess;


/*Nettoyage*/
void arret(int s){	
	msgctl(file_mess, IPC_RMID, NULL);
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
//	pid_t pid = getpid();
	pid_t p;
	//ssize_t nb_lus;


	/*Condition arguments ligne de commande*/
	if (argc != 3) {
		printf("Erreur argument\n");
		return EXIT_FAILURE;
	
	} else {

		/*Conversion en int*/
		nb_archivistes = atoi(argv[1]);
		nb_themes = atoi(argv [2]); 

		/*Condition au moins 2*/
		if (nb_archivistes <= 1 || nb_themes<=1) {
			printf("Erreur nombre\n");
			return EXIT_FAILURE;
		} else {
			printf("nb_archivistes : %d, nb_themes :%d\n", nb_archivistes, nb_themes);
			assert(set_signal_handler(SIGINT, arret) == 0);



			/*Création archivistes*/
			for (i = 1; i<= nb_archivistes; i ++) {

				cle_fichier = ftok("archiviste.c", 1);
				assert(cle_fichier != -1);
				file_mess = msgget(cle_fichier, IPC_CREAT | 0600); //Création file message
				assert( file_mess != -1);
			
			}

			/*Création journaliste à l'infini*/
			while (1) {
				cle_fichier = ftok("journaliste.c", 1);
				assert(cle_fichier != -1);
			}

			/*Création de segment, chaque thème, un segment*/
			for (i = 1; i<= nb_themes; i++) {
				int seg = shmget(cle_fichier, sizeof(long), IPC_CREAT | 0600);
			}

			/*Création de sémaphore*/
			//int sid = semget(cle_fichier,2,0666|IPC_CREAT|IPC_EXCL);

			/*Création */


			
			
		}
	}
	
	return EXIT_SUCCESS;
}