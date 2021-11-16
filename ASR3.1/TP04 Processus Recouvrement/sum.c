#include <stdio.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
static inline double tstamp(void)
{    
	struct timespec tv;
	clock_gettime(CLOCK_REALTIME, &tv);
	return tv.tv_sec + tv.tv_nsec * 1.0e-9;
}
void somme_partielle(long int * sommes,long int n,long int N,long int M)
{
	long int S = 0;
	for(long int i = n;i<=N;i+=M)
		S+=i;

	//printf("%d = %ld\n",getpid(),S);
	sommes[n-1] = S;
}

int main(int argc, char *argv[])
{
	long int N,
		 M,
		 S=0;
	long int * sommes = NULL;
	double start,end;

	start = tstamp();
	assert(argc == 3);
	N=strtol(argv[1],NULL,0);
	M=strtol(argv[2],NULL,0);

	sommes = (long int *) mmap(NULL,M*sizeof(long int),
			PROT_WRITE,MAP_ANONYMOUS|MAP_SHARED,-1,0);	

	for (long int i = 0;i<M;i++){
		if (fork() == 0){

			somme_partielle(sommes,i+1,N,M);		
			exit(0);
		}

	}
	for(long int i = 0;i<M;i++)
		wait(NULL);

	for(long int i = 0;i<M;i++)
		S+=sommes[i];
	end = tstamp();
	printf("time = %lf somme = %ld\n",end - start,S);
	assert (S == N*(N+1)/2);
	return 0;
}
