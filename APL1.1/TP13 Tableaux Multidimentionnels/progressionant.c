#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int t1[2][5],t2[3][5],t3[5][5],indice=1;

//tableau 1

	for (int i = 0; i < 5; ++i)
	{
		t1[0][i]=i;
		t1[1][i]=i;
	}

//tableau 2

	for (int i = 0 ; i < 3; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			indice=indice+1;
			t2[i][j]=indice;
		}
	}

//tableau 3

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (j>i)
			{
				t3[i][j]=i+1;
			}
			else
			{
				t3[i][j]=0;
			}
		}
	}

//Affichage Tableau 1

	printf("   t1\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", t1[0][i]);
	}

	printf("\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", t1[1][i]);
	}

	printf("\n\n");

//Affichage Tableau 2

	printf("      t2\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%2d ", t2[0][i]);
	}

	printf("\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%2d ", t2[1][i]);
	}

	printf("\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%2d ", t2[2][i]);
	}

	printf("\n\n");

//Affichage Tableau 3

	printf("      t3\n");

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("%2d ", t3[j][i]);
		}
		printf("\n");
	}

	printf("\n");

//Affichage inversé 

	//Tableau 1


// NON FINI ICI


	int temp;
	for (int i = 0, j=4; i < 2; i++, j--)
	{
		temp = t1[i][j];
		t1[i][j] = t1[j][i];
		t1[j][i] = temp;
	}

	printf("   t1\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", t1[0][i]);
	}

	printf("\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", t1[1][i]);
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}