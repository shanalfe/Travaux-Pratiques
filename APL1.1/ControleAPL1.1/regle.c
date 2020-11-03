#include <stdio.h>
 #include <stdlib.h>
int main(int argc, char const *argv[]){

	int l, i =0, j=0, n=0, m=0;

	printf("Entrez la longueur désirée (entre 1 et 9) : ");
	scanf("%d", &l);

	if( (l>=1) && (l<=9)){
			printf("|");
			
			for (i=0; i<(l*2); i++){
				
				for(j=0; j<4; j++){
					printf("\'");
				}	
			printf("|");
			}	
			
	printf("\n");
		printf("0");

	for(m=0; m<l; m++){				
				n=n+1;								
				printf("%10d",n );				
	}	
	printf("\n");
	} else{
		printf("Erreur\n");
		return EXIT_FAILURE;
	}	

	return EXIT_SUCCESS;
}
