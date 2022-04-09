/*
 * Serveur : il crÃ©e une file de messages, attend des messages 
 * des clients, y repond.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <signal.h>
#include <assert.h>
#include "types.h"

typedef struct 
{
	long int mtype;
	char mtext[1];
}
mymsg;

int file_mess; /* ID de la file, necessairement global
				  pour pouvoir la supprimer a la terminaison */

void arret(int s){
	/* Arret du serveur
	 * en detruisant la file 
	 * de message */


	msgctl(file_mess, IPC_RMID, NULL);
}

int set_signal_handler(int signo, void (*handler)(int)) {
	struct sigaction sa;
	sa.sa_handler = handler;    // call `handler` on signal
	sigemptyset(&sa.sa_mask);   // don't block other signals in handler
	sa.sa_flags = 0 ;            //  don't restart system calls
	return sigaction(signo, &sa, NULL);
}

int effectuer(char op, int g, int d){
	switch (op){
		case '+':
			return g+d;

		case '-':
			return g-d;
		case '*':
			return g*d;

		case '/':
			return g/d;

		default :
			return g%d;
	}
}

int main (int argc, char *argv[]){
	key_t cle; /* cle de la file     */
	requete_t requete;
	reponse_t reponse;
	ssize_t nb_lus;
	 pid_t pid = getpid();

	/* cacul de la cle de la file    */
	cle = ftok(FICHIER_CLE,'a');
	/* cacul de la cle de la file    */

	assert(cle != -1);

	/* Creation file de message :    */
	file_mess = msgget(cle, IPC_CREAT | 0600);
	/* Creation file de message :    */

	assert( file_mess != -1);

	assert(set_signal_handler(SIGINT,arret) == 0);

	srand(getpid());


	while(1){ 

		/* serveur attend des requetes, de type 1 :        */
		nb_lus = msgrcv(file_mess, &requete, sizeof(requete_t)-sizeof(long), pid, 0);
		/* serveur attend des requetes, de type 1 :        */

		if(nb_lus != -1) {

			fprintf( stdout, "(Serveur) Requete recue de %d\n", requete.expediteur);

			/* traitement de la requete :                      */
			int result = effectuer(requete.op, requete.g, requete.d);
			/* traitement de la requete :                      */

			fprintf( stdout, "\top = %c, g = %d, d = %d\n", requete.op, requete.g, requete.d);

			/* Attente aleatoire */
			sleep(rand()%3);
			/* Attente aleatoire */

			/* envoi de la reponse :                           */
			reponse.type = requete.expediteur;
			reponse.resu = result;

			msgsnd(file_mess, &reponse, sizeof(reponse)-sizeof(long), 0);
			/* envoi de la reponse :                           */
		}

		
	}
	exit(0);
}