#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float r , s , a , p;
    a = 1.33333333 ;
    p=3.14;
    printf("entrer le rayon de la sphère : ");
    scanf("%f",&r);

    s =a * p * pow(r,2);
    printf("le volume d'une sphère : %.2f",s);
    return 0;
}