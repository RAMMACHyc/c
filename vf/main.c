#include <stdio.h>
#include <stdlib.h>

int main()
{
  int U [10];
  int min,max;
  int i;
  printf("veuillez saisir le nombre des premaire  \n");

     for(i=0;i<10;i++){
        printf("U[%d]=",i);
        scanf("%d",&U[i]);
     }
     min = U[0];
     for(i=1;i<10;i++){
     if(min>U[i])
     min = U[i];
     }
     printf("number min est : %d\n",min);

     max = U[1];
    for(i=0;i<10;i++){
        if(max < U[i])
        max = U[i];
    }
    printf("max de tableux est  : %d ",max);

    return 0;
}
