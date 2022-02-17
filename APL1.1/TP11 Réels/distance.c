 #include <stdio.h>
 #include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
	double xa = 0.00, ya = 0.00, xb =0.00, yb=0.00, d, x,y;
	
	printf("Coordonnées de A : ");
	scanf("%lf %lf", &xa, &ya);

	printf("Coordonnées de B : ");
	scanf("%lf %lf", &xb, &yb);

	x = xb-xa;
	y = yb-ya;
	d = sqrt( pow(x,2)+  pow(y,2) );

	printf("La distance entre le point A et B est %lf\n",d );

	return EXIT_SUCCESS;
}
