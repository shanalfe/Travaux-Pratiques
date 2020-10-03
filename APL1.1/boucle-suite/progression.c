#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	int uO=0,u1=1,uN=0;
	int n, i=0;


	printf("Entrez le nombre de fois à exécuter la suite :");
	scanf("%d", &n);

	for(i = 0; i<n;i++){
		uN = uO + u1;
		printf("%d + %d = %d\n", uO,u1,uN);
		if(i%2 == 0){
			uO = uN;
		} else if(i%2 ==1){
			u1 = uN;
		}
	}
	return EXIT_SUCCESS;
}
