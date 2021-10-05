#include <sys/mman.h>

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <assert.h>
#include <string.h>
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

	double start
		,end;
	char * addrin=NULL,
		 * addrout=NULL;
	off_t filesize = 0;

	assert( argc == 3);

	start = tstamp();

	fin = open(argv[1],O_RDONLY);
	assert(fin >= 0);

	filesize = lseek(fin,0,SEEK_END);

	fout = open(argv[2],O_RDWR|O_CREAT|O_TRUNC,0600);
	assert(fout >= 0);

	addrin = mmap(NULL,filesize,PROT_READ,MAP_PRIVATE,fin,0);
	assert ( addrin != MAP_FAILED);

	ftruncate(fout,filesize); 

	addrout= mmap(NULL,filesize,PROT_WRITE,MAP_SHARED,fout,0);
	assert ( addrin != MAP_FAILED);


	memcpy(addrout,addrin,filesize);

	close(fin);
	close(fout);
	end = tstamp();
	printf("temps : %lf\n",end-start);
	return 0;
}