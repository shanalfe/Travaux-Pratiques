#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[]) {

	int tab[20], v;
	srand(time(NULL));
	int i;

	for (int i = 0; i < 20 ; ++i)
	{
		v = rand()%20;
		tab[i]=v;
	}

	for (int i = 0; i < 20; ++i)
	{
		if (tab[i]<=0)
		{
			printf(" _ ");
		} else {
			printf(" %d ", tab[i]);
		}
	}

	printf("\n");

	return EXIT_SUCCESS;
}