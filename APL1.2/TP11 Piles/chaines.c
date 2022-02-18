#include <stdio.h>
#include <stdlib.h>

struct mail {
 	char instruction;
  	struct mail* next;
};

typedef struct mail maillon;

int Empty(maillon* pile){
	if (pile != NULL){
		return 0;
	}else {
		return 1;
	}
}

void Push(maillon** pile, char new){
	maillon* premier = (maillon*) malloc(sizeof(maillon));

	if (premier){

		premier->next = *pile;
		premier->instruction = new;
	}

	*pile = premier;
}

char Pop(maillon** pile){
	
	if (!Empty(*pile) )	{
		maillon* tPile = *pile; 

		char instruction = tPile->instruction;
		*pile = tPile->next;
		free(tPile);

		return instruction;
	}	
	return '\0';
}

int main(int argc, char * argv[]) {

	char tab[3] = "  \0";
	char charactere_add;
	char charactere_delete;

	maillon* pile = NULL;

	printf("La pile attend vos ordres\n");

	while (tab[0] != 'q'){
		
		printf("> ");
		scanf("%s", tab);

		if (tab[0] == '+'){

			Push(&pile, tab[1]);
			charactere_add = tab[1];
			printf("Le caractère %c a été ajouté\n", tab[1]);
			
		} else if (tab[0] == '-'){

			charactere_delete= Pop(&pile);

			if (charactere_delete != '\0'){

				charactere_add = charactere_delete;
				printf("Le caractère %c a été supprimé\n", charactere_delete);

			}else {
				printf("La pile est vide !\n");
			}

		}else{
			printf("Au revoir !\n");
		}

	}

	return EXIT_SUCCESS;
}
