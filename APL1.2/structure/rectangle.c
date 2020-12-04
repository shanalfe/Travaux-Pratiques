 #include <stdio.h>
 #include <stdlib.h>
#include <graph.h>

/*

struct Rectangle {
	int x;
	int y;
	int l;
	int h;

};
*/




int main(int argc, char const *argv[]){

	InitialiserGraphique();
    CreerFenetre(20,20,500,500);
    
    DessinerRectangle(100,100,100,100);

    Touche();

    FermerGraphique();
	

	return EXIT_SUCCESS;
}