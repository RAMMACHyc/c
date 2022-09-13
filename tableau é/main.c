#include <stdio.h>
#include <stdlib.h>

int main()
{
  float U [3];
  float F[3];
  float P;
  int i;
  printf("veuillez saisir le nombre des premaire  \n");

     for(i=0;i<3;i++){
        printf("U[%d]=",i);
        scanf("%f",&U[i]);
        printf("F[%d]=",i);
        scanf("%f",&F[i]);
     }
     P=0;
     for(i=0;i<3;i++)
        P  = P + U[i]*F[i];

    printf("le produit scalair des deux vect %f",P);

    return 0;
}
