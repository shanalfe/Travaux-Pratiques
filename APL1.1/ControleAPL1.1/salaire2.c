#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double sal(int x, int b);

double sal(int x, int b)
{
	double dbx = (double) x;
	double dbb = (double) b;
	double calc = 0.0;
	if (0 <= x && x <= 34)
	{
		calc = dbb + (dbb/34)*dbx;
		return calc;
	}
	else if (34 < x && x <= 42)
	{
		calc = dbb*2;
		return calc;
	}
	return 0;
}

double* remplitsal(int b,int taille)
{
	int i;
	double calc;
	double* tab= NULL;
	tab = (double* ) malloc(42*sizeof(double));
	for (i = 0; i <= 42; ++i)
	{
		calc=sal(i,b);
		tab[i]=calc;
	}
	return tab;
}

/*

double sal_moy(double *t,int taille)
{
	double total = 0.0;
	int i;

	for (i = 0; i < taille; ++i)
	{
		total = total + t[i];
	}
	total = total / taille;
	return total;
}
*/
/*
void random(double *t,int taille)
{
	int random,i;
	srand(time(NULL));

	for (i = 0; i < taille; ++i)
	{
		random = (rand()%101);
		if (random == 2)
		{
			t[i] = 0.0;
		}
	}
}*/

/*

double sal_moy2(double *t,int taille, int* complet)
{
	double total = 0.0;
	int i;
	int IsComplet=1;
	int NumberOfZero=0;

	for (i = 0; i < taille; ++i)
	{
		if (t[i] == 0)
		{
			IsComplet=0;
			NumberOfZero=NumberOfZero+1;
		}
		total = total + t[i];
	}
	total = total / taille;

	complet[0] = IsComplet;
	complet[1] = NumberOfZero;

	return total;
}*/

int main(int argc, char * argv[]){
	int b,taille = 43;
	int result;
	int complet[2];

	printf("Salaire de base : ");
	result= scanf(" %d",&b);

	if (result != 1)
	{
		fprintf(stderr, "On a demande un chiffre de salaire\n");
	}

	double* tab = remplitsal(b,taille);

/*	random(tab,taille);
	double moyenne= sal_moy2(tab,taille,complet);

	printf("Nombre d'annee a 0 : %d\n",complet[1]);

	printf("Salaire moyen sur la carrière : %0.2lf\n", moyenne );

	if (complet[0] == 1)
	{
		printf("Carriere complete\n");
	}
	else{
		printf("Carriere incomplete\n");
	}
*/
	free(tab);
	return EXIT_SUCCESS;
}