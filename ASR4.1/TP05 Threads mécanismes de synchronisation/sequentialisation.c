#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


// Déclaration des variables
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static int tour = 0; 
static int count = 0;
static int nb_threads;


char m[10][5]={
	"0000","1111","2222","3333","4444","5555","6666","7777","8888","9999",
};


static inline double tstamp(void) 
{
	struct timespec tv;
	clock_gettime(CLOCK_REALTIME, &tv);
	return tv.tv_sec + tv.tv_nsec * 1.0e-9;
}


void * run (void *arg)
{
	int i,l,j,k;
	i = (long int)arg;
	l = strlen(m[i]);

	
	for(k=0;k<100;k++){
		//<- code à ajouter
		pthread_mutex_lock(&mutex);
		while(! (tour == i ) ) {
			pthread_cond_wait(&cond, &mutex);
		}
	
		for(j=0;j<l;j++){
			write(1,&m[i][j],1); // print number XXXX
			usleep(100);
		}

		//<- code à ajouter
		tour = (tour + 1)%nb_threads;
		pthread_cond_broadcast(&cond);
		pthread_mutex_unlock(&mutex);
	}
	
	return NULL;
}
int main(int argc, char * argv[])
{
	pthread_t * th;
	long int i;
	double t1,t2;
	if (argc !=2){
		nb_threads = 5;
	} else 
		nb_threads=((int)strtol(argv[1],NULL,0));

	if (nb_threads<0) 
		nb_threads = 1;

	if (nb_threads >10) 
		nb_threads = 10;

	th=(pthread_t *) malloc(nb_threads*sizeof(pthread_t));

	t1=tstamp();
	for(i=0;i<nb_threads;i++) 
		pthread_create(th+i,NULL,run,(void*)i); // beurk :-)
	for(i=0;i<nb_threads;i++) 
		pthread_join(th[i],NULL);
	t2=tstamp();
	printf("\n\ntime = %lf\n",t2-t1);
}