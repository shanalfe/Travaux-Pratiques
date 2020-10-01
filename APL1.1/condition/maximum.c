
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
 
 	int a, b, c;

 	printf("Entrez un premier entier\n");
 	scanf("%d", &a);

 	printf("Entrez un second entier\n");
 	scanf("%d", &b);

 	printf("Entrez un dernier entier\n");
 	scanf("%d", &c);

 	if(a>b && a>c){
 		printf("le plus grand nombre est %d\n", a );
 	}

 	if(b>a && b>c){
 		printf("le plus grand nombre est %d\n",b );
 	}

 	if(c>a && c>b){
 		printf("le plus grand nombre est %d\n", c);
 	}




	return 0;
}