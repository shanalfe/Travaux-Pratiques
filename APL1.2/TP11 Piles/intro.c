#include <stdio.h>
#include <stdlib.h>


typedef struct Pile Pile;

/*Structure de la pile */
struct Pile {
	int nombre; /*donnée*/
	Element *precedent; /*pointeur sur le precedent element
}

/*Empilage*/
void Push (Pile *pile, int nombre){


	/*Création d'un nouvel élément de la pile*/
	Pile *p_nouveau = malloc(sizeof *p_nouveau);
   
	/*On vérifie qu'il a bien été créé avec la condition if*/
    if (p_nouveau != NULL){

    	p_nouveau -> nombre = nombre;

	 	/*On fait pointer le nouveau élément sur l'ancien élément*/
	    p_nouveau->precedent = *p_pile;

	    /*On fait pointer le sommet de la pile sur cet élément*/
	   *p_pile = p_nouveau;
     }

}


int main(int argc, char const *argv[]){



return EXIT_SUCCESS;
}