#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <assert.h>
#define BSIZE 1024 

static inline double tstamp(void) 
{                             
	struct timespec tv;
	clock_gettime(CLOCK_REALTIME, &tv);
	return tv.tv_sec + tv.tv_nsec * 1.0e-9;
}

int main(int argc, char *argv[])
{
	int fin,
		fout;
	char buf[BSIZE],
	* ptr = NULL;
	
	double start
		,end;
	assert( argc == 3);

	start = tstamp();

	fin = open(argv[1],O_RDONLY);
	assert(fin >= 0);

	fout = open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0600);
	assert(fout >= 0);
	while (1) {
		ssize_t nb_read;
		ssize_t nb_written;

		nb_read = read(fin,buf,BSIZE);
		if (nb_read <=0)
			break;
		ptr = buf;
		while(nb_read >0){
			nb_written = write(fout,buf,nb_read);
			if (nb_written < 0)
				break; // vrai gestion d'erreur
			nb_read -= nb_written;
			ptr += nb_written;
		}
	}
	close(fin);
	close(fout);
	end = tstamp();
	printf("temps : %lf\n",end-start);
	return 0;
}