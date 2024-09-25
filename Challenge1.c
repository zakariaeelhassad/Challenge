#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20];
    char prenom[20];
    int age;
    char sexe;

    printf("entre nome :");
    scanf("%s",&nom);
    printf("entre prenom :");
    scanf("%s",&prenom);
    printf("entre age :");
    scanf("%d",&age);
    printf("entre sexe ( m or f ) :");
    scanf(" %c",&sexe);

    printf("nom : %s \n",nom);
    printf("prenom : %s \n",prenom);
    printf("age :%d \n",age);


    if(sexe == 'm'){
        printf("sexe : %c \n",sexe);
    }
    else if (sexe == 'f'){
        printf("sexe : %c \n",sexe);
    }
    else {
        printf(" sexe se type n'existe pas  \n");
    }

    return 0;
}