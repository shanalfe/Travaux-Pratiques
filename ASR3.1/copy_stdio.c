#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <assert.h>
#define BSIZE 1

static inline double tstamp(void) 
{                             
	struct timespec tv;
	clock_gettime(CLOCK_REALTIME, &tv);
	return tv.tv_sec + tv.tv_nsec * 1.0e-9;
}

int main(int argc, char *argv[])
{
	FILE * fin,
		* fout;
	char buf[BSIZE];
	double start
		,end;
	assert( argc == 3);

	start = tstamp();

	fin = fopen(argv[1],"r");
	assert(fin != NULL);

	fout = fopen(argv[2],"w");
	assert(fout!= NULL);
	while (1) {
		size_t nb_read;
		nb_read = fread(buf,BSIZE,1,fin);
		if (nb_read <=0)
			break;

		fwrite(buf,nb_read,1,fout);
	}
	fclose(fin);
	fclose(fout);
	end = tstamp();
	printf("temps : %lf\n",end-start);
	return 0;
}