#include <stdio.h>
#include <stdlib.h>

int main(){
   int q = 0, i, n;
   
   printf(" Entrez un nombre: ");
   scanf("%d", &n);
   
   for(i=1; i<=n; i++){
      if(n%i==0) {
         q++;
      }
   }

   if(q==2){
      printf(" %d est un nombre premier.\n",n);
   }else{
      printf(" %d n'est pas un nombre premier.\n",n);
   }

return EXIT_SUCCESS;
}




