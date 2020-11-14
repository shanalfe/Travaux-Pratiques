
#include <stdio.h>

int coupure_inferieure(int valeur)
{
    switch (valeur) {
    case 100: return 50;    
    case 50: return 20;    
    case 20: return 10;    
    case 10: return 5;    
    case 5: return 2;    
    case 2: return 1;    
    default: return 0;
    }
}

void coupure (int somme){
    int valeur = 100;
    while (valeur != 0) {
        int nb_coupure = somme / valeur;
        
        if (nb_coupure > 0) {
            if (valeur >= 5){
                printf("%d billet(s) de %d.\n", nb_coupure, valeur);
            }else{
                printf("%d pièce(s) de %d.\n", nb_coupure, valeur);
            }
            somme -= nb_coupure * valeur;
        }
        valeur = coupure_inferieure(valeur);
    }
}


int main(void){
    int somme;
    printf("Entrez une somme : ");
    scanf("%d", &somme);
    coupure(somme);
    return 0;
}
