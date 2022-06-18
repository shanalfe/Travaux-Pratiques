#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <signal.h>
#include <stdlib.h>
#define MB 20 // capacité maximale que peut accueillir une vitrine
#define DELTAC 2000 // temps de sommeil d'un consommateur
#define DELTAP 3000 // temps de sommeil d'un producteur
#define MIN_B 1
#define MAX_B 10
#define RAND(a,b) ((rand() % (b - a + 1)) + a )
int bonbons = 0;
int deltac = DELTAC;
int deltap = DELTAP;

/*--- Déclaration des variables ---*/

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER; //initialisation du mutex. Commun au consommateur et producteur
//Création des conditions pour le consommateur et le producteur
pthread_cond_t cond_consommateur = PTHREAD_COND_INITIALIZER;
pthread_cond_t cond_producteur = PTHREAD_COND_INITIALIZER;



void disp_candy() {
	printf("Vitrine : %3d [ ", bonbons);
	for (int i = 0; i < MB; ++i) {
		if (i<bonbons) {
			printf("*");
		} else printf("-");
	}
	printf(" ]\n");
}

void * producteur(){

	while(1){

		//On vérouille le mutex
		pthread_mutex_lock(&mutex);

		usleep(deltap + rand()%(deltap/10));
		int rd = RAND(MIN_B, MAX_B); //Nombre de bonbons produits par un producteur à l'instant t


		//Si il y a trop de bonbons  dans la vitrine où si un producteur est déjà là
		while (bonbons + rd > MB) {
			pthread_cond_wait(&cond_producteur, &mutex);
		}

		bonbons += rd;
		printf("producteur (%5lu)   ->  %02d : ", pthread_self(),rd);
		disp_candy();

		//Si tout se passe bien
		pthread_cond_broadcast(&cond_consommateur); //Réveille les consommateurs
		pthread_mutex_unlock(&mutex); //Dévérouille le mutex

	}
}


void * consommateur(){

	while(1){

		//On vérouille le mutex
		pthread_mutex_lock(&mutex);

		usleep(deltac + rand()%(deltac/10));
		int rd = RAND(MIN_B, MAX_B); //Nombre de bonbons mangés par le consommateur à l'instant t

		//Condition s'il y a plus de bonbon ou quelqu'un se sert
		while (bonbons - rd < 0) {
			pthread_cond_wait(&cond_consommateur, &mutex);
		}

		bonbons -= rd;
		printf("consommateur (%5lu) ->  %02d : ", pthread_self(),rd);
		disp_candy();


		pthread_cond_broadcast(&cond_producteur);
		pthread_mutex_unlock(&mutex);
	}
}

int main(int argc, char * argv[]){
	int nb_cons,
		nb_prod;

	if (argc < 6){
		printf("usage %s <bonbons> <conso> <prod> <deltap> <deltac>\n",argv[0]);
		exit(1);
	}
	srand(time(NULL));

	bonbons = strtol(argv[1],NULL,0);

	nb_cons = strtol(argv[3], NULL, 0);
	nb_prod = strtol(argv[2], NULL, 0);

	deltap = strtol(argv[4], NULL, 0);
	deltac = strtol(argv[5], NULL, 0);


	pthread_t * prods = malloc(nb_prod * sizeof(pthread_t));
	pthread_t * cons = malloc(nb_cons * sizeof(pthread_t));

	for (int i = 0; i < nb_prod; ++i) {
		pthread_create(prods+i, NULL, producteur, NULL);//(void *) i);
	}

	for (int i = 0; i < nb_cons; ++i) {
		pthread_create(cons+i, NULL, consommateur, NULL);//(void *) i);
	}

	for (int i = 0; i < nb_cons; ++i)
		pthread_join(cons[i],NULL);

	for (int i = 0; i < nb_prod; ++i)
		pthread_join(prods[i],NULL);


	return EXIT_SUCCESS;
}
