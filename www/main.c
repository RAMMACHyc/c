#include <stdio.h>
#include <stdlib.h>

int main()
{int N ,i ;

    printf("veuillez entrer la valeur de N : ");
    scanf ("%d",&N);
 //for (i=N+1;i<=N+10;i++) {
   // printf("%d ",i);


    //}
    i=N+1;
    printf("la boucle while N : \n");
    while(i<=N+10){
    printf("%d\t", i );
    i++;
    }


    return 0;
}
