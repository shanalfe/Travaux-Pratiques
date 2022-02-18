#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LGNOM 20
#define LGPRENOM 15
#define LGTEL 11

int main(int argc, char const *argv[]){

char nomfich[21] ;

/* nom de fichier */

FILE * sortie ;

struct { 
	char nom [LGNOM+1] ;
char prenom [LGPRENOM+1] ;
int age ;
char tel [LGTEL+1] ;
} bloc ;

puts ("donnez le nom du fichier à créer : ");
gets (nomfich) ;

sortie = fopen (nomfich, "w") ;
puts (" --- pour finir la saisie, donnez un nom ‘vide' ---\n") ;


while ( puts("nom : "), gets (bloc.nom), strlen (bloc.nom)){
	puts("prenom :");
	gets (bloc.prenom) ;
puts ("age : ") ;
scanf ("%d", &bloc.age) ; getchar() ;
puts ("téléphone : ") ;
gets (bloc.tel) ;
fwrite (&bloc, sizeof(bloc), 1, sortie) ;
}
fclose (sortie) ;



return EXIT_SUCCESS;
}