#include <stdio.h>
#include <stdlib.h>
int  nr2,nr1,a,i,c,k,j,L;
void  Eto(int L,int n)
{


    for(i=1;i<=L;i++){
        for(k=1;k<=L-i+n;k++){   //les space
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
    scanf("%d",&nr1);
nr1=nr2;
    for(i=L-1;i<=nr2;i++){
    Eto(nr2++,nr1--);


    }
    return 0;
}

