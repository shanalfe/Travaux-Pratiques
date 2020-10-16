#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {

double va = 0.00, vv = 0.00, d = 0.00, vit = 0.00;
double t = 0.00, tempsMinute;


printf("Vitesse de l'avion en km/h : ");
scanf("%lf", &va);

printf("Vitesse du vent : ");
scanf("%lf", &vv);

printf("Distance à parcourir en km :\n");
scanf("%lf", &d);

vit = va + vv;
t = (d / vit);

tempsMinute = t *60;

printf("Le temps sans vent est de : %lf minutes soit %lf heure(s)", tempsMinute, t);

 EXIT_SUCCESS;

}
