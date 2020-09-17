#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	

	int i,result,a,x;


	while(a != -1){	
		

		printf("Ecrivez un entier (pour arreter entrez -1): ");
		
		result = scanf("%d",&a);



		if(result != 1){
			printf("failure \n");
			return EXIT_FAILURE;
		}


		if(a != -1){
			for(i = 1;i<= 10;i++){
				x=i*a;
				printf("%d x %2d = %d\n",a,i,x);
			}
		}	
	}
	return EXIT_SUCCESS;
}

