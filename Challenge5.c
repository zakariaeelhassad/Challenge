#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperature , k;
    printf("entre la temperature : ");
    scanf("%f",&temperature);
    if(temperature<0){
        printf("l'eau  cette temperature est solide");
    }
    else if(0<=temperature &&  temperature<100){
        printf("l'eau a cette temperature est liquide");
    }
    else{
        printf("l'eau a cette temperature est Gaz");
    }
    return 0;
}
