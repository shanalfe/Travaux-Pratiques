#include<stdio.h>
 
//Fonction d'initialisation du tableau
void initialiser(int t[20][20], int n){
	int i, j;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			t[i][j] = 0;
		}
	}
	t[n][(n+1)/2] = 1;
}
 
//Fonction récursive qui permet de construire le carre magique
void placer(int t[20][20], int n, int i, int j){
	//afficher(t,n);
	if(est_magique(t,n)){
		return;
	}
	else{
	
		int k = t[i][j];
		int i1 = i;
		int j1 = j;
		if(i == n){
				i = 0;
			}
			if(j == n){
				j = 0;
			}
		if(t[i+1][j+1] == 0){
			
			t[i + 1][j + 1] = k + 1;
			placer(t, n, i+1, j+1);
		}
		else{
			t[i1 - 1][j1] = k + 1;
			placer(t, n, i1-1, j1);
		}
		
	}
}
 
void afficher(int t[20][20], int n){
	int i, j;
	printf("\n\n");
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			printf("%d\t", t[i][j]);
		}
		printf("\n");
	}
}
 
//Fonction qui test si le tableau passé en paramètre est un carré magique
int est_magique(int t[20][20], int n){
	int i, j;
	int s = 0;
	int const_magique = n * (n * n + 1) / 2;
 
	//Somme des lignes
	for(i=1; i<=n; i++){
		s = 0;
		for(j=1; j<=n; j++){
			s = s + t[i][j];
		}
		if(s != const_magique){
			return 0;
		}
	}
	
	//Somme des colonnes
	for(i=1; i<=n; i++){
		s = 0;
		for(j=1; j<=n; j++){
			s = s + t[j][i];
		}
		if(s != const_magique){
			return 0;
		}
	}
	
	//Somme des diagonales
	s = 0;
	for(i=1; i<=n; i++){
		s = s + t[i][i];
	}
	if(s != const_magique){
		return 0;
	}
	s = 0;
	for(i=1; i<=n; i++){
		s = s + t[i][n-i+1];
	}
	if(s != const_magique){
		return 0;
	}
	
	return 1;
	
}
main(){
	int n, A[20][20];
	printf("Donner l'ordre de votre carre magique: ");
	scanf("%d", &n);
	
	//n pair
	if(n % 2 == 0){
		printf("Veuillez entrer un nombre impair!");
		return;
	}
	
	initialiser(A, n);
	
	placer(A, n, n , (n+1)/2);
	
	printf("Le carre magique d'ordre %d : ", n);
	afficher(A, n);
	
	if(est_magique(A, n)){
		puts("\nLe carre genere est bien un carre magique :)");
	}
	else{
		puts("\nLe carre genere n\'est pas magique! (Algorithme incorrect) :(");
	}
}
//Source : www.exelib.net