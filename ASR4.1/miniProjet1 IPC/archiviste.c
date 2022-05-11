#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <signal.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>

#include "type.h"


/*--- Déclaration des variables ---*/
int msg;


int main(int argc, char const *argv[]){

	/*--- Déclaration des variables ---*/
	key_t msgkey;

	int num_ordre = atoi(argv[1]);	
	char nb_theme = argv[2];
	requete_archiviste reponse;


	/*--- File de messages ---*/
	msgKey = ftok(FILE_MSGKEY,'a');
	msg = msgget (msgKey, IPC_CREAT | 0666);




	/*--- Attend les requetes ---*/
	while (1) {
		
		msgrcv(msg, &reponse, sizeof(requete_archiviste)-sizeof(long), pid, 0);

		sleep(rand()%3);

		
		
	}
	
	return 0;
}