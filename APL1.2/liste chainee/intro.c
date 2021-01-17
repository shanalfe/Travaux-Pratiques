#include<stdio.h>
#include<stdlib.h>


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

    /*Initialisation des listes  à NULL*/
    struct cellule *Liste=NULL,*Pair=NULL,*Impair=NULL;

    struct cellule *p,*q,*q1,*q2,*pp;

    int i, n;


    /*Récupération des données*/
    printf("Entrez la taille de la liste:\n");
    scanf("%d",&n);


    printf("Entrez les elements de la liste:\n");


    /*Créé le nombre de cellules nécessaires dans la liste*/
    for(i=0;i<n;i++){

        p = (struct cellule *)malloc(sizeof(struct cellule));
      

        /*Initialise son pointeur à la valeur nul*/
        scanf("%d",&(*p).a);
        (*p).suivant=NULL;


        if(i==0){

            Liste = p;
        }else{
            (*q).suivant=p;
        }

        q=p;
    }

    p=Liste;


    /*Parcours la liste chainée*/
    while(p!=NULL){

        /*Pour chaque p, on créé une copie *pp */
        pp = (struct cellule *)malloc(sizeof(struct cellule));
       /*On copie la liste chainée d'initialisation*/
        (*pp).a = (*p).a;
        /*Initialise  à NULL*/
        (*pp).suivant=NULL;
       
        /*Si pp est pair alors */
        if((*pp).a%2==0){
            if(Pair==NULL){
                Pair = pp;
            }else{
                (*q1).suivant = pp;
            }
            q1=pp;

        }else{

            if(Impair==NULL){
                Impair = pp;

            } else {
                (*q2).suivant = pp;
            }

            q2=pp;

        }

        p=(*p).suivant;
    }

    printf("Liste complete:\n");
    Afficher(Liste);

    printf("Liste des nombres pairs:\n");
    Afficher(Pair);

    printf("Liste des nombres impairs:\n");
    Afficher(Impair);

  

    return EXIT_SUCCESS;
}