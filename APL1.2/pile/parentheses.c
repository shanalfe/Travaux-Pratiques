#include <stdio.h>
#include <stdlib.h>

struct mail {
 	char valeur;
  	struct mail* suivant;
};

typedef struct mail maillon;


int Empty(maillon* pile){

	if (pile != NULL){
		return 0;
	}else {
		return 1;
	}
}

void Push(maillon** pile, char nouveau){
	maillon* premier = (maillon*) malloc(sizeof(maillon));

	if (premier)
	{
		premier->suivant = *pile;
		premier->valeur = nouveau;
	}

	*pile = premier;
}

char Pop(maillon** pile)
{
	if (!Empty(*pile))
	{
		maillon* tPile = *pile; 

		char valeur = tPile->valeur;
		*pile = tPile->suivant;
		free(tPile);

		return valeur;
	}
	
	return '\0';
}

char Top(maillon* pile)
{
	if (!Empty(pile))
	{
		maillon* tPile = pile; 

		char valeur = tPile->valeur;

		return valeur;
	}
	
	return '\0';
}

void Clear(maillon** pile)
{
	if (!Empty(*pile))
	{
		maillon* p = *pile;
		maillon* suivant;

		while (p != NULL)
		{
			suivant = p->suivant;
			free(p);
			p = suivant;
		}

		*pile = NULL;
	}
}

int main(int argc, char * argv[])
{
	if (argc != 2)
	{
		printf("Merci d'indiquer un fichier !\n");
		return 1;
	}
		
	FILE* flux;
	flux = fopen(argv[1], "r");

	if (!flux)
	{
		printf("Impossible d'ouvrir le fichier !\n");
		return 1;
	}

	char buf;
	maillon* pile = NULL;
	int flag = 1;

	while (fread(&buf, sizeof(char), 1, flux) && flag)
	{
		if (!feof(flux) && !ferror(flux))
		{
			if (buf == '(' || buf == '[' || buf == '{')
			{
				Push(&pile, buf);
			}
			else if (buf == ')' || buf == ']' || buf == '}')
			{
				char out = Pop(&pile);

				if (out == '\0')
				{
					printf("Erreur de parenthesages : %c en trop\n", buf);
					flag = 0;
				}
				else if ((out == '(' && buf != ')') || (out == '[' && buf != ']') || (out == '{' && buf != '}'))
				{
					printf("Parenthesage incorect !\n");
					flag = 0;
				}
			}
		}
	}

	if (flag == 1)
	{
		printf("Parenthésage correct !\n");
	}

	Clear(&pile);
	fclose(flux);

	return EXIT_SUCCESS;
}
