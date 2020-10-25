#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i = 10;
	int j = i+1;

	{
		int i = i+1;
		printf("%d %d \n", i, j);
	}

	printf("%d %d\n", i, j);

	return 0;
}