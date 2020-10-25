#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 10;
	int j= 8;
	int k = 0;
	{
		int i=j;
		int j= i+1;
		printf("%d %d %d\n",i,j,k );
		k=j;
	}
	return 0;
}