#include <stdio.h>
#include <stdlib.h>
#include <threads.h>


typedef struct {
    int M;
    int maxValue;
    int baseVal;
    int res;
} baseT;


/* pour "mesurer" le temps */
static inline double tstamp(void){
    struct timespec tv;
    clock_gettime(CLOCK_REALTIME, &tv);
    return tv.tv_sec + tv.tv_nsec * 1.0e-9;
}


void * calcul (void * arg) {
    baseT b = (baseT) arg;
    base->result = 0;
}


int main(int argc, char const *argv[]){

	int N, M, somme = 0;

	printf("Nombre de threads : ");
	scanf("%d", &M);

	pthread_t tab_thread[M];

	printf("Calcul de la somme de 1 à ");
	scanf("%d", &N);

}