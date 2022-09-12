#include <stdio.h>
#include <stdlib.h>
int  nr,a,i,c,k,j,L;
void  Eto(int L,int nr)
{


    for(i=1;i<=L;i++){
        for(k=1;k<=L-i;k++){   //les space
            printf(" ");
        }
        for(c=1;c<=2*i-1;c++){
            printf("*");
        }
        printf("\n");
    }

}

int main()
{


    printf("veuillez entrer la valeur L : ");
    scanf("%d",&L);
    printf("donne moi le neveau : ");
    scanf("%d",&nr);

    for(i=L-1;i>=0;i--){
    Eto(L--,nr);


    }
    return 0;
}

