#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a , b , c ;
    float s , r ;
    r = 0.3333333334;
    printf("entrer le nomber a : ");
    scanf("%d",&a);
    printf("entrer le nomber b : ");
    scanf("%d",&b);
    printf("entrer le nomber c : ");
    scanf("%d",&c);

    int m = (a * b * c) ;
    s = pow(m , r);
    printf("la moyenne geometrique de trois nombres : %.2f",s);
    return 0;
}