#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km , Yards;
    printf("entrer la distance en kilometres : ");
    scanf("%f",&km);
    Yards = km * 1093.61 ;
    printf("la distance en Yards et : %.2f",Yards);
    return 0;
}