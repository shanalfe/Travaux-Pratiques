#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
	/* déclaration des variables*/
	int x; /* nombres que l'utilisateur rentre*/
	int tab[100]; /*tableau*/
	int i; 

	/*boucle qui prend les nombres */
	// while(x!=-1){
		printf("entrez des entiers, et -1 pour arrêter la saisie\n");
		scanf("%d", &tab[i]);
	

		/*boucle qui stock les nombres*/
		for(i=1; i<x; ++i){
			if(tab[0]> tab[i]){
				tab[0]= tab[i];
			}

			printf("Le plus petit élément est %d\n", tab[i] );
		}


	// }


	
	return 0;
}