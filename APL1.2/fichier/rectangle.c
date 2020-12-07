#include<stdio.h>
#include<stdlib.h>
#include<graph.h>

struct rectangle{
    int longeur;
    int largeur;
};


int main(int argc, char * argv[]){
    int sortie = 0;
    InitialiserGraphique();
    CreerFenetre(10,10,500,500);
    struct rectangle rect1 = {50,70};
    DessinerRectangle(0,0,rect1.longeur, rect1.largeur);
    while(!sortie){
        while(!SourisCliquee()){
        }
        DessinerRectangle(_X,_Y,rect1.longeur, rect1.largeur);
    }
    FermerGraphique();
return EXIT_SUCCESS;
}
