
    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    float A, B;
    char operateur;
    printf ("veuillez entrer la valeur de A est : ");
    scanf("%f",&A);
    printf("veuillez choisir l'operateur : ");
    scanf(" %c",&operateur);
    printf("veuillez entrer la valeur de B est : ");
    scanf("%f", &B);


    switch(operateur){
       case '+' :
            printf("A + B = %.2f",A + B);
                 break;
       case '-' :
            printf("A - B = %.2f", A - B);
                 break;
       case '*' :
            printf("A * B = %.2f" , A * B);
                 break;
        case '/' :
        if(B!=0)
            printf("A/B = %.2f", A/B);
        else
           printf("error") ;
        break;


}

    return 0;
}
