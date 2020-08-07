#include<stdlib.h>
#include<stdio.h>



int main(int argc, char* argv[]) {
	
int Fibonacci (int n){
	if(n==0){
		return 0;
	}else{
	
	(n==1){
		return 1;
		
	}else{
		return (Fibonacci(n-1)+ Fibonacci(n-2));
	}
}

void Affiche_F (int m, int i){
if (i<m){
	printf("LL%d=%d\n",i, Fibonacci(i) ); /* affichage en suite*/
	Affiche_F(m, i+1);
}

}


int m, n;
scanf("%d", &m);
printf("U%d=%d",n, m, Fibonacci(n) );
scanf("%d",&m);
Affiche_F(m,O);
return 1;


}