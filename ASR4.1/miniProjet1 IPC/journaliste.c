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
int msgId,
	sgm,
	sem;	


int main(int argc, char const *argv[]){

	/*--- Déclaration des variables ---*/
	key_t msgKey,
		  semKey,
		  sgmKey;

	bool verif = false;

	requete_journaliste requete;

	/*--- Récupération des arguments ---*/
	int num_ordre = atoi(argv[1]);	
	char choix = argv[2];


	/*--- Création file de message ---*/
	msgKey = ftok("cles/msgkey.serv", 'a');
	msgId = msgget(msgKey, IPC_CREAT | 0666);

	/*Création sémaphore*/
	semKey = ftok("cles/semkey.serv", 'a');
	sem = (semKey, 1, IPC_CREAT | 0666);

	/*Création segment partagé*/
	sgmKey = ftok("cles/sgm.serv", 'a');
	sgm = shmget (sgmKey, sizeof(int), IPC_CREAT | 0666)



	/*--- Création de la requête ---*/
	requete.demande = choix;


	if(choix == 'C' || choix == 'E') {
		printf("Numéro du thème : %s", argv[3]);
		requete.num_theme = atoi(argv[3]);
		printf("Numéro article : %sx", argv[4]);
		requete.num_article = atoi(argv[4]);

		verif = true;
	} else if (choix == 'P') {
		printf("Numéro du thème : ");
		requete.num_theme = atoi(argv[3]);
		printf("Texte de l'article : ");
		requete.text_article[3]= char(argv[4]);
		verif = true;
	} else {
		verif = false;
	}

	if (verif == false) {
		printf("erreur");
	}



	/*--- Envoi de la requete ---*/	
//	requete.archiviste = getpid();
	msgsnd(msgId, &requete, sizeof(requete_journaliste)-sizeof(long), 0);

	sleep(rand()%3);

	
	
	return 0;
}