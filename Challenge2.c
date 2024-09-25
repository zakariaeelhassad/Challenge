#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperature , k;
    printf("entre la temperature : ");
    scanf("%f",&temperature);
    k = temperature * 273.15 ;
    printf("K = %.2f",k);

    return 0;
}
