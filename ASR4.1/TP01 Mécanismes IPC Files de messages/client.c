/*
 * Client : il charge une file de messages, envoie une requete
 * au serveur, attend la reponse, l'ecrit sur stdout
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <signal.h>
#include <assert.h>
#include "types.h"

void usage(char *s){
    fprintf(stderr,"Usage : %s gauche op droite\n\tgauche, droite : entiers\n\top = +, -, *, /, \%% \n",s);
    exit(-1);
}

int main (int argc, char *argv[]){
    key_t cle;			/* cle de la file     */
    int file_mess;		/* ID de la file    */
    requete_t requete;
    reponse_t reponse;
	ssize_t res_rcv;
    int gauche, droite; 
    char op;

    pid_t pid = getpid();


    /* Recuperation des arguments */
    if (argc < 4)
	usage(argv[0]);

    gauche = (int)strtol(argv[1],NULL,0);
    droite = (int)strtol(argv[3],NULL,0);

	op = argv[2][0];

	if (
			(op != '+') 
			&& (op != '-') 
			&& (op != '*') 
			&& (op != '/') 
			&& (op != '%')
	   )
		usage(argv[0]);

	/* Calcul de la cle	                 */
	cle = ftok(FICHIER_CLE,'a');
	assert(cle != -1);
	
	/* Recuperation file de message :    */
	file_mess = msgget(cle,0);
	assert(file_mess != -1);
	

	couleur(CYAN);
	fprintf(stdout, "\t\tLe client %d envoie : %d %c %d\n", pid, gauche, op, droite);
	couleur(REINIT);

	/* creation de la requete :          */
	requete.op = op;
	requete.g = gauche;
	requete.d = droite;
	requete.expediteur = pid;
	requete.type = 1;
	/* creation de la requete :          */
	//
	/* envoi de la requete :             */
	msgsnd(file_mess, &requete, sizeof(requete_t)-sizeof(long), 0);
	/* envoi de la requete :             */
	//
	/* attente de la reponse :           */
	sleep(rand()%3);
	/* attente de la reponse :           */
	//
	/* affichage de la reponse           */
	res_rcv = msgrcv(file_mess, &reponse, sizeof(reponse_t)-sizeof(long), pid, 0);
	/* affichage de la reponse           */

	if(res_rcv != -1) {

		fprintf(stdout, "\t\tLe client %d recoit le rÃ©sultat %d\n", pid, reponse.resu);		
	}


	exit(0);
}