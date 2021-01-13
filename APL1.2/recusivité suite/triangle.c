#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#include <math.h>


void Rectangle(){
	RemplirTriangle(100,600,600,600,350,100);
}




int main(int argc, char const *argv[]){

	InitialiserGraphique ();

	CreerFenetre (20,20, 800,800);
	Rectangle();

	Touche();
	FermerGraphique();


return EXIT_SUCCESS;
}