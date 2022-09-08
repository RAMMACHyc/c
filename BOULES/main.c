#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float S,i;
    printf("veuillez entrer la valeur de N : ");
    scanf("%d",&N);
    S = 0;
    for(i=1;i<=N;i++)
    S = S+(1/i);
    printf("la somme est : %.2f",S);





    return 0;
}
