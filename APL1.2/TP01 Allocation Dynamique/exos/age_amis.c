#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){

    int i =0, n=0, c=0, m=0;
    int * p = NULL;


    printf ("Nombre d'ami(e)s : ");
    scanf ("%d", &n);

    if (n>0){

        p = (int*) malloc(n*sizeof(int));

        if (!p){
            puts ("Erreur");
            return EXIT_FAILURE;
        } else if (p) {
           for (i=0; i<n; i++){
               printf ("Age ami(e)s num %d  : ", i+1);
               scanf ("%d", &p[i]);
           }
           for (i=0; i<n; i++){
               printf ("%d ", p[i]);
           }
        }

    printf ("\n");
    
    free (p);  

    } else if (n<0){
        puts ("Erreur du nombre \n");
        return EXIT_FAILURE;
    }

    printf("Voulez vous enregistrer plus de données ? \n 1 OUi ou 2 non : ");
    scanf ("%d", &c);

    if (c==1){
      
        if (p){            
            printf ("Nombre de données en plus : ");
            scanf ("%d", &m);
            int * q = NULL;
            q = (int*) realloc (p, ( m*sizeof (int) ) );
            if (!q){
                puts ("Erreur");
                return EXIT_FAILURE;
            } else if (q){
                for (i=0; i<m; i++){
                    printf ("Enregistrement n° %d : ", i+1);
                    scanf ("%d", &q[i]);
                }

                for (i=0; i<m; i++){
                    printf ("%d", q[i]);
                }                
            }
            free (q);
       
        }else if (!p){
            puts ("Erreur");
            return EXIT_FAILURE;
        }

    }
    if (c==2){
        printf ("Au revoir \n");
        return EXIT_SUCCESS;
    }
    
    return EXIT_SUCCESS;
}
