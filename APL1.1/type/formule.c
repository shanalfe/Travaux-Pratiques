#include<stdio.h>
#include<stdlib.h>
#include<math.h> // compiler avec -lm

int main()
{

	printf("%lf\n",sqrt(fabs(log(0.5))));
	// sqrt -> racine
	// fabs -> valeur absolue
	// log -> ln

    printf("%lf \n", sin(M_PI/6) );
    // sin -> sinus
    // M_PI -> nombre pi

    printf("%lf \n", atan(pow(13,2)));
    // atan -> arctan
    // pow -> puissance; ici 13^2

    printf("%lf \n", pow(exp(-1),4));

    printf("%lf \n", log(-3)); //pas sure...

    printf("%lf \n", pow(sqrt(2),2));

    return EXIT_SUCCESS;
}
