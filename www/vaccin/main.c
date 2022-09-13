#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age , vaccin;

    printf("veuillez entrer l'age : ");
     scanf("%d",&age);
     printf("Choisissez le bon vaccin \n");
     do{
     printf("1:Comirnaty \n");
     printf("2:Sputnik V \n");
     printf("3:AstraZeneca \n");
     scanf(" %d",&vaccin);
}while (vaccin!=1 && vaccin!=2 && vaccin!=3);
    switch(vaccin){
    case 1 :
        printf("Vous avez choisi ce vaccin Comirnaty \n");
        break;
    case 2 :
        printf("Vous avez choisi ce vaccin Sputnik V \n");
        break;
    case 3 :
        printf("Vous avez choisi ce vaccin AstraZeneca \n");
        break;
    default :
        printf("Le vaccin n'est pas disponible");
    }
     if (age >= 18 )
        printf(" est voila : deuxieme dose 3 moins apres la premiere dose  ");
        else if (age <=18)
        printf("est voila : la deuxieme dose 6 moins apres la premiere dose  ");





    return 0;
}
