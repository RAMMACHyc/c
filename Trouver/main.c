#include <stdio.h>
#include <stdlib.h>

int main()
{
  int U [10];
  int x,n;
  int i;
  printf("veuillez saisir le nombre des premaire " );

     for(i=0;i<10;i++){
        printf("U[%d]=",i);
        scanf("%d",&U[i]);
     }
     printf("veuillez saiser la valeur n : ");
     scanf("%d",&n);
     x=0;
     for(i=0;i<10;i++){
        if(U[i]==0)
        x++;
 }       if(x==0)
            printf("n se trouve le tableau");
     else
        printf("n ne pas se trouve le tableau");

    return 0;
}

