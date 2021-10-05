#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <fcntl.h>
#include <unistd.h>

#define N 1 // taille du buffer



int main(int argc, char const *argv[]) {
	
	int fIn, fOut;
	char buff [N];

	fIn = open (argv[1], O_RDONLY);
	assert (fIn >= 0);

	fOut = open (argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
	assert (fOut >=0);

	while (1){
		ssize_t nbRead = read (fIn, buff, N);

		if (nbRead <=0) {
			break;
		} else {
			write (fOut, buff, N);
		}

	}

	close (fIn);
	close (fOut);

	
}