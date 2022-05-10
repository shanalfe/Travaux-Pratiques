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
#include <sys/sem.h>
#include <unistd.h>


#include "type.h"

/*Déclaration des variables*/
int sgmId,
	semId,
	msgId;


/*--- Nettoyage ---*/
void arret(){	
	printf("Fin du programme");

	printf("Fin segment partagé");
	shmctl(sgmId, IPC_RMID, 0);

	printf("Fin sémaphore");
	semctl (semId, 0, IPC_RMID);

	printf("Fin file de message");
	msgctl(msgId, IPC_RMID, 0);

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


	/*--- Déclaration des variables ---*/
	int nb_archivistes = 0,
		nb_themes = 0,
		i= 1; 
	pid_t pid;
	char buf[64];
	key_t sgmKey,
		  semKey,
		  msgKey;



	/*--- Condition arguments ligne de commande ---*/
	if (argc != 3) {
		printf("Erreur argument\n");
		return EXIT_FAILURE;
	
	} else {


		/*pour requete*/
		int nombre = rand() % 10;

		if(0 <= nombre && nombre <=6 ) {
		choix = "consultation";
		} else if(nombre <= 8) {
		choix = 'archivage';
		} else if (nombre == 9) {
		choix = 'effacemement';
		}


		/*--- Conversion en int ---*/
		nb_archivistes = atoi(argv[1]);
		nb_themes = atoi(argv [2]); 


		/*--- Condition au moins 2 ---*/
		if (nb_archivistes <= 1 || nb_themes<=1) {
			printf("Erreur nombre\n");
			return EXIT_FAILURE;

		} else {

			printf("nb_archivistes : %d, nb_themes :%d\n", nb_archivistes, nb_themes);


			/*--- Création file de message ---*/
			msgKey = ftok("cles/msgkey.serv", 'a');
			msgId = msgget (msgKey, IPC_CREAT | 0600);
		


			/*--- Création de segment, chaque thème, un segment ---*/
			sgmKey = ftok("cles/sgmkey.serv", 'a');
			sgmId = shmget(sgmKey, sizeof(int), IPC_CREAT | 0600);
			


			/*--- Création de sémaphore ---*/
			semKey = ftok("cles/semkey.serv", 'a');
			semId = semget (semKey, 1, IPC_CREAT | 0666);

			
			assert(set_signal_handler(SIGINT, arret) == 0);



			/*--- Création archivistes ---*/
			for (i = 1; i<= nb_archivistes; i ++) {
				pid = fork ();
				if (pid == 0) {
					execl("./archiviste", "./archiviste", buf, NULL);
				}				
			}

			/*--- Création des journaliste à l'infini ---*/
			while (1) {
				pid = fork();
				if (pid == 0) {
					execl("./journaliste", "./journaliste", buf, NULL);
				}
				sleep(5);			
			}	
			
			
		}
	}

	
	return EXIT_SUCCESS;
}