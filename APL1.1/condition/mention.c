#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
  
  int moy;

   printf("entre ta moyenne de bac :\n");
    scanf("%d", &moy);


  if ((0<moy) && (moy<=8)){
    printf("aie, dommage, tu n'as pas ton bac !!! \n");
  }

  if ((8<moy)  && (moy<10)){
    printf("tu y es presque, encore quelques points\n");

  }

  if ((10<=moy) && (moy<12)){
    printf("tu as le bac, c'est bien\n");

  }

  if ((12<=moy) && (moy<14)){
    printf("tu as le bac, avec mention assez bien, bien joué bg\n");

  }

  if ((14<=moy) && (moy<16)){
      printf("tu as le bac, mention bien, tu es un géni\n");
  }

  if ((16<=moy) && (moy<=20)){
    printf("Bravo, tu as le bac, mention très bien\n");

  }


    return EXIT_SUCCESS;
}



