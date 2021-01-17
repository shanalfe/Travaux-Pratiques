#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Personne {
	char nom [20];
	int age;
} Personne;



int main(int argc, char const *argv[]){

	Personne t [200];
	int i, j, n;

	printf("Nombre de personne :");
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		getchar();
		printf("Nom personne n° %d",i+1 );
		gets(t[i].nom);
		printf("\n");
		printf("Age : ");
		scanf("%d", &t[i].age);
	}



	for (i = 0; i < n; i++){
		printf("%s a %d ans.", t[i].nom, t[i].age);
	}



return EXIT_SUCCESS;
}