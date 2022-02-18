#include<stdio.h>
#include<stdlib.h>
#include<graph.h>

struct Rectangle{
    int longeur;
    int largeur;
};


int main(int argc, char * argv[]){

    int end = 0;
    InitialiserGraphique();
    CreerFenetre(10,10,500,500);
    struct Rectangle rec = {50,70};

    DessinerRectangle(0,0,rec.longeur, rec.largeur);

    while(!end){

        while(!SourisCliquee()){

        }

        DessinerRectangle(_X,_Y,rec.longeur, rec.largeur);
    }

    FermerGraphique();

return EXIT_SUCCESS;
}
