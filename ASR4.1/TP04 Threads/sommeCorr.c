
#include <stdio.h>
#include <stdlib.h>
#include <threads.h>
#include <assert.h>
#include <time.h>
typedef struct
{
	int nb_threads;
	int max_value;
	int base_value;
	int result;
}
base_t;

/* pour "mesurer" le temps */
static inline double tstamp(void)
{
    struct timespec tv;
    clock_gettime(CLOCK_REALTIME, &tv);
    return tv.tv_sec + tv.tv_nsec * 1.0e-9;
}


void * calcul(void * arg) {

	base_t* base = (base_t*) arg;

	base->result = 0;

	for(int i=base->base_value; i<=base->max_value; i+=base->nb_threads) {
		base->result += i;
		//fprintf(stderr, "yo %d\n", i);
	}

}


int main(int argc, char const *argv[])
{
	int nb_threads, max_number;
	int somme = 0;

	printf("Nombre de threads : ");
	scanf("%d", &nb_threads);

	printf("Calcul de la somme de 1 à ");
	scanf("%d", &max_number);

	pthread_t tab_thread[nb_threads];

	base_t base[nb_threads];


	double begin_thread = tstamp();

	for(int i=0; i<nb_threads; i++) {
		base[i].nb_threads = nb_threads;
		base[i].max_value = max_number;
		base[i].base_value = i+1;	

		assert(pthread_create(&tab_thread[i], NULL, calcul, (void*)&base[i]) == 0);

	}

	for(int i=0; i<nb_threads; i++) {

		assert(pthread_join(tab_thread[i], NULL) == 0);

		//fprintf(stderr, "%d\n", i);
		somme += base[i].result;
		
	}

	printf("Resultat de la somme avec les threads: %d\n", somme);

	printf("Temps du calcul pour le thread : %ld - %ld\n",begin_thread, tstamp());

	double begin_normal = tstamp();

	int somme_c = 0;

	for(int i=1; i<=max_number; i++) {
		somme_c +=i;
	}

	printf("Resultat de la somme : %d\n", somme_c);

	printf("Temps du calcul sans thread : %ld\n", tstamp());

	printf("Le résultat du calcul du Thread est %scorrect\n", (somme!=somme_c)?"in":"");

	return 0;
}