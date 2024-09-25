#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b ;
    printf("entrer le nomber a :");
    scanf("%f",&a);
    printf("entrer le nomber b :");
    scanf("%f",&b);

    printf("%f * %f = %.2f \n",a,b,a*b);
    printf("%f + %f = %.2f \n",a,b,a+b);
    printf("%f - %f = %.2f \n",a,b,a-b);
    printf("%f / %f = %.2f \n",a,b,a/b);
    return 0;
}