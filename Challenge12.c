#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    int  n1, n2, n3, n4;
    printf("entre an nomber à quatre chiffres :");
    scanf("%d",&a);

    n1 = a / 1000;
    n2 = (a / 100) % 10;
    n3 = (a / 10) % 10;
    n4 = a % 10;

    printf("Le nombre inverse est : %d%d%d%d\n", n4, n3, n2, n1);

    return 0;
}