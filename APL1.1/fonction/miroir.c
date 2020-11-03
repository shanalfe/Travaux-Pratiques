#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*remplit les valeurs aléatoirement dans le tableau*/
int valRandom (int tab[]){
	int i, a;
	srand(time(NULL));
	for (i=0; i<10; i++){
		a = rand()%101 -50;
		tab[i]= a;
	}
	
}

void afficheTab (int tab[]){
	int i=0;
	for (i=0; i<10; i++){
		printf("+-----");
	}
	printf("+\n");
	printf("| ");
	for(i=0; i<10; i++){	
		printf("%3d | ", tab[i] );
	}
	printf("\n");
	for (i=0; i<10; i++){
		printf("+-----");
	}
	printf("+\n");
	printf("|");
}


void inverseTab (int tab [], int tabm[]){
	int j=9,i;
	for (i = 0; i < 10; ++i){
		tabm[j]=tab[i];
		j--;
	}

}

int main(int argc, char const *argv[]){
	int tab[10], tabm[10];
	valRandom (tab);
	afficheTab (tab);
	inverseTab (tab, tabm);
	afficheTab (tabm);
	
	return EXIT_SUCCESS;
}