#include <stdio.h>
#include <stdlib.h>

int main()
{
   float T[10];
   float S,P,M;
   int i;
   printf("veillez saisir les element de tableau \n");
   for(i=0;i<10;i++){
    printf("T[%d]=",i);
    scanf("%f",&T[i]);
   }
   S = 0;
   P = 1;
   for(i=0;i<10;i++){

   S = S + T[i];
   P = P * T[i];
   }
   M = S/10;
   printf("la somme est  %.1f \n",S);
   printf("la produit est  %.1f \n",P);
   printf("la moyenne est  %.1f \n",M);

    return 0;
}
