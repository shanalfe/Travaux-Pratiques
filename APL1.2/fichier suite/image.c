#include <stdio.h>
#include <stdlib.h>
#include <graph.h>

int main(int argc, char const *argv[]){
    
    FILE* f;
    f = fopen ("image.bin", "r");
    int x, y, l, h;
    couleur color;

    if (f){        
        InitialiserGraphique();
        fread (&l, sizeof (int), 1, f);
        fread (&h, sizeof (int), 1, f);
        CreerFenetre (15,15,l,h);

        for (x = 0; x < l; x ++){
            for (y = 0; y < h; y ++){
                fread (&color, sizeof(color), 1, f);
                ChoisirCouleurDessin (color);
                DessinerPixel (x,y);
            }
        }
    }else{
        perror ("Fichier non trouvé");
        exit (EXIT_FAILURE);
    }
    
while (1){}
FermerGraphique();
    return EXIT_SUCCESS;
}