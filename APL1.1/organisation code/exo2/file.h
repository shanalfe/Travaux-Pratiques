#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FILE_H
#define FILE_H


struct maillon {
	char *nom;
	struct maillon *suivant;
};


enum indice {DEBUT, FIN, TAILLE_FILE};

typedef struct maillon *liste;

typedef liste file[TAILLE_FILE];



int file_empty(file f);

void file_push(file f, char *s);

char *file_top(file f) ;

char *file_pop(file f) ;

void file_clear(file f) ;

#endif /* FILE_H */
