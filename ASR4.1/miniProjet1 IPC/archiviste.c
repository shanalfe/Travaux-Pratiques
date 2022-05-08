#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <signal.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>

#include "type.h"



int main(int argc, char const *argv[]){

	ssize_t nb_lus;
	requete_t requete;
	reponse_t reponse;


	/*Attend les requetes*/
	while (1) {
		
		nb_lus = msgrcv(file_mess, &requete, sizeof(requete_t)-sizeof(long), pid, 0);

		if (nb_lus != -1) {
			/* traitement de la requete :                      */
		//	int result = effectuer(requete.op, requete.g, requete.d);

			sleep(rand()%3);

			/*Envoi reponse*/
			//sgsnd(file_mess, &reponse, sizeof(reponse)-sizeof(long), 0);
		}
	}
	
	return 0;
}