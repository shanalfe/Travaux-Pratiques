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

/*--- Déclaration des variables ---*/
int msgId;	


int main(int argc, char const *argv[]){

	/*--- Déclaration des variables ---*/
	key_t msgKey;

	bool verif = false;

	requete_journaliste requete;

	/*--- Récupération des arguments ---*/
	int num_ordre = atoi(argv[1]);	
	char choix = atoi (argv[2]);


	if(choix == 'C' || choix == 'E') {
		printf("Numéro du thème : ");
		int numTheme = atoi(argv[1]);
		printf("Numéro article : ");
		int numArticle = atoi(argv[2]);
		verif = true;
	} else if (choix == 'P') {
		printf("Numéro du thème : ");
		int numTheme = atoi(argv[1]);
		printf("Texte de l'article : ");
		char textArticle [3] = atoi(argv[2]);
		verif = true;
	} else {
		verif = false;
	}

	if (verif == false) {
		printf("erreur");
	}


	/*--- Création file de message ---*/
	msgKey = ftok("cles/msgkey.serv", 'a');
	msgId = msgget(msgKey, IPC_CREAT | 0666);



	/*--- Création de la requête ---*/
	requete_journaliste.demande = choix;

	/*--- Envoi de la requete ---*/	
	requete.archiviste = getpid();
	msgsnd(file_mess, &requete, sizeof(requete_journaliste)-sizeof(long), 0);

	sleep(rand()%3);

	
	
	return 0;
}