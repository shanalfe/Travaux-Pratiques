#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char* inverse(const char* s){

	int i = 0, j= 0;
	char * p = NULL;
	char fin = '\0';

	p = calloc ( (strlen(s)), sizeof (char) );
	strcpy (p, s);

	j = strlen (p);

	if (j%2 != 1){
		for (i=0; i<strlen(p)/2; i++, j--){
			fin = p[j-1];
			p [j-1] = p[i];
			p[i] = fin;
		}
	}

	return p;
}





int main(int argc, char const *argv[]){
	
char* debut = NULL;
	char* fin = NULL;
	int i = 0;


	for (i = 1; i < argc; ++i)
	{
		debut = argv[i];
		fin = inverse(argv[i]);

		if(strcmp(debut,fin)== 0)
		{
			printf("%s est un pallindrome\n",debut);
		}
		else{
			printf("%s n'est pas un pallindrome\n",debut);
		}
	}
	

return EXIT_SUCCESS;
}