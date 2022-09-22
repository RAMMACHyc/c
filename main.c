#include <stdio.h>
#include <stdlib.h>
void selection(int *T,int n)
{
int j,min,perm,i,;
  for(i=0;i<n-1;i++)
    {
        min=i;

    for(j=i+1;j<n;j++){
        if (T[min]>T[j])
      min = j;
    }
    if (min!=i){
       perm = T[i];
       T[i] = T[min];
       T[min] = perm;
       }
    }
}
int main()
{
    int min,perm,j,i,max;
    int n;
    int T[100];
    printf("veuillez entrer la valeur de n :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    selection(*T,n);
