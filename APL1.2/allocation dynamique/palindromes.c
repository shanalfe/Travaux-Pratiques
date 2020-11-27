#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* inverse(const char* s){
	int i=0,j=0;
	char* p = NULL;
	char t = '\0';

	/*Allocation de mémoire en fonction du nombre d'argument */
	p = calloc(strlen(s),sizeof(char));
	strcpy(p,s);

	/*Transformation de la mémoire de p dans j*/
	j = strlen(p);

	/*Comparaison des chaines pair et impair*/
	if(j%2 != 1){

		for(i = 0; i <= strlen(p)/2 ; i++,j--){

			t = p[j-1];
			p[j-1] = p[i];
			p[i] = t;
		}
	}else if(j%2 ==1){

		for(i = 0;i < strlen(p)/2; i++,j--){

			t = p[j-1];
			p[j-1] = p[i];
		 	p[i] = t;
		}
	}	
	return p;
}

int main(int argc, char * argv[]){
	char* d = NULL;
	char* f = NULL;
	int i = 0;

	/*Récupération des arguements*/
	for (i = 1; i < argc; ++i){

		d = argv[i];
		f = inverse(argv[i]);

		/*Comparaison de chaine*/
		if(strcmp(d,f) == 0){

			printf("%s est un pallindrome\n",d);

		}else{

			printf("%s n'est pas un pallindrome\n",d);
		}
	}
	return EXIT_SUCCESS;
}
