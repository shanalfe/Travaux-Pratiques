#include "mail.h"


#define TAILLE_MIN 30
#define TAILLE_INC 10


char *saisie(const char* invite) {
	char *temp = (char *) malloc(TAILLE_MIN);
	int c, i=0, taille = TAILLE_MIN;

	printf("\n%s", invite);
	while(((c=getchar())!=EOF)&&(c!='\n')) {
		if (i>=taille) {
			taille += TAILLE_INC;
			temp = (char *) realloc(temp, taille);
		}
		temp[i++] = c;
	}
	temp = (char *) realloc(temp, i+1);
	temp[i] = '\0';
	return temp;
}
