#include <stdio.h>
#include <stdlib.h>

typedef struct
{
double Re;
double Im;
} Complexe;

void lectureC(Complexe* z)
{
scanf ("%lf", &z->Re);
scanf ("%lf", &z->Im);
}

void EcritureC(Complexe z)
{
printf ("%lf + i %lf\n", z.Re, z.Im);
}

Complexe* sommeC(Complexe z1, Complexe z2)
{
Complexe* r=(Complexe*)malloc(sizeof(Complexe));
r->Re= z1.Re+ z2.Re;
r->Im= z1.Im+ z2.Im;
return r;
}

Complexe* produitC(Complexe z1, Complexe z2)
{
Complexe* r=(Complexe*)malloc(sizeof(Complexe));
r->Re= z1.Re * z2.Re - z1.Im * z2.Im;
r->Im= z1.Re * z2.Im+ z2.Re * z1.Im;
return r;
}


Complexe* divisionC(Complexe z1, Complexe z2)
{
Complexe* tmp=(Complexe*)malloc(sizeof(Complexe));
Complexe* r=NULL;
double m= z2.Im*z2.Im+z2.Re*z2.Re;
tmp->Re= z2.Re/m;
tmp->Im= -z2.Im/m;
r= produitC(z1,*tmp);
free(tmp);
return r;
}

int main (void)
{
Complexe z1,z2;
Complexe *z3=NULL;

printf ("entrez un nombre réel de z1 et un nomre imaginaire z1: \n");
lectureC (&z1);


printf ("entrez un reel de z2 et un imaginaire z2: \n");
lectureC (&z2);


z3 = sommeC(z1,z2);
printf ("la partie reel de z3 est : %f\n", z3->Re );
printf ("la partie imaginaire de z3 est : %f \n", z3->Im);
//somme
printf("\nz1+z2=");
EcritureC(*z3);
free(z3);
//produit
printf("\nz1*z2=");
z3=produitC(z1,z2);
EcritureC(*z3);
free(z3);
//division
printf("\nz1/z2=");
z3=divisionC(z1,z2);
EcritureC(*z3);
free(z3);
//
system("pause");
return 0;
} 
