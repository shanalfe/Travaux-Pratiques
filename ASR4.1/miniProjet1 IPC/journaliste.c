#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <signal.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/shm.h>
#include <unistd.h>
#include <sys/types.h>



int main(int argc, char const *argv[]){


	/*Création de requete*/


	/*Envoi de la requete*/
	//msgsnd(file_mess, &requete, sizeof(requete_t)-sizeof(long), 0);

	sleep(rand()%3);

	
	
	return 0;
}