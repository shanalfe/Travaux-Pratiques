#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int multiple,actual,result;
	
	printf("Entrez un entier naturel : ");
	result = scanf("%d",&actual);

	if(result != 1){
		printf("ce n'est pas un entier\n");
		return EXIT_FAILURE;
	}
	if(actual%3 == 0){
		printf("%d est un multiple de 3\n",actual);
	} else if(actual%3 == 1){
		multiple = actual -1;
		printf("%d n'est pas multiple de 3 mais %d est le multiple de 3 le plus proche\n",actual,multiple);
	}	else {
		multiple = actual + 1;
		printf("%d n'est pas multiple de 3 mais %d est le multiple de 3 le plus proche\n",actual,multiple);
	}
	return EXIT_SUCCESS;
}

