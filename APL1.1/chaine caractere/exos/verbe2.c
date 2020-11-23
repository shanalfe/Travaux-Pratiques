#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 26

int main(int argc, char const *argv[]){
    
    char verbe [MAX + 1];
    char * fin;
    char * term [6]= { "e", "es", "e", "eons", "ez", "ent"};
    char * pp [6]= {"je", "tu", "il/elle", "nous", "vous", "ils/elles"};
    int i;

    do {
        printf ("Verbe : ");
        gets (verbe);
        fin = verbe + strlen (verbe)-2;
    } while (strcmp (fin, "er"));

    for (i=0; i<6; i++){
        strcpy (fin, term [i]);
        printf ("%s %s \n", pp [i], verbe);
    }

    return 0;
}
