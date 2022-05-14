#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <signal.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>

#include "type.h"


/*--- Déclaration des variables ---*/
int msg,
	sgm,
	sem;


int main(int argc, char const *argv[]){

	/*--- Déclaration des variables ---*/
	key_t msgKey,
		  sgmKey,
		  semKey;

	int num_ordre = atoi(argv[1]);	
	char nb_theme = atoi(argv[2]);
	reponse_archiviste reponse;

	reponse.fait = true;

	/*--- File de messages ---*/
	msgKey = ftok("cles/msgkey.serv",'a');
	msg = msgget (msgKey, IPC_CREAT | 0666);

	/*Segment partagé*/
	sgmKey = ftok ("cles/sgmkey.serv", 'a');
	sgm = shgmet(sgmKey, sizeof(int), IPC_CREAT | 0666);

	/*Sémamphore*/
	semKey = ftok("cles/semkey.serv", 'a');
	sem = semget(semKey, 1, IPC_CREAT | 0666 );


	/*--- Attend les requetes ---*/
	while (1) {
		
		msgrcv(msg, &reponse, sizeof(reponse_archiviste)-sizeof(long), reponse.fait, 0);

		reponse.num_ordre = num_ordre + 1;

		sleep(rand()%3);
		
	}
	
	return 0;
}