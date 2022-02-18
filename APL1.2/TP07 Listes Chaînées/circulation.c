/*
    ALGO
    
    Création d'une liste chainée pouvant accueillir 10 entiers.
    Dans chaque cellule, il y' a un nombre aléatoire entre 111 et 999
    On affiche cette liste
    On reparcours la liste
    
    si le nombre précedent est > suivant alors
        précédent est le plus grand donc on garde le précedent 
    sinon 
        on garde le suivant

*/


#include<stdio.h>
#include<stdlib.h>
#include <time.h>


/*Création de la structure*/

struct cellule{
    int a; /*représente le composant entier de la cellule*/
    struct cellule * suivant;
};



/*Fonction afficher liste*/
void Afficher(struct cellule * liste){
   
    struct cellule *p; 
    p=liste;

    /*On parcourt la totalité de la liste*/
    while(p!=NULL){
       printf("%d ",(*p).a);
       p=(*p).suivant;
    }
    printf("\n");
}




int main(){

    srand( time( NULL ) );

    /*Initialisation des listes  à NULL*/
    struct cellule *Liste=NULL;

    struct cellule *p;

    int i, n;


    /*Récupération des données*/
    printf("Entrez la taille de la liste:\n");
    scanf("%d",&n);


    printf("Entrez les elements de la liste:\n");


    /*Créé le nombre de cellules nécessaires dans la liste*/
    for(i=0;i<10;i++){

        p = (struct cellule *)malloc(sizeof(struct cellule));
      

        /*Initialise son pointeur à la valeur nul*/
        (*p).suivant=NULL;


       
    }

    p=Liste;


    /*Parcours la liste chainée*/
    while(p!=NULL){

    }

    printf("Liste complete:\n");
    Afficher(Liste);

 
  

    return EXIT_SUCCESS;
}