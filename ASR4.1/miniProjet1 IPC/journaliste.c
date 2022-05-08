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


int main(int argc, char const *argv[]){

	requete_t requete;
	reponse_t reponse;

	key_t cle;
	int file_mess;
	ssize_t res_rcv;
	char choix;


	int nombre = rand() % (10 + 1);

	if(1 <= nombre && nombre <=7 ) {
		choix = "consultation";
	} else if(7>nombre && nombre <= 9) {
		choix = "archivage";
	} else if (nombre == 10) {
		choix = "effacemement";
	}

	
	cle = ftok(FICHIER_CLE,'a');
	file_mess = msgget(cle, IPC_CREAT | 0600);


	/*Création de requete*/
	requete.demande = choix;

	/*Envoi de la requete*/
	
	msgsnd(file_mess, &requete, sizeof(requete_t)-sizeof(long), 0);



	sleep(rand()%3);

	
	
	return 0;
}