#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

	int tab1[2][5], tab2[3][5], tab3[5][5];
	
	int i=0,j=0,dep=1;

	for (i = 0; i < 2; ++i){
		for (j = 1; j <= 5; ++j){
			tab1[i][j] = j;
		}
	}
	
	for (i = 0; i < 3; ++i){
		for (j = 1; j <= 5; ++j){
			tab2[i][j] = dep;
			dep++;
		}
	}

	for (i = 0; i < 5; ++i){
		for (j = 0; j <= 5; ++j){
			tab3[i][j] = 0;
		}
	}

	for (i = 0; i < 5; ++i){
		for (j = 1; j <= i; ++j){
			tab3[i][j] = j;
		}
	}

	printf("\t t1 \t\t t2\t\t t3\n");
	
	for (i = 0; i < 5; ++i){ // boucle affichage en ligne
		if (i<2){ // ligne inferieur à 2, on affiche
			printf("|");
			for (j = 1; j <= 5; ++j){
				printf("%3d",tab1[i][j]);
			}
		}else {
			printf("                "); // affichage des lignes après 2 de t1
		}
		if (i<3){ // ligne inférieur à 3, on affiche
			printf("|");
			for (j = 1; j <= 5; ++j){
				printf("%3d",tab2[i][j]);
			}
		printf("|");
		}else {
			printf("                |"); // affichage des 2 lignes après 3 de t2
		}

		for (j = 1; j <= 5; ++j){
			printf("%3d",tab3[i][j]);
		}
		printf("|");
		printf("\n");
	}
	
	
	return EXIT_SUCCESS;
}