#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

  int a = 1, b = 2, c = 3;
  int *p, *q;
 
  p=&a; // p pointe vers l'adresse de a soit 1
  q=&c;  // p pointe vers l'adresse de c soit 3

  printf(" a = %d\n",a );
  printf(" b = %d\n",b );
  printf(" c = %d\n",c );
  printf(" adresse p = %d\n",*p );
  printf(" adresse q = %d\n",*q );
  printf("\n");

  *p=(*q)++; //*p prend la valeur de 3 car *q = 3 puis on incrément +1 à *q= 4
  printf(" adresse p = %d\n",*p );
  printf(" adresse q = %d\n",*q );
  printf("\n");

  p=q; // affecte la valeur de q à p donc p pointe vers c
  q=&b;// q vaut l'adresse de b donc *q=2
  printf(" adresse q = %d\n",*q );
  printf(" adresse p = %d\n",*p );
  printf("\n");

  *p-=*q;// le pointeur de p - la valeur du pointeur de q donc 4-2 = 2 donc *p=2

  printf(" adresse p = %d\n",*p );
  printf("\n");

  ++*q; // pointeur q +1 soit 2+1
    printf(" adresse q = %d\n",*q );
    printf("\n");

  *p*=*q; // adresse p * adresse q donc 2 * 3 = 6
  printf(" adresse p = %d\n",*p );
  printf("\n");

  a=++*q**p; // a = adresse q +1 soit 3+1=4 * pointeur p donc 6 donc a = 6*4=24
printf(" adresse q = %d\n",*q );
  printf(" adresse p = %d\n",*p );
  printf("a vaut : %d\n",a );
  printf("\n");

  p=&a; // p vaut l'adresse de a vaut 24 donc p = 24
 
  printf(" adresse a = %d\n",a );
  printf("\n");

   printf("pointeur de p = %d\n",*p );
  printf("pointeur de q = %d\n",*q ); 
  *q=*p/(*q); // le pointeur q = pointeur p / pointeur de q soit 24/4 donc 6
  
  printf(" adresse q vaut donc = %d\n",*q );
  printf("\n");


  printf("Résultat total : \n");
  printf(" a = %d\n",a );
  printf(" b = %d\n",b );
  printf(" c = %d\n",c );
  printf(" adresse p = %d\n",*p );
  printf(" adresse q = %d\n",*q );
  
  return EXIT_SUCCESS;
}